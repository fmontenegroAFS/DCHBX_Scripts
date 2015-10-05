FinancialAssistanceCalculator()
{
	lr_start_transaction("INTEG_UNASSISTED_0003_Financial_Assistance_Calculator");

	web_reg_find("Text=DC Plan Comparison Tool 2016",
	             LAST);

	web_link("Financial Assistance Calculator",
	         "Text=Financial Assistance Calculator",
	         "Ordinal=1",
	         "Snapshot=t3.inf",
	         EXTRARES,
	         "Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/info-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM,
	         "Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/video-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM,
	         "Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/reload-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0003_Financial_Assistance_Calculator", LR_AUTO);

	
	return 0;
}
