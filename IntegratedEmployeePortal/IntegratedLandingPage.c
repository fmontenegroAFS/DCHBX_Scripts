IntegratedLandingPage()
{
	web_reg_find("Text=What kind of health insurance do you need?",LAST);

//	web_add_cookie("SSESSd887f51ab6d1bc995bd49426f78d3b00=lKNDuIbQFY4N0CSnYg_ZhKzLjyptmwBzGbSOXa7-l9M; DOMAIN=qa2.dchealthlink.com");

	lr_start_transaction("INTEG_EMPLYE_0000_1_Integrated_Landing_Page");

	web_url("Integrated Landing Page",
	        "URL={IntegratedURL}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t1.inf",
	        "Mode=HTML",
	        EXTRARES,
	        "Url=/sites/all/modules/fences/field.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/date/date_api/date.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/calendar/css/calendar_multiday.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/extlink/extlink.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/views/css/views.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap.min.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/shared.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/themes/dchl/css/home.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/ctools/css/ctools.css?nuf0fm", ENDITEM,
	        "Url=/sites/all/modules/custom/dchl_google_translate/dchl_google_translate.css?nuf0fm", ENDITEM,
	        "Url=/misc/drupal.js?nuf0fm", ENDITEM,
	        "Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer={IntegratedURL}sites/all/themes/dchl/css/home.css?nuf0fm", ENDITEM,
	        LAST);

	lr_end_transaction("INTEG_EMPLYE_0000_1_Integrated_Landing_Page", LR_AUTO);

	
	return 0;
}
