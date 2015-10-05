SubmitChangeReason()
{
	/*Correlation comment - Do not change!  Original value='QuYWdfLguh37O3Dh636EiCbi6rxzb12ujqySje47AkH/ZtgBocL7eaDsJADo/1EbpVrNA4iF8ZXcMJ59GvnAdg==' Name ='authenticity_token_4' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_4",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	web_reg_find("Text=Special Enrollment Period",LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0016_ID_Submit_Covered_Family_Members");

	web_link("Continue_4",
	         "Text=Continue",
	         "Snapshot=t75.inf",
	         EXTRARES,
	         "Url=check_qle_date.js?date_val=09%2F01%2F2015&qle_type=I%27m+losing+other+health+insuranceI%27m+losing+other+health+insurance&qle_id={qle_id}", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0016_ID_Submit_Covered_Family_Members", LR_AUTO);
	
	lr_think_time(20);
	
	/*Correlation comment - Do not change!  Original value='QuYWdfLguh37O3Dh636EiCbi6rxzb12ujqySje47AkH/ZtgBocL7eaDsJADo/1EbpVrNA4iF8ZXcMJ59GvnAdg==' Name ='authenticity_token_5' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_5",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	/*Correlation comment - Do not change!  Original value='{family_id}' Name ='family_id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=family_id",
		"RegExp=id=\"family_member_ids_0\"\\ value=\"(.*?)\"\\ onclick",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/new*",
		LAST);
	
	web_reg_find("Text/IC=Covered Family Members",
	             LAST);

	lr_start_transaction("INTEG_UNASSISTED_0017_ID_Submit_Change_Reason");	
	
	web_submit_data("record_sep",
	                "Action={enrollPreprodURL}/insured/families/record_sep",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/families/find_sep",
	                "Snapshot=t76.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_4}", ENDITEM,
	                "Name=qle_date", "Value={qle_date}", ENDITEM,
	                "Name=change_plan", "Value={qle_text}", ENDITEM,
	                "Name=qle_id", "Value={qle_id}", ENDITEM,
	                "Name=employee_role_id", "Value=None", ENDITEM,
	                "Name=effective_on_kind", "Value=first_of_month", ENDITEM,
	                "Name=commit", "Value=Continue", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0017_ID_Submit_Change_Reason", LR_AUTO);
	
	return 0;
}
