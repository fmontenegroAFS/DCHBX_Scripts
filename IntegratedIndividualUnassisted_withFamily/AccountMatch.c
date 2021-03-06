AccountMatch()
{
	web_reg_find("Text=Thank you.", 
	             "SAVECOUNT=AccountMatch",
	             	LAST);
	
	web_reg_find("Text=The Curam account lookup service is currently unavailable", 
	             "SAVECOUNT=CuramUnavailable",
	             	LAST);

	/*Correlation comment - Do not change!  Original value='{UserID}' Name ='UserID' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=UserID",
		"RegExp=person%5Buser_id%5D=(.*?)\">Continue",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/match*",
		LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0011_Account_Match");
	
//	web_url("match",
//	        "URL={enrollPreprodURL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=Test&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={applicantName}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={applicantSSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
//	        "Resource=0",
//	        "RecContentType=text/html",
//	        "Referer={enrollPreprodURL}/insured/consumer_role/search?uqhp=true",
//	        "Snapshot=t70.inf",
//	        "Mode=HTML",
//	        LAST);
	
	web_submit_data("match", 
		"Action={enrollPreprodURL}/insured/consumer_role/match", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={enrollPreprodURL}/insured/consumer_role/search?uqhp=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value={authenticity_token}", ENDITEM, 
		"Name=people[id]", "Value=", ENDITEM, 
		"Name=person[first_name]", "Value=Test", ENDITEM, 
		"Name=person[middle_name]", "Value=L", ENDITEM, 
		"Name=person[last_name]", "Value={applicantName}", ENDITEM, 
		"Name=person[name_sfx]", "Value=", ENDITEM, 
		"Name=person[dob]", "Value=1978-01-01", ENDITEM, 
		"Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", ENDITEM, 
		"Name=person[ssn]", "Value={applicantSSN}", ENDITEM, 
		"Name=person[no_ssn]", "Value=0", ENDITEM, 
		"Name=person[gender]", "Value=female", ENDITEM, 
		LAST);	
	

	if (strcmp(lr_eval_string("{CuramUnavailable}"), "0") > 0)
	{
			lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match",LR_FAIL);
			lr_error_message("Curam Service Unavailable for User %s", lr_eval_string("{applicantName}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	else if (strcmp(lr_eval_string("{AccountMatch}"), "0") > 0)
	{
			lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match",LR_PASS);
	}
	else
	{
			lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match",LR_FAIL);
			lr_error_message("Failed to get acknowledgement msg for User %s", lr_eval_string("{applicantName}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	
	
//	lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match", LR_AUTO);

	
	return 0;
}
