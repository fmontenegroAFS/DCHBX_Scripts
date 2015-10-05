PublishPlan()
{
	

	lr_start_transaction("INTEG_EMPLYR_0011_PublishPlan");
	
	web_custom_request("publish",
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years/{Plan_ID4URL}/publish",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/javascript",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"Snapshot=t8.inf",
		"Mode=HTML",
		"EncType=",
		LAST);
	
	web_reg_find("Text/IC=Plan Year successfully published", "SaveCount=PublishCount", LAST);
	
	web_url("55c5577169702d34e21e0100",
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"Snapshot=t9.inf",
		"Mode=HTML",
		LAST);

	if (strcmp(lr_eval_string("{PublishCount}"), "0") == 0)
	{
		lr_end_transaction("INTEG_EMPLYR_0011_PublishPlan",LR_FAIL);
		lr_error_message("Failed to Publish Plan for User::: %s%s@test.com", lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	else
	{
		lr_end_transaction("INTEG_EMPLYR_0011_PublishPlan",LR_PASS);
	}
			
	
	return 0;
}
