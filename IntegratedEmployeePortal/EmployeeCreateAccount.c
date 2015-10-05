EmployeeCreateAccount()
{

/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);

 	web_reg_find("Text/IC=Your account has been created", "SAVECOUNT=AccountCreated", LAST );
 	
	lr_start_transaction("EMPLYE_0004_Create_Account_Submit");

	web_submit_data("users",
		"Action=http://{enrollAppLandingPage}/users",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/users/sign_up",
		"Snapshot=t7.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token}", ENDITEM,
		"Name=user[referer]", "Value=http://{enrollAppLandingPage}/users/sign_in", ENDITEM,
		"Name=user[email]", "Value={EmpWorkEmail}", ENDITEM,
		"Name=user[password]", "Value=Abcd!234", ENDITEM,
		"Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM,
		"Name=user[invitation_id]", "Value=", ENDITEM,
		"Name=commit", "Value=Create account", ENDITEM,
		LAST);

	if (strcmp(lr_eval_string("{AccountCreated}"), "0") > 0)
	{
		lr_end_transaction("EMPLYE_0004_Create_Account_Submit",LR_PASS);
	}
	else
	{
		lr_end_transaction("EMPLYE_0004_Create_Account_Submit",LR_FAIL);
		lr_error_message("Failed to create account for %s", lr_eval_string("{EmpWorkEmail}"));
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	
	lr_think_time(10);
	
	return 0;
}