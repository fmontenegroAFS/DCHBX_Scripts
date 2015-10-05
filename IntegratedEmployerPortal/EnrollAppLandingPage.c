EnrollAppLandingPage()
{
	

//	web_reg_find("Text=Create account", 
//		LAST);
//
//	web_link("Skip to STEP 2, I already understand my options", 
//		"Text=Skip to STEP 2, I already understand my options", 
//		"Snapshot=t33.inf", 
//		EXTRARES, 
//		"Url=http://{EnrollAppLandingPage}/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer=http://{EnrollAppLandingPage}/assets/application-81b9435684369c3a959bcbd58670710b.css", ENDITEM, 
//		"Url=http://js-agent.newrelic.com/nr-686.min.js", "Referer=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM, 
//		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419501&pl=1442434581037&v=686.b365e66&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=11&be=122528&fe=20286&dc=944&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442434581037,%22n%22:0,%22dl%22:122520,%22di%22:123461,%22ds%22:123481,%22de%22:123500,%22dc%22:142822,%22l%22:142822,%22le%22:142839,%22f%22:122428,%22dn%22:122429,%22dne%22:122430,%22c%22:122430,%22ce%22:122430,%22rq%22:122459,%22rp%22:122502,%22rpe%22:122520%7D,%22navigation%22"
//		":%7B%7D%7D&jsonp=NREUM.setToken", "Referer=http://{EnrollAppLandingPage}/users/sign_up", ENDITEM, 
//		LAST);	
	
	
	lr_start_transaction("INTEG_EMPLYR_0000_4_Landing_Page");

	web_url("Enroll App Landing Page", 
		"URL={HTTP}://{EnrollAppLandingPage}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("INTEG_EMPLYR_0000_4_Landing_Page", LR_AUTO);

	lr_think_time(11);
	
	return 0;
}
