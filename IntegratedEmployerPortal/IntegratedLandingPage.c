IntegratedLandingPage()
{
	
	web_set_sockets_option("SSL_VERSION", "TLS1.1");	

//	web_reg_find("Text=UAT - DC Health Link | Welcome to DC's Health Insurance Marketplace",
//	             LAST);
	
	web_reg_find("Text=What kind of health insurance do you need?",LAST);

	lr_start_transaction("INTEG_EMPLYR_0000_1_Integrated_Landing_Page");
	
	web_url("{IntegratedURL}",
	        "URL={IntegratedURL}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t1.inf",
	        "Mode=HTML",
	        EXTRARES,
	        "Url=/sites/all/modules/calendar/css/calendar_multiday.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/date/date_api/date.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/fences/field.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/extlink/extlink.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/views/css/views.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap.min.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/shared.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/home.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/ctools/css/ctools.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer={IntegratedURL}sites/all/themes/dchl/css/home.css?nu66an", ENDITEM,
	        "Url=/sites/all/modules/extlink/extlink.png", "Referer={IntegratedURL}sites/all/modules/extlink/extlink.css?nu66an", ENDITEM,
	        LAST);

	lr_end_transaction("INTEG_EMPLYR_0000_1_Integrated_Landing_Page", LR_AUTO);

	
	return 0;
}
