IndividualPage()
{
	
	web_reg_find("Text=Individual &amp; Family | DC Health Link",
	             LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0002_Individual_Page");

	web_link("Individual & Family",
	         "Text=Individual & Family",
	         "Ordinal=1",
	         "Snapshot=t61.inf",
	         EXTRARES,
	         "Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/person-circle-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0002_Individual_Page", LR_AUTO);

	
	return 0;
}
