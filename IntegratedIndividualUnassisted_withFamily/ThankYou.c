ThankYou()
{
	
//	/*Correlation comment - Do not change!  Original value='QuYWdfLguh37O3Dh636EiCbi6rxzb12ujqySje47AkH/ZtgBocL7eaDsJADo/1EbpVrNA4iF8ZXcMJ59GvnAdg==' Name ='authenticity_token_7' Type ='ResponseBased'*/
//	web_reg_save_param_regexp(
//		"ParamName=authenticity_token_7",
//		"RegExp=\\ content=\"(.*?)\"\\ ",
//		"Ordinal=2",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=No",
//		LAST);

	web_reg_find("Text=Confirm Your Plan Selection",LAST);

	lr_think_time(9);
	
	lr_start_transaction("INTEG_UNASSISTED_0019_Thank_You");

//	web_submit_data("thankyou",
//	                "Action={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id={plan_id}",
//	                "Method=POST",
//	                "RecContentType=text/html",
//	                "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual",
//	                "Snapshot=t78.inf",
//	                "Mode=HTML",
//	                ITEMDATA,
//	                "Name=_method", "Value=post", ENDITEM,
//	                "Name=authenticity_token", "Value={authenticity_token_6}", ENDITEM,
//	                LAST);

	web_url("thankyou",
	        "URL={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=shop&plan_id={plan_id}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=shop",
	        "Snapshot=t14.inf",
	        "Mode=HTML",
	        LAST);
	
	lr_end_transaction("INTEG_UNASSISTED_0019_Thank_You", LR_AUTO);

	
	return 0;
}
