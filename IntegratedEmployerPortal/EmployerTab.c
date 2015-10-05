EmployerTab()
{
	
	lr_start_transaction("INTEG_EMPLYR_0001_Click_on_Employer_Portal_Tab");

	web_url("Employer Portal", 
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={HTTP}://{EnrollAppLandingPage}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("INTEG_EMPLYR_0001_Click_on_Employer_Portal_Tab",LR_AUTO);
	
	return 0;
}
