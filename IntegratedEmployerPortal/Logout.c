Logout()
{
	lr_start_transaction("INTEG_EMPLYR_1000_Logout");
	
	web_submit_data("sign_out",
		"Action={HTTP}://{EnrollAppLandingPage}/users/sign_out",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_method", "Value=delete", ENDITEM,
		"Name=authenticity_token", "Value={AUTH_TOKEN_4}", ENDITEM,
		LAST);

	lr_end_transaction("INTEG_EMPLYR_1000_Logout",LR_AUTO);
	
	return 0;
}
