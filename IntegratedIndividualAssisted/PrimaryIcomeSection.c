PrimaryIcomeSection()
{
	lr_start_transaction("11_MaleWithAPTC_25_Tax_Filer");
	
	web_reg_find("Text=eligibility for", LAST );	
	
	web_reg_save_param("p_o3synch_13", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_25_Tax_Filer_{dp_UserID};PC=ProcessScript.do_13");
	web_submit_data("ProcessScript.do_13",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t46.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id6", "Value=true", ENDITEM,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=TaxFilersPage", ENDITEM,
		"Name=__o3id4", "Value=12", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=TaxFilersPage", ENDITEM,
		"Name=syncToken", "Value=12", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_BOOLEAN/Person.isTaxFiler.0\",\"\",\"IEG_BOOLEAN\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_12}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_25_Tax_Filer",LR_AUTO);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_26_Tax_Dependent");
	
	web_reg_save_param("p_o3synch_14", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	web_reg_find("Text=summary page", LAST );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_26_Tax_Dependent_{dp_UserID};PC=ProcessScript.do_14");
	web_custom_request("ProcessScript.do_14",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id7=YN2&__o3id8=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=TaxNotFilingTogetherPage&__o3id4=13&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=TaxNotFilingTogetherPage&syncToken=13&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isClaimedAsYourself%22%2C%22Is%20this%20person%20you%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isClaimedAsDependentOfExternalPerson%22%2C%22Is%20anyone%20outside%20this%20Application%20Group%20expected%20to%20enter%20{p_FN}%20as%20dependent%20on%20their%20tax%20return%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfal"
		"se%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.TaxFilerRelationship.personID%22%2C%22%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id8%2C__o3id7&__o3synch={p_o3synch_13}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_26_Tax_Dependent",LR_AUTO);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_27_Group_Summary");

	web_reg_find("Text=Group Income",  LAST );
	
	web_reg_save_param("p_o3synch_15", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_27_Group_Summary_{dp_UserID};PC=ProcessScript.do_15");
	web_submit_data("ProcessScript.do_15",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t48.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=HouseholdSummary2", ENDITEM,
		"Name=__o3id4", "Value=14", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=HouseholdSummary2", ENDITEM,
		"Name=syncToken", "Value=14", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_14}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_27_Group_Summary",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_28_Group_Income");
	
	web_reg_save_param("p_o3synch_16", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_28_Group_Income_{dp_UserID};PC=ProcessScript.do_16");
	web_submit_data("ProcessScript.do_16",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t49.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=IncomeBreaker", ENDITEM,
		"Name=__o3id4", "Value=15", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=IncomeBreaker", ENDITEM,
		"Name=syncToken", "Value=15", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_15}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_28_Group_Income",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_29_Income");

	web_reg_find("Text=Income Type",  LAST );
	
	web_reg_save_param("p_o3synch_17", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_29_Income_{dp_UserID};PC=ProcessScript.do_17");
	web_custom_request("ProcessScript.do_17",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t50.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=YN1&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AnyManualIncomePage&__o3id4=16&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AnyManualIncomePage&syncToken=16&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FhasManualIncome%22%2C%22Does%20{p_FN}%20have%20any%20income%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%"
		"24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_16}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_29_Income",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_30_Income_Details");

	web_reg_find("Text=Form 1040", LAST );
	
	web_reg_save_param("p_o3synch_18", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_30_Income_Details_{dp_UserID};PC=ProcessScript.do_18");
	web_custom_request("ProcessScript.do_18",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t51.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=HCIT26001&__o3id7=TFT1&__o3id8=ABCD%20Inc&__o3id9=28000&__o3ida=&__o3idb=FC7&__o3idc=2012-04-10&__o3idd=&__o3ide=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=DCHXManualIncomePage&__o3id4=17&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=DCHXManualIncomePage&syncToken=17&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_MONEY%2FIncomeItem.amount%22%2C%22Amount%20(Before%20taxes%20and%20deductions)%22%2C%22IEG_MONEY%22%2Ctrue%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FIncomeItem.employer%22%2C%22What%20is%20the%20name%20of%20your%20Employer%3F%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FTAXFORM_TYPE%2FIncomeItem.taxform%22%2C%22Please%"
		"20indicate%20which%20tax%20form%20is%20used%20to%20report%20this%20income.%22%2C%22TAXFORM_TYPE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FINCOME_TYPE%2FIncomeItem.incomeType%22%2C%22Income%20Type%22%2C%22INCOME_TYPE%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FAC"
		"TION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FhasMoreManualIncome%22%2C%22Does%20{p_FN}%20have%20any%20more%20income%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FIncomeItem.endDate%22%2C%22End%20Date%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FIncomeItem.startDate%22%2C%22Start%20Date%22%2C%22IEG_DATE%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FFREQUENCY_CODE%2FIncomeItem.frequency%22%2C%22Frequency%22%2C%22FREQUENCY_CODE%22%2Ctrue%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_MONEY%2FIncomeItem.taxExemptAmount%22%2C%22What%20portion%20of%20this%20amount%20is%20tax%20exempt%3F%22%2C%22IEG_MONEY%22%2Cfa"
		"lse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id6%2C__o3ide%2C__o3idc%2C__o3idb&__o3synch={p_o3synch_17}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_30_Income_Details",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_31_Income_Adjustment");

	web_reg_find("Text=Adjustments",  LAST );	
	
	web_reg_save_param("p_o3synch_19", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_31_Income_Adjustment_{dp_UserID};PC=ProcessScript.do_19");
	web_custom_request("ProcessScript.do_19",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t52.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AnyIncomeDeductionPage&__o3id4=18&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AnyIncomeDeductionPage&syncToken=18&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyDeductableItem%22%2C%22Does%20{p_FN}%20have%20any%20of%20the%20adjustments%20to%20income%20that%20are%20listed%20in%20Form%201040%2C%20lines%2"
		"023%20to%2035%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=&__o3synch={p_o3synch_18}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_31_Income_Adjustment",LR_AUTO);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_32_Annual_Income");
	
	web_reg_save_param("p_o3synch_20", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_32_Annual_Income_{dp_UserID};PC=ProcessScript.do_20");
	web_custom_request("ProcessScript.do_20",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t53.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=YN1&__o3id7=28%2C000.00&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=ProjectedAnnualIncomePage&__o3id4=19&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=ProjectedAnnualIncomePage&syncToken=19&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_MONEY%2FProjectedAnnualIncome.projectedIncome%22%2C%22What%20do%20you%20expect%20the%20annual%20income%20to%20be%20in%202015%3F%22%2C%22IEG_MONEY%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%2"
		"2%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isAnnualIncomeCorrect%22%2C%22Is%20this%20what%20you%20expect%20{p_FN}'s%20annual%20income%20to%20be%20in%202015%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_19}",
		LAST);
	
	lr_end_transaction("11_MaleWithAPTC_32_Annual_Income",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_33_Additional_Info");
	
	web_reg_save_param("p_o3synch_21", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_33_Additional_Info_1_{dp_UserID};PC=ProcessScript.do_21");
	web_submit_data("ProcessScript.do_21",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t54.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=AdditionalHouseholdBreaker", ENDITEM,
		"Name=__o3id4", "Value=20", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=AdditionalHouseholdBreaker", ENDITEM,
		"Name=syncToken", "Value=20", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_20}", ENDITEM,
		LAST);
	
	web_reg_save_param("p_o3synch_22", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_33_Additional_Info_2_{dp_UserID};PC=ProcessScript.do_22");
	web_submit_data("ProcessScript.do_22",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t55.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=AdditionalIAInfromationPage", ENDITEM,
		"Name=__o3id4", "Value=21", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=AdditionalIAInfromationPage", ENDITEM,
		"Name=syncToken", "Value=21", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id7\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_BOOLEAN/Person.isEnrolledOrEligibleForESC.0\",\"\",\"IEG_BOOLEAN\",false],\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_BOOLEAN/Person.isIncarcerated.0\",\"\",\"IEG_BOOLEAN\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_21}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_33_Additional_Info",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_34_Disabilities");
	
	web_reg_save_param("p_o3synch_23", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_34_Disabilities_{dp_UserID};PC=ProcessScript.do_23");
	web_custom_request("ProcessScript.do_23",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id8=YN2&__o3ida=YN2&__o3idc=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AdditionalInfoForAllPage&__o3id4=22&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AdditionalInfoForAllPage&syncToken=22&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.isBlind.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyoneBlind%22%2C%22Is%20anyone%20in%20the%20Application%20Group%20blind%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.haveMedicalBill.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2"
		"C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyoneHasUnpaidMedicalBills%22%2C%22Does%20anyone%20in%20the%20household%20need%20help%20paying%20for%20medical%20bills%20from%20the%20last%203%20months%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%"
		"22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.hasLongTermCare.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FlongTermCare%22%2C%22Does%20anyone%20in%20the%20Application%20Group%20need%20help%20with%20activities%20of%20daily%20living%20(i.e.%20bathing%2C%20eating)%20through%20home%20health%20services%2C%20a%20nursing%20home%2C%20or%20other%20medical%20facility%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.isDisabled.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyoneDisabled%22%2C%22Is%20anyone%20in%20the%20Application%20Group%20disabled%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%7D&__o3fmeta_mandatory_data=__o3id8%2C__o3idc%2C__o3ida&__o3synch={p_o3synch_22}",
		LAST);
	
	lr_end_transaction("11_MaleWithAPTC_34_Disabilities",LR_AUTO);

	lr_think_time(ithinktime);
	
	return 0;
}
