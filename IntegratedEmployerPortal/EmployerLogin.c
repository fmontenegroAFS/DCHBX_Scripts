EmployerLogin()
{
	
	lr_start_transaction("INTEG_EMPLYR_0004_Login");
	
	web_submit_data("sign_in",
		"Action={HTTP}://{EnrollAppLandingPage}/users/sign_in",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/users/sign_in",
		"Snapshot=t11.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=✓", ENDITEM,
		"Name=authenticity_token", "Value={AUTH_TOKEN_5}", ENDITEM,
		"Name=user[email]", "Value={pEmpPrefix}{FEIN}@test.com", ENDITEM,
//		"Name=user[email]", "Value=DCGOVEmployer01@yopmail.com", ENDITEM,
//		"Name=user[password]", "Value=DCGOVEmployer01", ENDITEM,
		"Name=user[password]", "Value=Abcd!234", ENDITEM,
		"Name=user[remember_me]", "Value=0", ENDITEM,
		"Name=commit", "Value=Sign in", ENDITEM,
		LAST);

	lr_end_transaction("INTEG_EMPLYR_0004_Login", LR_AUTO);
//	
	
	return 0;
}
