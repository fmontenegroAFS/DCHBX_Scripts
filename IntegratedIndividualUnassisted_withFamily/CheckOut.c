CheckOut()
{
	web_reg_find("Text/IC=Enrollment Submitted",LAST);
	
	/*Correlation comment - Do not change!  Original value='QuYWdfLguh37O3Dh636EiCbi6rxzb12ujqySje47AkH/ZtgBocL7eaDsJADo/1EbpVrNA4iF8ZXcMJ59GvnAdg==' Name ='authenticity_token_7' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_8",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	lr_start_transaction("INTEG_UNASSISTED_0020_Check_Out");

	web_submit_data("checkout",
	                "Action={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/checkout?coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id={plan_id}",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id={plan_id}",
	                "Snapshot=t79.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=_method", "Value=post", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_6}", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0020_Check_Out", LR_AUTO);
	
	return 0;
}
