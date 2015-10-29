AddFamilyMembers()
{
	
	/*Correlation comment - Do not change!  Original value='WzeeEM4kEEYRKr0WQ+O3ryAIQezz542ybUd1nVAx3moJuYsRSLK33OXZ9LfEXCnXk5Hz7Rv/Jb9oaA3wA38dsw==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_family",
		"RegExp=name=\"csrf-token\" content=\"(.*?)\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/new*",
		LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0015_1_Add_Spouse");

	web_link("Add Member",
	         "Text=Add Member",
	         "Ordinal=1",
	         "Snapshot=t13.inf",
	         LAST);
	
	/*Correlation comment - Do not change!  Original value='WzeeEM4kEEYRKr0WQ+O3ryAIQezz542ybUd1nVAx3moJuYsRSLK33OXZ9LfEXCnXk5Hz7Rv/Jb9oaA3wA38dsw==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_family_2",
		"RegExp=meta name=\"csrf-token\" content=\"(.*?)\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/insured*",
		LAST);

	web_submit_data("family_members",
	                "Action={enrollPreprodURL}/insured/family_members",
	                "Method=POST",
	                "RecContentType=text/javascript",
	                "Referer={enrollPreprodURL}/insured/family_members?consumer_role_id={consumer_role_id}",
	                "Snapshot=t14.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_family}", ENDITEM,
	                "Name=dependent[first_name]", "Value=spouse", ENDITEM,
	                "Name=dependent[middle_name]", "Value=", ENDITEM,
	                "Name=dependent[last_name]", "Value={applicantName}", ENDITEM,
	                "Name=dependent[dob]", "Value=1978-01-01", ENDITEM,
	                "Name=jq_datepicker_ignore_dependent[dob]", "Value=01/01/1978", ENDITEM,
	                "Name=dependent[ssn]", "Value=", ENDITEM,
	                "Name=dependent[no_ssn]", "Value=0", ENDITEM,
	                "Name=dependent[no_ssn]", "Value=1", ENDITEM,
	                "Name=dependent[relationship]", "Value=spouse", ENDITEM,
	                "Name=dependent[gender]", "Value=female", ENDITEM,
	                "Name=dependent[us_citizen]", "Value=true", ENDITEM,
	                "Name=dependent[naturalized_citizen]", "Value=false", ENDITEM,
	                "Name=immigration_doc_type", "Value=", ENDITEM,
	                "Name=naturalization_doc_type", "Value=", ENDITEM,
	                "Name=dependent[indian_tribe_member]", "Value=false", ENDITEM,
	                "Name=dependent[tribal_id]", "Value=", ENDITEM,
	                "Name=dependent[is_incarcerated]", "Value=false", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=form_for_consumer_role", "Value=false", ENDITEM,
	                "Name=dependent[is_consumer_role]", "Value=true", ENDITEM,
	                "Name=dependent[same_with_primary]", "Value=false", ENDITEM,
	                "Name=dependent[same_with_primary]", "Value=true", ENDITEM,
	                "Name=dependent[no_dc_address]", "Value=false", ENDITEM,
	                "Name=dependent[addresses][kind]", "Value=home", ENDITEM,
	                "Name=dependent[addresses][address_1]", "Value=", ENDITEM,
	                "Name=dependent[addresses][address_2]", "Value=", ENDITEM,
	                "Name=dependent[addresses][city]", "Value=", ENDITEM,
	                "Name=dependent[addresses][state]", "Value=", ENDITEM,
	                "Name=dependent[addresses][zip]", "Value=", ENDITEM,
	                "Name=dependent[family_id]", "Value={family_id}", ENDITEM,
	                "Name=button", "Value=", ENDITEM,
	                LAST);
	
	lr_end_transaction("INTEG_UNASSISTED_0015_1_Add_Spouse",LR_AUTO);
	
	lr_think_time(10);

	/*Correlation comment - Do not change!  Original value='WzeeEM4kEEYRKr0WQ+O3ryAIQezz542ybUd1nVAx3moJuYsRSLK33OXZ9LfEXCnXk5Hz7Rv/Jb9oaA3wA38dsw==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_family_3",
		"RegExp=name=\"csrf-token\" content=\"(.*?)\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/insured*",
		LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0015_2_Add_Child_1");

		web_submit_data("family_members_2",
	                "Action={enrollPreprodURL}/insured/family_members",
	                "Method=POST",
	                "RecContentType=text/javascript",
	                "Referer={enrollPreprodURL}/insured/family_members?consumer_role_id={consumer_role_id}",
	                "Snapshot=t14.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_family_2}", ENDITEM,
	                "Name=dependent[first_name]", "Value=child1", ENDITEM,
	                "Name=dependent[middle_name]", "Value=", ENDITEM,
	                "Name=dependent[last_name]", "Value={applicantName}", ENDITEM,
	                "Name=dependent[dob]", "Value=2000-01-01", ENDITEM,
	                "Name=jq_datepicker_ignore_dependent[dob]", "Value=01/01/2000", ENDITEM,
	                "Name=dependent[ssn]", "Value=", ENDITEM,
	                "Name=dependent[no_ssn]", "Value=0", ENDITEM,
	                "Name=dependent[no_ssn]", "Value=1", ENDITEM,
	                "Name=dependent[relationship]", "Value=child", ENDITEM,
	                "Name=dependent[gender]", "Value=male", ENDITEM,
	                "Name=dependent[us_citizen]", "Value=true", ENDITEM,
	                "Name=dependent[naturalized_citizen]", "Value=false", ENDITEM,
	                "Name=immigration_doc_type", "Value=", ENDITEM,
	                "Name=naturalization_doc_type", "Value=", ENDITEM,
	                "Name=dependent[indian_tribe_member]", "Value=false", ENDITEM,
	                "Name=dependent[tribal_id]", "Value=", ENDITEM,
	                "Name=dependent[is_incarcerated]", "Value=false", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=form_for_consumer_role", "Value=false", ENDITEM,
	                "Name=dependent[is_consumer_role]", "Value=true", ENDITEM,
	                "Name=dependent[same_with_primary]", "Value=false", ENDITEM,
	                "Name=dependent[same_with_primary]", "Value=true", ENDITEM,
	                "Name=dependent[no_dc_address]", "Value=false", ENDITEM,
	                "Name=dependent[addresses][kind]", "Value=home", ENDITEM,
	                "Name=dependent[addresses][address_1]", "Value=", ENDITEM,
	                "Name=dependent[addresses][address_2]", "Value=", ENDITEM,
	                "Name=dependent[addresses][city]", "Value=", ENDITEM,
	                "Name=dependent[addresses][state]", "Value=", ENDITEM,
	                "Name=dependent[addresses][zip]", "Value=", ENDITEM,
	                "Name=dependent[family_id]", "Value={family_id}", ENDITEM,
	                "Name=button", "Value=", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0015_2_Add_Child_1", LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("INTEG_UNASSISTED_0015_3_Add_Child_2");

		web_submit_data("family_members_3",
	                "Action={enrollPreprodURL}/insured/family_members",
	                "Method=POST",
	                "RecContentType=text/javascript",
	                "Referer={enrollPreprodURL}/insured/family_members?consumer_role_id={consumer_role_id}",
	                "Snapshot=t14.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_family_3}", ENDITEM,
	                "Name=dependent[first_name]", "Value=child2", ENDITEM,
	                "Name=dependent[middle_name]", "Value=", ENDITEM,
	                "Name=dependent[last_name]", "Value={applicantName}", ENDITEM,
	                "Name=dependent[dob]", "Value=2000-01-01", ENDITEM,
	                "Name=jq_datepicker_ignore_dependent[dob]", "Value=01/01/2000", ENDITEM,
	                "Name=dependent[ssn]", "Value=", ENDITEM,
	                "Name=dependent[no_ssn]", "Value=0", ENDITEM,
	                "Name=dependent[no_ssn]", "Value=1", ENDITEM,
	                "Name=dependent[relationship]", "Value=child", ENDITEM,
	                "Name=dependent[gender]", "Value=female", ENDITEM,
	                "Name=dependent[us_citizen]", "Value=true", ENDITEM,
	                "Name=dependent[naturalized_citizen]", "Value=false", ENDITEM,
	                "Name=immigration_doc_type", "Value=", ENDITEM,
	                "Name=naturalization_doc_type", "Value=", ENDITEM,
	                "Name=dependent[indian_tribe_member]", "Value=false", ENDITEM,
	                "Name=dependent[tribal_id]", "Value=", ENDITEM,
	                "Name=dependent[is_incarcerated]", "Value=false", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=dependent[ethnicity][]", "Value=", ENDITEM,
	                "Name=form_for_consumer_role", "Value=false", ENDITEM,
	                "Name=dependent[is_consumer_role]", "Value=true", ENDITEM,
	                "Name=dependent[same_with_primary]", "Value=false", ENDITEM,
	                "Name=dependent[same_with_primary]", "Value=true", ENDITEM,
	                "Name=dependent[no_dc_address]", "Value=false", ENDITEM,
	                "Name=dependent[addresses][kind]", "Value=home", ENDITEM,
	                "Name=dependent[addresses][address_1]", "Value=", ENDITEM,
	                "Name=dependent[addresses][address_2]", "Value=", ENDITEM,
	                "Name=dependent[addresses][city]", "Value=", ENDITEM,
	                "Name=dependent[addresses][state]", "Value=", ENDITEM,
	                "Name=dependent[addresses][zip]", "Value=", ENDITEM,
	                "Name=dependent[family_id]", "Value={family_id}", ENDITEM,
	                "Name=button", "Value=", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0015_3_Add_Child_2", LR_AUTO);

	
	return 0;
}
