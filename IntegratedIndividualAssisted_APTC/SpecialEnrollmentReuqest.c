SpecialEnrollmentReuqest()
{
	lr_start_transaction("11_MaleWithAPTC_35_Special_Enrollment");
	
	web_reg_find("Text/IC=Are you a broker submitting this application", LAST );
	
	web_reg_save_param("p_o3synch_24", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_35_Special_Enrollment_{dp_UserID};PC=ProcessScript.do_24");

	web_custom_request("ProcessScript.do_24",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t57.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id8=&__o3id9=&__o3ida=&__o3idb=&__o3idc=YN2&__o3idd=&__o3ide=YN2&__o3idf=&__o3id10=YN2&__o3id11=&__o3id12=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails1&__o3id4=23&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails1&syncToken=23&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.childAddDate%22%2C%22When%20did%20this%20child%20join%20your%20household%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_NEWCHILD_REASON%2FSpecialEnrollmentEntity.childAddReason%22%2C%22Please%20choose%20the%20reason%20this%20child%20is%20being%20added%20to%20your%20household%22%2C%22IEG_NEWCHILD_REASON%22%2Cfalse%5D%2C%22__o3id7"
		"%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_NEWMEMBER%2FSpecialEnrollmentEntity.addedMemberType%22%2C%22Who%20was%20added%20to%20your%20household%3F%22%2C%22IEG_NEWMEMBER%22%2Cfalse%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.movedToDC%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20moved%20to%20the%20District%20of%20Columbia%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id11%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.movedToDCDate%22%2C%22What%20was%20the%20date%20of%20the%20move%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2F"
		"data%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.memberAdded%22%2C%22Have%20you%20recently%20added%20a%20member%20to%20your%20household%20(for%20example%2C%20you%20had%20a%20baby%2C%20got%20married%2C%20or%20formed%20a%20domestic%20partnership)%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.divorcedTermina"
		"tedDate%22%2C%22When%20the%20divorce%20or%20termination%20of%20the%20domestic%20partnership%20was%20finalized%20(i.e.%20effective%20date)%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.divorcedTerminated%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20gotten%20divorced%20or%20terminated%20a%20domestic%20partnership%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.lostInsuranceDate%22%2C%22What%20was%20the%20last%20date%20of%20coverage%20under%20your%20other%20health%20insurance%2C%20or%20what%20will%20be%20the%20last%20date%20of%20coverage%20under%20your%20other%20health%20insurance%3F%20%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.lostInsurance%22%2C%22Have%20"
		"you%20or%20anyone%20in%20your%20tax%20household%20recently%20lost%20other%20health%20insurance%20coverage%20or%20expect%20to%20lose%20other%20health%20insurance%20coverage%20soon%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.memberAddDate%22%2C%22When%20did%20this%20person%20join%20your%20household%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_COVERAGE_START%2FSpecialEnrollmentEntity.childAddCoverageStart%22%2C%22If%20you%20are%20eligible%20for%20a%20special%20enrollment%20period%2C%20do%20you%20wan%20the%20coverage%20you%20select%20to%20begin%20(pick%20one)%3A%22%2C%22IEG_COVERAGE_START%22%2Cfalse%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.healthInsuranceTaxPenalty%22%2C%22Did%20you%20or%20anyone%20in%20your%20tax%20household%20either%20(1)%"
		"20have%20to%20pay%20a%20penalty%20on%20your%202014%20taxes%20for%20going%20without%20health%20insurance%2C%20or%20(2)%20file%20your%202014%20taxes%20after%20February%2015%2C%202015%20and%20were%20unaware%20of%20the%20tax%20penalty%20for%20going%20without%20health%20insurance%20until%20you%20filed%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id8%2C__o3id7%2C__o3id11%2C__o3idf%2C__o3idd%2C__o3idb%2C__o3ida&__o3synch={p_o3synch_23}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_35_Special_Enrollment",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_36_Special_Enrollment_2");

	web_reg_find("Text/IC=If you are not registered to vote or ",   LAST );
	
	web_reg_save_param("p_o3synch_25", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	/* Special Enrollment 2 */

	addDynaTraceHeader("NA=11_MaleWithAPTC_36_Special_Enrollment_2_{dp_UserID};PC=ProcessScript.do_25");
	web_custom_request("ProcessScript.do_25",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t58.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id8=YN2&__o3id9=YN2&__o3ida=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails2&__o3id4=24&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails2&syncToken=24&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.enrolledReason2%22%2C%22Do%20you%20believe%20you%20or%20any%20member%20of%20your%20tax%20household%20were%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20or%20not%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20due%20to%20an%20error%2C%20misrepresentation%2C%20or%20inaction%20made%20by%20someone%20working%20for%20a%20health%20insurance%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2"
		"FSpecialEnrollmentEntity.enrolledReason1%22%2C%22Do%20you%20believe%20you%20or%20any%20member%20of%20your%20tax%20household%20were%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20or%20not%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20due%20to%20an%20error%2C%20misrepresentation%2C%20or%20inaction%20made%20by%20someone%20working%20for%20DC%20Health%20Link%20or%20the%20United%20States%20Department%20of%20Health%20and%20Human%20Services%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.changeCitizenshipDate%22%2C%22What%20was%20the%20date%20of%20the%20change%20in%20citizenship%20or%20immigration%20status%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.enrolledReason3%22%2C%22Do%20you%20believe%20you%20or%20any%20member%20of%20your%20tax%20household%20were%20not%20enrolled%20in%20a%20plan%2C%20w"
		"ere%20enrolled%20in%20the%20wrong%20plan%2C%20or%20were%20eligible%20for%20but%20did%20not%20receive%20financial%20assistance%20because%20of%20misconduct%20of%20someone%20assisting%20you%20with%20DC%20Health%20Link%2C%20such%20as%20a%20broker%2C%20assister%2C%20or%20certified%20application%20counselor%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.changeCitizenship%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20experienced%20a%20change%20in%20citizenship%20or%20immigrat"
		"ion%20status%3F%20(NOTE%3A%20Renewing%20a%20visa%20or%20changing%20from%20one%20eligible%20immigration%20status%20to%20another%20without%20gaining%20citizenship%20is%20NOT%20a%20change)%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id7&__o3synch={p_o3synch_24}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_36_Special_Enrollment_2",LR_AUTO);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_37_Special_Enrollment_3");

	web_reg_find("Text/IC=Items which require",  LAST );
	
	web_reg_save_param("p_o3synch_26", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	/* 3 */

	addDynaTraceHeader("NA=11_MaleWithAPTC_37_Special_Enrollment_3_{dp_UserID};PC=ProcessScript.do_26");
	web_custom_request("ProcessScript.do_26",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=YN2&__o3id8=YN2&__o3id9=&__o3ida=YN2&__o3idb=&__o3idc=YN2&__o3idd=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails3&__o3id4=25&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails3&syncToken=25&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.memberInServiceDate%22%2C%22When%20did%20this%20service%20start%20or%20end%3F%20Please%20provide%20the%20date%20for%20whichever%20was%20most%20recent%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.memberInService%22%2C%22Are%20you%20or%20anyone%20in%20your%20tax%20household%20an%20AmeriCorps%20State%20and%20National%2C%20VISTA%2C%20or%20NCCC%20vo"
		"lunteer%20beginning%20or%20ending%20your%20service%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.domesticViolence%22%2C%22Have%20you%20or%20anyone%20in%20your%20household%20recently%20experienced%20domestic%20violence%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.planViolated%22%2C%22Are%20you%20or%20anyone%20in%20your%20tax%20household%20currently%20enrolled%20in%20a%20DC%20Health%20Lin"
		"k%20plan%20and%20believe%20your%20plan%20violated%20its%20contract%20with%20you%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.naturalDisasterDate%22%2C%22When%20did%20this%20natural%20disaster%20occur%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.naturalDisaster%22%2C%22Did%20a%20natural%20disaster%20during%20the%20open%20enrollment%20period%20or%20a%20special%20enrollment%20per"
		"iod%20prevent%20you%20or%20anyone%20in%20your%20tax%20household%20from%20enrolling%20in%20a%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.receivedCourtOrderDate%22%2C%22What%20was%20the%20date%20of%20this%20court%20order%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.receivedCourtOrder%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20received%20a%20court%20order%20to%20provide%20health%20insurance%20coverage%20for%20someone%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3idd%2C__o3idb&__o3synch={p_o3synch_25}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_37_Special_Enrollment_3",LR_AUTO);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_38_Special_Enrollment_4");
	
	web_reg_save_param("p_o3synch_27", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);
	web_reg_save_param("p_o3synch_28", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	/* 4 */

	addDynaTraceHeader("NA=11_MaleWithAPTC_000_Special_Enrollment_4_{dp_UserID};PC=ProcessScript.do_27");
	web_custom_request("ProcessScript.do_27",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t60.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id8=YN2&__o3id9=&__o3ida=YN2&__o3idb=&__o3idc=YN2&__o3idd=&__o3ide=YN2&__o3idf=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails4&__o3id4=26&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails4&syncToken=26&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.websiteOutageDate%22%2C%22When%20did%20this%20outage%20occur%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.websiteOutage%22%2C%22Did%20a%20DC%20Health%20Link%20website%20outage%20during%20open%20enrollment%20or%20a%20special%20enrollment%20period%20prevent%20you%20or%20anyone%20in%20your%20tax%20household%20from%20enrolling%"
		"20in%20a%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.medicalEmergencyDate%22%2C%22When%20did%20this%20medical%20emergency%20occur%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.medicalEmergency%22%2C%22Did%20a%20medical%20emergency%20experienced%20during%20open%20enrollment%20or%20a%20special%20enrollment%20period%20prevent%20you%20or%20anyone%20in%20your%20tax%20household%20from%20e"
		"nrolling%20in%20a%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.premiumFailedDate%22%2C%22What%20was%20the%20last%20date%20COBRA%20was%20effective%2C%20or%20what%20is%20the%20last%20date%20COBRA%20will%20coverage%20be%20effective%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.premiumFailed%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20had%20your%20COBRA%"
		"20terminated%20because%20a%20former%20failed%20to%20submit%20your%20premium%20payments%20in%20time%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.dependentOnMedicareEligibleDate%22%2C%22What%20was%20the%20last%20date%20you%20had%20coverage%20from%20this%20employer%2C%20or%20what%20is%20the%20last%20date%20you%20will%20have%20coverage%20from%20this%20employer%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.dependentOnMedicareEligible%22%2C%22Are%20you%20or%20anyone%20in%20your%20tax%20household%20the%20dependent%20of%20someone%20who%20is%20becoming%20eligible%20for%20Medicare%20and%20will%20no%20longer%20be%20able%20to%20provide%20you%20with%20coverage%20through%20their%20employer%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fa"
		"ns%2FIEG_DATE%2FSpecialEnrollmentEntity.lostEligibilityForExemptionDate%22%2C%22When%20did%20your%20exemption%20end%20or%20when%20will%20it%20end%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.lostEligibilityForExemption%22%2C%22Did%20you%20or%20anyone%20in%20your%20tax%20household%20previously%20have%20an%20exemption%20from%20the%20individual%20responsibility%20payment%20and%20have%20lost%20or%20are%20losing%20eligibility%20for%20the%20exemption%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id7%2C__o3idf%2C__o3idd%2C__o3idb&__o3synch={p_o3synch_26}",
		LAST);
	
	lr_end_transaction("11_MaleWithAPTC_38_Special_Enrollment_4",LR_AUTO);

	lr_think_time(ithinktime);
/*
	lr_start_transaction("11_MaleWithAPTC_39_Special_Enrollment_5");
	
	web_reg_find("Text=Applicant",  LAST );
	
	web_reg_save_param("p_o3synch_28", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);



	addDynaTraceHeader("NA=11_MaleWithAPTC_39_Special_Enrollment_5_{dp_UserID};PC=ProcessScript.do_28");
	web_custom_request("ProcessScript.do_28",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t61.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails5&__o3id4=27&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails5&syncToken=27&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.employeeIneligibleMedicaidDate%22%2C%22When%20did%20you%20receive%20the%20notice%20telling%20you%20that%20you%20could%20not%20get%20coverage%20on%20DC%20Health%20Link%20from%20this%20employer%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%"
		"2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.employeeIneligibleMedicaid%22%2C%22Did%20your%20employer%20or%20the%20employer%20of%20a%20member%20of%20your%20tax%20household%20%20apply%20to%20provide%20coverage%20to%20employees%20through%20DC%20Health%20Link%20during%20the%20open%20enrollment%20period%20and%20but%20was%20found%20ineligible%20to%20participate%20in%20DC%20Health%20Link%20after%20the%20open%20enrollment%20period%20had%20ended%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentP"
		"ageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id7&__o3synch={p_o3synch_27}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_39_Special_Enrollment_5",LR_AUTO);
	
	lr_think_time(ithinktime);
*/
	
	return 0;
}
