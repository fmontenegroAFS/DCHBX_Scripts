ContinueToBusinessCostCalculator()
{
	web_reg_find("Text=Business Ballpark Cost Estimator Eligibility Test | DC Health Link",
	             LAST);
	
	web_link("Continue",
	         "Text=Continue",
	         "Snapshot=t3.inf",
	         EXTRARES,
	         "Url=/sites/all/themes/dchl/css/smallbusiness-calc-eligible.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-off.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/true-lg-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-eligible.css?nu66an", ENDITEM,
	         LAST);

	web_reg_find("Text=Business Ballpark Cost Estimator",
	             LAST);
	lr_start_transaction("INTEG_EMPLYR_0000_3_Continue_To_Business_Cost_Calculator");
	
	web_url("smallbusiness-calc-ballpark",
	        "URL={IntegratedURL}smallbusiness-calc-ballpark",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={IntegratedURL}smallbusiness-calc-eligible",
	        "Snapshot=t4.inf",
	        "Mode=HTML",
	        EXTRARES,
	        "Url=/sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/js/jquery-ui/jquery-ui.theme.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/js/jquery-ui/jquery-ui.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/img/slider/metal-bg.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/fonts/glyphicons-halflings-regular.woff2", "Referer={IntegratedURL}sites/all/themes/dchl/css/bootstrap.min.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/img/slider/handle-lg-blue.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", ENDITEM,
	        "Url=/sites/all/themes/dchl/img/slider/handle-sm-blue.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", ENDITEM,
	        LAST);
	
	lr_end_transaction("INTEG_EMPLYR_0000_3_Continue_To_Business_Cost_Calculator", LR_AUTO);
	
	return 0;

}
