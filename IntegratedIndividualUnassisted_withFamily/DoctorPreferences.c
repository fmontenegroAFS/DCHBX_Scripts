DoctorPreferences()
{
	
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Doctor Preferences",
	             LAST);	
	lr_start_transaction("INTEG_UNASSISTED_0005_Doctor_Preferences");

	web_url("doctors.cfm",
	        "URL={CheckbookURL}/{Checkbook_specifics}/doctors.cfm?age=25&healthStatus=&medicalExpense=&pregnant=0&native=0&findSubsidy=no&householdNumber=1&income=&calculateSubsidy=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={CheckbookURL}/{Checkbook_specifics}/search.cfm?data=eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7InN0YXJ0IjoiIn19",
	        "Snapshot=t64.inf",
	        "Mode=HTML",
	        LAST);

	lr_end_transaction("INTEG_UNASSISTED_0005_Doctor_Preferences", LR_AUTO);

	
	return 0;
}
