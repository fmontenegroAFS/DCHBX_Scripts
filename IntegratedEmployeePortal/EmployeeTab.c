EmployeeTab()
{
	
	web_reg_find("Text=Employee Health Insurance",LAST);

//	web_add_cookie("has_js=1; DOMAIN=qa2.dchealthlink.com");

	lr_start_transaction("INTEG_EMPLYE_0000_2_Employee_Tab");

	web_link("Employee",
	         "Text=Employee",
	         "Snapshot=t2.inf",
	         EXTRARES,
	         "Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/person-circle-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", ENDITEM,
	         "Url=/sites/all/modules/extlink/extlink.png", "Referer={IntegratedURL}sites/all/modules/extlink/extlink.css?nuf0fm", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_EMPLYE_0000_2_Employee_Tab", LR_AUTO);


	return 0;
}
