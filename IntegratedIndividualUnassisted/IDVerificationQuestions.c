IDVerificationQuestions()
{
	
	web_reg_find("Text/IC=content interactive_identity_verifications",LAST);

	/*Correlation comment - Do not change!  Original value='QuYWdfLguh37O3Dh636EiCbi6rxzb12ujqySje47AkH/ZtgBocL7eaDsJADo/1EbpVrNA4iF8ZXcMJ59GvnAdg==' Name ='authenticity_token_1' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_1",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	/*Correlation comment - Do not change!  Original value='AB783917E63E4CA345448C600928D632.pidd1v-1304180857460210166972210' Name ='session_id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=session_id",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	/*Correlation comment - Do not change!  Original value='c5f1-52-3a57' Name ='transaction_id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=transaction_id",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name",
		"Ordinal=3",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0014_Choose_Family_Members");

	web_link("Continue_3",
	         "Text=Continue",
	         "Snapshot=t73.inf",
	         LAST);
	
	lr_end_transaction("INTEG_UNASSISTED_0014_Choose_Family_Members", LR_AUTO);
	
	lr_think_time(20);
	
	web_reg_find("Text=Family Members",
	             LAST);
	
	/*Correlation comment - Do not change!  Original value='5604514e69702d027f160000' Name ='family_id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=family_id",
		"RegExp=family_id=(.*?)\">Add\\ Member",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/family_members*",
		LAST);

	lr_start_transaction("INTEG_UNASSISTED_0015_ID_Verification_Questions");	
	
	web_submit_data("interactive_identity_verifications",
	                "Action={enrollPreprodURL}/insured/interactive_identity_verifications",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/interactive_identity_verifications/new",
	                "Snapshot=t74.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_1}", ENDITEM,
	                "Name=interactive_verification[session_id]", "Value={session_id}", ENDITEM,
	                "Name=interactive_verification[transaction_id]", "Value={transaction_id}", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][question_id]", "Value=1", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][question_text]", "Value=You currently or previously resided on one of the following streets. Please select the street name from the following choices.", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][0][response_id]", "Value=1", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][0][response_text]", "Value=AUGUSTA", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][1][response_id]", "Value=2", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][1][response_text]", "Value=FALMOUTH HEIGHTS", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][2][response_id]", "Value=3", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][2][response_text]", "Value=GOETHALS", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][3][response_id]", "Value=4", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][3][response_text]", "Value=HARRISON", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][4][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][0][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][question_id]", "Value=2", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][question_text]", "Value=Please select the range that includes the year the home was built for the address that you provided.", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][0][response_id]", "Value=1", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][0][response_text]", "Value=1965 to 1974", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][1][response_id]", "Value=2", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][1][response_text]", "Value=1975 to 1984", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][2][response_id]", "Value=3", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][2][response_text]", "Value=1985 to 1994", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][3][response_id]", "Value=4", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][3][response_text]", "Value=1995 to 2004", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][4][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][1][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][question_id]", "Value=3", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][question_text]", "Value=Which of the following is the highest level of education you have completed?  If there is not a matched educational level, please select 'NONE OF THE ABOVE'.", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][0][response_id]", "Value=1", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][0][response_text]", "Value=HIGH SCHOOL DIPLOMA", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][1][response_id]", "Value=2", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][1][response_text]", "Value=SOME COLLEGE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][2][response_id]", "Value=3", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][2][response_text]", "Value=BACHELOR DEGREE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][3][response_id]", "Value=4", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][3][response_text]", "Value=GRADUATE DEGREE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][4][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][2][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][question_id]", "Value=4", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][question_text]", "Value=Please select the number of bedrooms in your home from the\r\n                                following choices. If the number of bedrooms in your home is not one\r\n                                of the choices please select 'NONE OF THE ABOVE'.", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][0][response_id]", "Value=1", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][0][response_text]", "Value=2", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][1][response_id]", "Value=2", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][1][response_text]", "Value=3", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][2][response_id]", "Value=3", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][2][response_text]", "Value=4", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][3][response_id]", "Value=4", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][3][response_text]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][4][response_id]", "Value=5", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM,
	                "Name=interactive_verification[questions_attributes][3][response_id]", "Value=5", ENDITEM,
	                "Name=commit", "Value=Submit", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0015_ID_Verification_Questions", LR_AUTO);

	
	return 0;
}
