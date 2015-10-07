Logout()
{
	lr_start_transaction("INTEG_EMPLYR_1000_Logout");

//	web_submit_data("sign_out",
//		"Action={HTTP}://{EnrollAppLandingPage}/users/sign_out",
//		"Method=POST",
//		"TargetFrame=",
//		"RecContentType=text/html",
//		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}?tab=home",
//		"Snapshot=t9.inf",
//		"Mode=HTML",
//		ITEMDATA,
//		"Name=_method", "Value=delete", ENDITEM,
//		"Name=authenticity_token", "Value={AUTH_TOKEN_4}", ENDITEM,
//		LAST);

	web_url("logout", 
		"URL=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);	
	
	lr_end_transaction("INTEG_EMPLYR_1000_Logout",LR_AUTO);
	
	return 0;
}
