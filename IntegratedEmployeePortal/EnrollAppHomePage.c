EnrollAppHomePage()
{
	
	/*Correlation comment - Do not change!  Original value='YIoSW1xVv+XrSHY16uHVDEC4Q+jlB7PBIoHlxz03QQIBYLp3ByBPbq7RWU4qZsNyWH3ohPnCa06EI1OAGxicDg==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link",
	             LAST);
	
//	web_link("Continue",
//	         "Text=Continue",
//	         "Snapshot=t3.inf",
//	         EXTRARES,
//	         "Url=http://{enrollAppLandingPage}/assets/AvenirLTStd-Light-af804d2ea26c0ab34f6d6f1c148e90b2.woff", "Referer=http://enroll-test.dchbx.org/assets/application-98fd18886e466dc937acbb564355ff71.css", ENDITEM,
//	         LAST);


	
	lr_start_transaction("EMPLYE_0001_LoadHomePage");
	
	web_url("{enrollAppLandingPage}",
	        "URL=http://{enrollAppLandingPage}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t4.inf",
	        "Mode=HTML",
	        LAST);

	lr_end_transaction("EMPLYE_0001_LoadHomePage", LR_AUTO);
	
	lr_think_time(10);
	
	web_reg_find("Text=Health Insurance Marketplace",
	             LAST);
	
	lr_start_transaction("EMPLYE_0001_Click_on_Employee_Tab");

	web_link("Employee Portal",
	         "Text=Employee Portal",
	         "Snapshot=t5.inf",
	         LAST);

	lr_end_transaction("EMPLYE_0001_Click_on_Employee_Tab",LR_AUTO);
	
	lr_think_time(10);

	return 0;
}
