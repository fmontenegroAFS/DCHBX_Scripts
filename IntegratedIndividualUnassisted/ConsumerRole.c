ConsumerRole()
{
	
	web_reg_find("Text=let's get you signed up for healthcare",
	             "SAVECOUNT=ConsumerMatch",
	             	LAST);
	
	/*Correlation comment - Do not change!  Original value='{consumer_role_id}' Name ='consumer_role_id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=consumer_role_id",
		"RegExp=consumer_role/(.*?)/",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/consumer_role*",
		LAST);
	
	/*Correlation comment - Do not change!  Original value='{person_id}' Name ='person_id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=person_id",
		"RegExp=edit_person_(.*?)\"\\ enctype",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/edit*",
		LAST);
	
	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897900300' Name ='NaturalizationCertElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=NaturalizationCertElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);
	
	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897910300' Name ='CertOfCitizentshipElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=CertOfCitizentshipElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);
	
	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897920300' Name ='ReentryPermitElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=ReentryPermitElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);	

	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897930300' Name ='PermanentResidentCardElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=PermanentResidentCardElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);		

	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897940300' Name ='RefugeeTravelDocumentElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=RefugeeTravelDocumentElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);
	
	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897950300' Name ='ArrivalDepartureRecordElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=ArrivalDepartureRecordElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);	

	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897960300' Name ='ForeignPassportArrivalDepartureRecordElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=ForeignPassportArrivalDepartureRecordElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);

	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897970300' Name ='ImmigrantVisaElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=ImmigrantVisaElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);	

	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897980300' Name ='TemporaryI-551StampElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=TemporaryI-551StampElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);

	/*Correlation comment - Do not change!  Original value='55fc255b69702d4897990300' Name ='CertOfEligibilityForNonimmigrantElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=CertOfEligibilityForNonimmigrantElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);
	
	/*Correlation comment - Do not change!  Original value='55fc255b69702d48979a0300' Name ='OtherWithAlienNumberElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=OtherWithAlienNumberElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);

	/*Correlation comment - Do not change!  Original value='55fc255b69702d48979b0300' Name ='UnexpiredForeignPassportElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=UnexpiredForeignPassportElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);

	/*Correlation comment - Do not change!  Original value='55fc255b69702d48979c0300' Name ='DS2019ElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=DS2019ElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);
	
	/*Correlation comment - Do not change!  Original value='55fc255869702d486b5f0300' Name ='emailAddressElementID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=emailAddressElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*", LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0012_Consumer_Role");	
	
	web_submit_data("consumer_role",
	                "Action={enrollPreprodURL}/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=Test&person%5Bgender%5D=male&person%5Blast_name%5D={applicantName}&person%5Bmiddle_name%5D=L&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D={applicantSSN}&person%5Buser_id%5D={UserID}",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=Test&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={applicantName}Test&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={applicantSSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
	                "Snapshot=t71.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=_method", "Value=post", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token}", ENDITEM,
		          LAST);
	
	if (strcmp(lr_eval_string("{ConsumerMatch}"), "0") > 0)
	{
			lr_end_transaction("INTEG_UNASSISTED_0012_Consumer_Role",LR_PASS);
	}
	else
	{
			lr_end_transaction("INTEG_UNASSISTED_0012_Consumer_Role",LR_FAIL);
			lr_error_message("Failed to get Consumer Role msg for User %s", lr_eval_string("{applicantName}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
//	lr_end_transaction("INTEG_UNASSISTED_0012_Consumer_Role", LR_AUTO);
	
	return 0;

}
