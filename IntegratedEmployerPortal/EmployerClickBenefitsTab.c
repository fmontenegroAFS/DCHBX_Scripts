EmployerClickBenefitsTab()
{
	
	web_reg_save_param("AUTH_TOKEN_4", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST); 
	
	lr_start_transaction("INTEG_EMPLYR_0006_Click_Benefits_Tab");

	web_url("Benefits Benefits", 
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/show_profile?tab=benefits", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("INTEG_EMPLYR_0006_Click_Benefits_Tab",LR_AUTO);
	
	return 0;
}
