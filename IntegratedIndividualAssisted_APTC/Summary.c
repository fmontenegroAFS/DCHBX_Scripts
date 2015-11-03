Summary()
{
	lr_start_transaction("11_MaleWithAPTC_40_Summary");
	
	web_reg_find("Text=Applicant",  LAST );
	
	web_reg_save_param("p_o3synch_29", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_40_Summary_{dp_UserID};PC=ProcessScript.do_29");

/*
	web_submit_data("ProcessScript.do_29",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t62.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=Summary", ENDITEM,
		"Name=__o3id4", "Value=28", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=Summary", ENDITEM,
		"Name=syncToken", "Value=28", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_28}", ENDITEM,
		LAST);
*/
	
	  web_submit_data("ProcessScript.do_47",
        "Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
        "Snapshot=t115.inf",
        "Mode=HTML",
        ITEMDATA,
        "Name=__o3id0", "Value={executionID}", ENDITEM,
        "Name=__o3id1", "Value=1048692", ENDITEM,
        "Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
        "Name=__o3id3", "Value=VerificationSummary", ENDITEM,
        "Name=__o3id4", "Value=45", ENDITEM,
        "Name=__o3id5", "Value=true", ENDITEM,
        "Name=validate-save-and-exit", "Value=true", ENDITEM,
        "Name=iegExecutionID", "Value={executionID}", ENDITEM,
        "Name=scriptID", "Value=HealthCarePortal", ENDITEM,
        "Name=pageID", "Value=VerificationSummary", ENDITEM,
        "Name=syncToken", "Value=45", ENDITEM,
        "Name=iegScriptVersion", "Value=V1", ENDITEM,
        "Name=iegScriptType", "Value=Portal", ENDITEM,
        "Name=forwardParams", "Value=&id={id}", ENDITEM,
        "Name=o3ctx", "Value=1048692", ENDITEM,
        "Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
        "Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
        "Name=__o3synch", "Value={p_o3synch_28}", ENDITEM,
        LAST);


	
	lr_end_transaction("11_MaleWithAPTC_40_Summary",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_41_Broker_Info");
	
	web_reg_find("Text=Name", LAST );
	
	web_reg_save_param("p_o3synch_30", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	/* Broker */

	addDynaTraceHeader("NA=11_MaleWithAPTC_41_Broker_Info_{dp_UserID};PC=ProcessScript.do_30");
	web_custom_request("ProcessScript.do_30",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=BrokerDetailsPage&__o3id4=29&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=BrokerDetailsPage&syncToken=29&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplication.taxID%22%2C%22Tax%20ID%20number%20for%20GA%2FTPA(if%20applicable)%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswe"
		"rs%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FApplication.isBrokerApplyingOnBehalf%22%2C%22Are%20you%20a%20broker%20submitting%20this%20application%20on%20behalf%20of%20someone%20else%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_29}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_41_Broker_Info",LR_AUTO);
	
	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_42_Documentation");

	web_reg_find("Text=Summary",  LAST );
	
	web_reg_save_param("p_o3synch_31", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_42_Documentation_{dp_UserID};PC=ProcessScript.do_31");
	web_submit_data("ProcessScript.do_31",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t64.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=VerificationSummary", ENDITEM,
		"Name=__o3id4", "Value=30", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=VerificationSummary", ENDITEM,
		"Name=syncToken", "Value=30", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_30}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_42_Documentation",LR_AUTO);
	
	lr_think_time(ithinktime);
	
	return 0;
}
