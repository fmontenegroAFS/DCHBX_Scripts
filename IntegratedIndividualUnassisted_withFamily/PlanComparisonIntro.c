PlanComparisonIntro()
{
		
	web_reg_find("Text=DC Plan Comparison Tool 2016",
	             LAST);	
	
	lr_start_transaction("INTEG_UNASSISTED_0003_Plan_Comparison_Intro");

	web_link("Continue",
	         "Text=Continue",
	         "Ordinal=1",
	         "Snapshot=t62.inf",
	         EXTRARES,
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/info-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", ENDITEM,
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/video-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", ENDITEM,
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/plus-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", ENDITEM,
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/flag-lg-yellow.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", ENDITEM,
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/reload-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", ENDITEM,
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/print-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0003_Plan_Comparison_Intro", LR_AUTO);

	
	return 0;
}
