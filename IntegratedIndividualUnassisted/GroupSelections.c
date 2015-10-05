GroupSelections()
{
	/*Correlation comment - Do not change!  Original value='QuYWdfLguh37O3Dh636EiCbi6rxzb12ujqySje47AkH/ZtgBocL7eaDsJADo/1EbpVrNA4iF8ZXcMJ59GvnAdg==' Name ='authenticity_token_6' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_6",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	/*Correlation comment - Do not change!  Original value='{plan_shoppings}' Name ='plan_shoppings' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=plan_shoppings",
		"RegExp=plan_shoppings/(.*?)\\?coverage_kind",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/group_selections*",
		LAST);

	web_reg_find("Text=Choose a healthcare plan",LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0018_ID_Group_Selections");

	web_submit_data("group_selections",
	                "Action={enrollPreprodURL}/insured/group_selections",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/group_selections/new?consumer_role_id={consumer_role_id}&enrollment_kind=sep&person_id={person_id}",
	                "Snapshot=t77.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_5}", ENDITEM,
	                "Name=person_id", "Value={person_id}", ENDITEM,
	                "Name=employee_role_id", "Value=", ENDITEM,
	                "Name=coverage_household_id", "Value=", ENDITEM,
	                "Name=enrollment_kind", "Value=sep", ENDITEM,
	                "Name=family_member_ids[0]", "Value={family_id}", ENDITEM,
	                "Name=coverage_kind", "Value=health", ENDITEM,
	                "Name=market_kind", "Value=individual", ENDITEM,
	                EXTRARES,
	                "Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442588106003&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH0kKBAo6Q18NEUJfD1dKSRYMCkc%3D&ap=168&be=600&fe=18768&dc=4197&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442588106003,%22n%22:0,%22dl%22:597,%22di%22:4819,%22ds%22:4820,%22de%22:4890,%22dc%22:19391,%22l%22:19391,%22le%22:19396,%22r%22:0,%22re%22:260,%22f%22:261,%22dn%22:262,%22dne%22:263,%22c%22:263,%22ce%22:263,%22rq%22:350,%22rp%22:597,%22rpe%22:597%7D,%22navigation%22:%7B%22rc%22:1%7D%7D&"
	                "jsonp=NREUM.setToken", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM,
	                "Url=plan_shoppings/{plan_shoppings}/plans?change_plan=&amp;coverage_kind=health&amp;enrollment_kind=sep&amp;market_kind=individual", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM,
	                "Url=../assets/logo/carrier/carefirst-dadfc5ebd8daceb4a814547e493b2de5.jpg", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM,
	                "Url=../assets/logo/carrier/kaiser-ed237f9064fd82d21a51b73ca5fd07a2.jpg", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM,
	                "Url=../assets/logo/carrier/aetna-f66e80a27c63101284b712ef5337b1eb.jpg", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0018_ID_Group_Selections", LR_AUTO);

	return 0;
}
