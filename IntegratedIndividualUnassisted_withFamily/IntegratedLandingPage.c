IntegratedLandingPage()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_reg_find("Text=Welcome to DC's Health Insurance Marketplace",
	             LAST);		
	
	lr_start_transaction("INTEG_UNASSISTED_0001_Integrated_Landing_Page");

	web_url("preprod.dchealthlink.com",
	        "URL={IntegratedURL}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t60.inf",
	        "Mode=HTML",
	        EXTRARES,
	        "Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/date/date_api/date.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/calendar/css/calendar_multiday.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/fences/field.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/extlink/extlink.css?nuobvv", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nuobvv", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap.min.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/views/css/views.css?nuobvv", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nuobvv", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/ctools/css/ctools.css?nuobvv", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/home.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/custom/dchl_google_translate/dchl_google_translate.css?nuobvv", ENDITEM,
	        "Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer={IntegratedURL}sites/all/themes/dchl/css/home.css?nuobvv", ENDITEM,
	        "Url=/sites/all/modules/extlink/extlink.png", "Referer={IntegratedURL}sites/all/modules/extlink/extlink.css?nuobvv", ENDITEM,
	        LAST);


	
//	web_link("I ACCEPT THE TERMS", 
//		"Text=I ACCEPT THE TERMS", 
//		"Snapshot=t2.inf", 
//		LAST);
	
	lr_end_transaction("INTEG_UNASSISTED_0001_Integrated_Landing_Page", LR_AUTO);

	
	return 0;
}
