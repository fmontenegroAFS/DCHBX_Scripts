SmallBusinessTab()
{
	
	web_reg_find("Text=Small Business Health Insurance",
	             LAST);
	
	lr_start_transaction("INTEG_EMPLYR_0000_2_Small_Business_Tab");

	web_link("Small Business",
	         "Text=Small Business",
	         "Snapshot=t2.inf",
	         EXTRARES,
	         "Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/folder-sm-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_EMPLYR_0000_2_Small_Business_Tab", LR_AUTO);

	return 0;
}
