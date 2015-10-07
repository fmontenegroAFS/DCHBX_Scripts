EmployerCreateProfile()
{
	
	/*Correlation comment - Do not change!  Original value='{EMPLOYER_ID}' Name ='EMPLOYER_ID' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=EMPLOYER_ID",
		"RegExp=employer_profiles/(.*?)\\?tab",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/employer_profiles*",
		LAST);
    
	lr_start_transaction("INTEG_EMPLYR_0005_CreateBusinesss_Profile");

	web_submit_data("employer_profiles",
		"Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=✓", ENDITEM,
		"Name=authenticity_token", "Value={AUTH_TOKEN_2}", ENDITEM,
		"Name=organization[first_name]", "Value=F{FEIN}", ENDITEM, 
		"Name=organization[last_name]", "Value=L{FEIN}", ENDITEM, 
		"Name=organization[dob]", "Value=1978-07-15", ENDITEM,
		"Name=jq_datepicker_ignore_organization[dob]", "Value=07/15/1978", ENDITEM,
		"Name=organization[legal_name]", "Value={LegalName}{FEIN}", ENDITEM, 
		"Name=organization[dba]", "Value=dba{FEIN}", ENDITEM, 
		"Name=organization[fein]", "Value={FEIN}", ENDITEM, 
		"Name=organization[entity_kind]", "Value=c_corporation", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][kind]", "Value=primary", ENDITEM,
		"Name=organization[office_locations_attributes][0][address_attributes][address_1]", "Value=609 H street NE", ENDITEM,
		"Name=organization[office_locations_attributes][0][address_attributes][address_2]", "Value=", ENDITEM,
		"Name=organization[office_locations_attributes][0][address_attributes][city]", "Value=washington", ENDITEM,
		"Name=organization[office_locations_attributes][0][address_attributes][state]", "Value=DC", ENDITEM,
		"Name=organization[office_locations_attributes][0][address_attributes][zip]", "Value=20002", ENDITEM,
		"Name=organization[office_locations_attributes][0][phone_attributes][kind]", "Value=phone main", ENDITEM,
		"Name=organization[office_locations_attributes][0][phone_attributes][area_code]", "Value=718", ENDITEM,
		"Name=organization[office_locations_attributes][0][phone_attributes][number]", "Value=121-2111", ENDITEM,
		"Name=organization[office_locations_attributes][0][phone_attributes][extension]", "Value=", ENDITEM,
		LAST);

	lr_end_transaction("INTEG_EMPLYR_0005_CreateBusinesss_Profile",LR_AUTO);

	return 0;
}
