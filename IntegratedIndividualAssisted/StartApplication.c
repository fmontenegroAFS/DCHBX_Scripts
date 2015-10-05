StartApplication()
{
	lr_start_transaction("0011_MaleWithAPTC_StartApplication");

	/*Correlation comment - Do not change!  Original value='2427112836745396224' Name ='id' Type ='Manual'*/
    web_reg_save_param_regexp(
        "ParamName=id",
        "RegExp=ttps://webpp\\.dchealthlink\\.com/CitizenPortal/cw/ResolvePage\\.do\\?id=(.*?)&page",
        SEARCH_FILTERS,
        "Scope=Headers",
        "IgnoreRedirections=No",
        "RequestUrl=*/CitizenWorkspace_setupMotivationPage.do*",
        LAST);

	addDynaTraceHeader("NA=0011_MaleWithAPTC_StartApplication{dp_UserID};PC=Apply for help paying for your health coverage");
	
	web_link("Start Application",
		"Text=Start Application",
	    "Snapshot=t67.inf",
	    LAST);
	
	lr_end_transaction("0011_MaleWithAPTC_StartApplication",LR_AUTO);
	
	lr_think_time(10);
	
	web_reg_save_param_ex("ParamName=executionID","LB=executionID=","RB=&playerID", SEARCH_FILTERS,"Scope=Headers", "IgnoreRedirections=No","RequestUrl=*/StartMotivation.jspx*",LAST);

	web_reg_save_param("_o3synch", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	lr_start_transaction("11_MaleWithAPTC_12_Apply_For_Help");

	addDynaTraceHeader("NA=11_MaleWithAPTC_12_Apply_For_Help_2_{dp_UserID};PC=StartMotivation.jspx");
	
	web_url("StartMotivation.jspx",
		"URL=https://{p_Webapp_URL}/CitizenPortal/cw/StartMotivation.jspx?id={id}&name=FindAssistance&",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/cw/ResolvePage.do?id={id}&page=StartMotivation&name=FindAssistance",
		"Snapshot=t33.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("11_MaleWithAPTC_12_Apply_For_Help",LR_AUTO);
	
	web_reg_save_param("_o3synch", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	// lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_13_For_Whom");
	
	web_reg_save_param("p_o3synch_1", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	web_reg_find("Text=Getting Started",  LAST );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_13_For_Whom_{dp_UserID};PC=ProcessScript.do");
	web_custom_request("ProcessScript.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{{p_Webapp_URL}}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=AOS26001&__o3id7=&__o3id8=&__o3id9=&__o3ida=&__o3idb=&__o3idc=&__o3idd=&__o3ide=&__o3idf=&__o3id10=&__o3id11=&__o3id12=&__o3id13=&__o3id14=&__o3id15=&__o3id16=&__o3id17=&__o3id19=&__o3id1a=&__o3id1b=&__o3id1c=&__o3id1d=&__o3id1e=&__o3id0={executionID}&__o3id1=1048688&__o3id2=HealthCarePortal&__o3id3=InitialPage&__o3id4=0&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=InitialPage&syncToken=0&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048688&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.lastName%22%2C%22Last%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.middleName%22%2C%22Middle%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplication"
		"Filer.firstName%22%2C%22First%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPREFERRED_CONTACT_TYPE%2FApplicationFiler.preferredContactMethod%22%2C%22Preferred%20Contact%20Method%22%2C%22PREFERRED_CONTACT_TYPE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id11%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneCountryCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FAPPLY_OR_SEEK_COVERAGE%2FApplic"
		"ationFiler.isApplyingOnBehalf%22%2C%22I%20am%20applying%22%2C%22IEG_CT_RADIO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FADDRESS_STATE%2FAddress.state%22%2C%22State%22%2C%22ADDRESS_STATE%22%2Cfalse%5D%2C%22__o3id18%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FApplicationFiler.canReceiveNotices%22%2C%22Please%20indicate%20if%20you%20are%20authorized%20to%20receive%20copies%20of%20notifications%20and%20communications%20sent%20to%20the%20Application%20Group.%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1"
		"9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.organizationName%22%2C%22Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCodePlusFour%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCode%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id16%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.applicantName%22%2C%22Enter%20the%20name%20of%20the%20applicant%20that%20authorized%20you%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.city%22%2C%22City%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id17%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FApplicationFiler.bel"
		"ongToOrganization%22%2C%22Do%20you%20belong%20to%20an%20organization%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street2%22%2C%22Address%20Line%202%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id14%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.emailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street1%22%2C%22Address%20Line%201%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id15%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FApplicationFiler.applicantAuthorizedDate%22%2C%22Enter%20the%20date%20the%20applicant%20authorized%20you%20to%20apply%20for%20coverage%20on%20their%20behalf%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FC"
		"ontactInformation.homePhoneCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id13%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneNumber%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.phoneCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.phoneCountryCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1e%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.emailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1d%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.phoneNumber%22%2C%2"
		"2Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_INT32%2FApplicationFiler.organizationID%22%2C%22Identification%20Number%22%2C%22IEG_INT32%22%2Cfalse%5D%7D&__o3synch={_o3synch}&__o3fmeta_mandatory_data=__o3id9%2C__o3id7%2C__o3id6%2C__o3id19%2C__o3id16%2C__o3id17%2C__o3id15%2C__o3id1a",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_13_For_Whom",LR_AUTO);
		
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_14_Privacy_Act");
	
	web_reg_save_param("p_o3synch_2", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	web_reg_find("Text=Experian Terms",  LAST );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_14_Privacy_Act_{dp_UserID};PC=ProcessScript.do_2");
	
	web_submit_data("ProcessScript.do_2",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t35.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=IntroductionPage", ENDITEM,
		"Name=__o3id4", "Value=1", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=IntroductionPage", ENDITEM,
		"Name=syncToken", "Value=1", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_1}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_14_Privacy_Act",LR_AUTO);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_15_Experian_Terms");

	web_reg_find("Text=Please Tell Us About You",  LAST );
	
	web_reg_save_param("p_o3synch_3", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_15_Experian_Terms_{dp_UserID};PC=ProcessScript.do_3");
	web_custom_request("ProcessScript.do_3",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=AG1&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AgreementPage&__o3id4=2&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AgreementPage&syncToken=2&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FAGREE_OR_DISAGREE%2FApplicationFiler.isAgreedForTermsAndConditions%22%2C%22Please%20select%20one%20of%20the%20following%20options%20to%20proceed%20ahead%3A%22%2C%22IEG_CT_RADIO%22%2Ctrue%5D%2C%22_"
		"_o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_2}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_15_Experian_Terms",LR_AUTO);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_16_About_You");
	
	web_reg_save_param("p_o3synch_4", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	web_reg_find("Text=Your Details", LAST );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_16_About_You_{dp_UserID};PC=ProcessScript.do_4");
	web_submit_data("ProcessScript.do_4",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t37.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=AboutYouBreaker", ENDITEM,
		"Name=__o3id4", "Value=3", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=AboutYouBreaker", ENDITEM,
		"Name=syncToken", "Value=3", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_3}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_16_About_You",LR_AUTO);

	lr_think_time(ithinktime);

	
	return 0;
}
