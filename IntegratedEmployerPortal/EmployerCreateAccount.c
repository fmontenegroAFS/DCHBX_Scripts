EmployerCreateAccount()
{
	int savedcount, duplicatecount;
	web_set_sockets_option("SSL_VERSION", "TLS1.1");
		
	web_reg_save_param("AUTH_TOKEN_1", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST); 
	
	lr_start_transaction("INTEG_EMPLYR_0002_Click_on_Create_Account");

	web_url("Create account", 
		"URL={HTTP}://{EnrollAppLandingPage}/users/sign_up", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={HTTP}://{EnrollAppLandingPage}/users/sign_in", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("INTEG_EMPLYR_0002_Click_on_Create_Account",LR_AUTO);
	
	lr_think_time(11);
	
	web_reg_save_param("AUTH_TOKEN_2", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST);
	web_reg_find("Text/IC=Your account has been created", "SaveCount=CreateAccountCount", LAST);

	lr_start_transaction("INTEG_EMPLYR_0003_Create_Account_Submit");
	
	web_submit_data("users", 
		"Action={HTTP}://{EnrollAppLandingPage}/users", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={HTTP}://{EnrollAppLandingPage}/users/sign_up", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value={AUTH_TOKEN_1}", ENDITEM,  
		"Name=user[referer]", "Value={HTTP}://{EnrollAppLandingPage}/users/sign_in", ENDITEM, 
		"Name=user[email]", "Value={pEmpPrefix}{FEIN}@test.com", ENDITEM, 
		"Name=user[password]", "Value=Abcd!234", ENDITEM,
		"Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM, 
		"Name=user[invitation_id]", "Value=", ENDITEM, 
		"Name=commit", "Value=Create account", ENDITEM, 	
		LAST);

	if (strcmp(lr_eval_string("{CreateAccountCount}"), "0") == 0)
	{
		lr_end_transaction("INTEG_EMPLYR_0003_Create_Account_Submit",LR_FAIL);
		lr_error_message("Failed to Create Account for::: %s%s@test.com", lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);		
	}
	else
	{
		lr_log_message("Successfully created account for ::: %s%s@test.com", lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));
		lr_end_transaction("INTEG_EMPLYR_0003_Create_Account_Submit",LR_PASS);
	}


	
	return 0;
}
