SubmitApplication()
{
//	char command[1024];
//	char *filename = "Z:\\Load Runner\\__Syed_DCHBX\\Application_No_Single_Male_with_APTC.txt";
//	long file_stream;
//
//	sprintf(command, "taskkill /firefox.exe");
	
	lr_start_transaction("11_MaleWithAPTC_43_Submit_Application");

	addDynaTraceHeader("NA=11_MaleWithAPTC_43_Submit_Application_1_{dp_UserID};PC=ProcessScript.do_32");
	web_custom_request("ProcessScript.do_32",
	                   "URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
	                   "Method=POST",
	                   "TargetFrame=",
	                   "Resource=1",
	                   "Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
	                   "Snapshot=t65.inf",
	                   "EncType=application/x-www-form-urlencoded; charset=UTF-8",
	                   "Body=__o3id6=true&__o3id7=true&__o3id8=RP5&__o3id9=true&__o3ida=YN2&__o3idb=true&__o3idc=true&__o3idd=true&__o3ide={p_FN}&__o3idf=&__o3id10={p_LN}&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SignaturePage&__o3id4=31&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SignaturePage&syncToken=31&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.authorizeMemberInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FRENEWAL_PERIOD%2FSubmission.renewalPeriod%22%2C%22Renewal%20Years%22%2C%22IEG_CT_RADIO%22%2Ctrue%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.reportMyChangesInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3id10%"
	                   "22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FSubmission.sigLastName%22%2C%22Last%20Name%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.absentParentESignatureInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_AN"
	                   "SWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FSubmission.middleInitial%22%2C%22Middle%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FSubmission.sigFirstName%22%2C%22First%20Name%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.prejuryESignatureInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.informationChangedESignatureInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.otherParentChildSupportInd%22%"
	                   "2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSubmission.anyParentLivingOut%22%2C%22Does%20any%20child%20on%20this%20application%20have%20a%20parent%20living%20outside%20of%20the%20home%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id8%2C__o3id7%2C__o3id10%2C__o3id6%2C__o3ide%2C__o3idd%2C__o3idc&__o3synch={p_o3synch_31}",
	                   LAST);

	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB=intakeApplicationID=",
		"RB=&motivationID",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/FinishMotivation.jspx*",
		LAST);

	web_reg_save_param_ex(
		"ParamName=motivationID",
		"LB=motivationID=",
		"RB=&categoryID",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/FinishMotivation.jspx*",
		LAST);
	
//	web_reg_save_param("p_Application_Reference_ID", "LB=class=\"field\">", "RB=</td><th id=", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_43_Submit_Application_2_{dp_UserID};PC=FinishMotivation.jspx");
	web_url("FinishMotivation.jspx",
	        "URL=https://{p_Webapp_URL}/CitizenPortal/cw/FinishMotivation.jspx?executionID={executionID}&id={id}&__u=c8f&o3ctx=1048692",
	        "TargetFrame=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
	        "Snapshot=t66.inf",
	        "Mode=HTML",
	        LAST);
	
	lr_end_transaction("11_MaleWithAPTC_43_Submit_Application",LR_AUTO);


//	if ((file_stream = fopen(filename, "a+")) == NULL) //open file in append mode
	//{
	//lr_error_message ("Cannot open %s", filename);
	//return -1;
	//}
//
//
	//fprintf (file_stream, "\n For User ID %s : The APPLICATION Reference No is : %s and Date & Time is: %s \n",lr_eval_string("{p_UserID}"), lr_eval_string("{p_Application_Reference_ID}"),lr_eval_string("{Date_Time}"));
//
	//fclose(file_stream);

	lr_think_time(ithinktime);
	
	return 0;
}
