PrimaryMemberInfo()
{
	lr_start_transaction("11_MaleWithAPTC_17_Applicant_Information");
	
	web_reg_save_param("p_o3synch_5", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	web_reg_find("Text=Race and Ethnicity", LAST );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_17_Applicant_Information_{dp_UserID};PC=ProcessScript.do_5");
	web_custom_request("ProcessScript.do_5",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6={p_FN}&__o3id7=&__o3id8={randomLN}&__o3id9=1960-04-20&__o3ida=SX1&__o3idb=YN2&__o3idc=609%20H%20St%20NE&__o3idd=&__o3ide=&__o3idf=Washington&__o3id10=DC&__o3id11=20002&__o3id12=&__o3id13=&__o3id14=&__o3id15=YN1&__o3id16=&__o3id17=&__o3id18=&__o3id19=&__o3id1a=&__o3id1b=&__o3id1c=&__o3id1d=&__o3id1e=&__o3id21=&__o3id22=&__o3id23=&__o3id24=&__o3id25=&__o3id26=&__o3id27=&__o3id28=&__o3id29=&__o3id2a=&__o3id2b=&__o3id2c=YN1&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AboutYouPage&__o3id4=4&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AboutYouPage&syncToken=4&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FPerson.dateOfBirth%22%2C%22Date%20of%20Birth%22%2C%22IEG_DATE%22%2Ctrue%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.l"
		"astName%22%2C%22Last%20Name%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.middleName%22%2C%22Middle%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id2c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isApplicant%22%2C%22Do%20you%20want%20to%20find%20out%20if%20you%20can%20get%20Medicaid%20or%20help%20paying%20for%20health%20coverage%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FADDRESS_STATE%2FAddress.state%22%2C%22State%22%2C%22ADDRESS_STATE%22%2Ctrue%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id22%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneCountryCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id11%22%3A"
		"%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCode%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id21%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPREFERRED_LANGUAGE%2FPerson.PreferredLanguageCommunication%22%2C%22Preferred%20language%20for%20communication%22%2C%22PREFERRED_LANGUAGE%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id20%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.paperCommunication%22%2C%22Do%20you%20wish%20not%20to%20receive%20paper%20communication%3F%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.firstName%22%2C%22First%20Nam"
		"e%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.city%22%2C%22City%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id18%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.street2%22%2C%22Address%20Line%202%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id19%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.suiteNum%22%2C%22Apt%2FSuite%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswe"
		"rs%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street2%22%2C%22Address%20Line%202%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.suiteNum%22%2C%22Apt%2FSuite%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id16%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.hasMailingAddress%22%2C%22Do%20you%20have%20a%20mailing%20address%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street1%22%2C%22Address%20Line%201%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id17%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.street1%22%2C%22Address%20Line%201%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id14%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isTemporarilyAbsent%22%2C%22Have%20you%20been%20living%20outside"
		"%20District%20of%20Columbia%20for%2090%20days%20or%20less%20and%20plan%20to%20return%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.areYouHomeless%22%2C%22Are%20you%20homeless%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id15%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isMailingAddressSameAsHome%22%2C%22Is%20the%20mailing%20address%20the%20same%20as%20your%20home%20address%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_GENDER%2FPerson.gender%22%2C%22Gender%22%2C%22IEG_GENDER%22%2Ctrue%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCodePlusFour%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id13%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isStateResident%22%2C%22Are%20"
		"you%20a%20District%20of%20Columbia%20resident%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.emailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id2b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.prefEmailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1f%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.electronicNotification%22%2C%22Do%20you%20wish%20to%20receive%20electronic%20notification%3F%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.zipCode%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FADDRESS_STATE%2FMailingAddress.state%22%2C%22State%22%2C%22ADDRESS_STATE%2"
		"2%2Cfalse%5D%2C%22__o3id1e%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPREFERRED_CONTACT_TYPE%2FPerson.preferredContactMethod%22%2C%22Preferred%20Contact%20Method.%22%2C%22PREFERRED_CONTACT_TYPE%22%2Cfalse%5D%2C%22__o3id1d%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.zipCodePlusFour%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id27%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.altPhoneCode%22%2C%22Alternate%20Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id28%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.altPhoneNumber%22%2C%22Alternate%20Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id29%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPHONE_TYPE%2FContactInformation.altPhoneType%22%2C%22Type%22%2C%22PHONE_TYPE%22%2Cfalse%5D%2C%22__o3id23%22%3A%5B%22%"
		"2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id24%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneNumber%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id25%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPHONE_TYPE%2FContactInformation.phoneType%22%2C%22Type%22%2C%22PHONE_TYPE%22%2Cfalse%5D%2C%22__o3id26%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.altPhoneCountryCode%22%2C%22Alternate%20Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.city%22%2C%22City%22%2C%22IEG_STRING%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id8%2C__o3id2c%2C__o3id10%2C__o3id11%2C__o3id6%2C__o3idf%2C__o3id16%2C__o3idc%2C__o"
		"3id17%2C__o3idb%2C__o3id14%2C__o3ida%2C__o3id15%2C__o3id13%2C__o3id2b%2C__o3id1c%2C__o3id1b%2C__o3id1a&__o3synch={p_o3synch_4}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_17_Applicant_Information",LR_AUTO);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_18_Race_Ethnicity");
	
	web_reg_find("Text=street name",  LAST );
	
	web_reg_save_param("p_o3synch_6", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_18_Race_Ethnicity_{dp_UserID};PC=ProcessScript.do_6");
	web_custom_request("ProcessScript.do_6",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3ida=true&__o3id17=YN1&__o3id18={p_SSN}&__o3id19=&__o3id1a=&__o3id1b=YN1&__o3id1c=YN2&__o3id1d=&__o3id1e=&__o3id1f=&__o3id20=&__o3id21=&__o3id22=&__o3id23=&__o3id24=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=MoreAboutYouPage&__o3id4=5&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=MoreAboutYouPage&syncToken=5&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.hawaiianOrPacificIslander%22%2C%22Hawaiian%20or%20Pacific%20Islander%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.asian%22%2C%22Asian%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.blackOrAfricanAmerican%22%2C%22Bla"
		"ck%20or%20African%20American%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.chinese%22%2C%22Chinese%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id22%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isVeteranOrActiveMilitaryMember%22%2C%22Are%20you%20an%20honorably%20discharged%20veteran%20or%20active%20duty%20member%20of%20the%20military%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id11%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.filipino%22%2C%22Filipino%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id21%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnsw"
		"ers%2Fans%2FIEG_YES_NO%2FPerson.usEntryStatus%22%2C%22Have%20you%20lived%20in%20the%20U.S.%20on%20or%20after%20August%2022%2C%201996%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id20%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FSUPPORTING_DOCUMENT_TYPE_LAWFULALIEN%2FPerson.supportingDocumentLawfulAlien%22%2C%22Supporting%20Document%22%2C%22SUPPORTING_DOCUMENT_TYPE_LAWFULALIEN%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isNativeAmericanOrAlaskanIndian%22%2C%22Are%20you%20an%20American%20Indian%2FAlaska%20Native%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fh"
		"f%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.chicano%22%2C%22Chicano%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id18%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.ssn%22%2C%22SSN%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id19%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.ssnApplied%22%2C%22Have%20you%20applied%20for%20SSN%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.puertoRican%22%2C%22Puerto%20Rican%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.cuban%22%2C%22Cuban%22%2C%22IEG_BOOLEA"
		"N%22%2Cfalse%5D%2C%22__o3id16%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.vietnamese%22%2C%22Vietnamese%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.mexicanOrMexAmerican%22%2C%22Mexican%20Or%20Mexican%20American%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id17%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.doesHaveSSNForAddHouseHold%22%2C%22Do%20you%20have%20an%20SSN%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.hispanicOrLatino%22%2C%22Hispanic%2C%20Latino%20or%20Spanish%20origin%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id14%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.korean%22%2C%22Korean%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id15%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers"
		"%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.asianIndian%22%2C%22Asian%20Indian%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.whiteOrCaucasian%22%2C%22White%20or%20Caucasian%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.japanese%22%2C%22Japanese%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id13%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.guanamanianOrChamorro%22%2C%22Guanamanian%20or%20Chamorro%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1f%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.usEntryStatus1%22%2C%22Have%20you%20lived%20in%20the%20U.S.%20on%20or%20after%20August%2022%2C%201996%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id1c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerso"
		"n.isNaturalizedCitizen%22%2C%22Are%20you%20a%20naturalized%20citizen%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id1b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isUSCitizen%22%2C%22Are%20you%20a%20US%20Citizen%20or%20US%20National%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id1e%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FSUPPORTING_DOCUMENT_TYPE_USNATIONAL%2FPerson.supportingDocumentUSNational%22%2C%22Document%20Type%22%2C%22SUPPORTING_DOCUMENT_TYPE_USNATIONAL%22%2Cfalse%5D%2C%22__o3id1d%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.lawfullyPresent%22%2C%22Do%20you%20have%20an%20eligible%20immigration%20status%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id23%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isSpouseOrDependantOfVeteran%22%2C%22Are%20you%20the%20spouse%20or%20dependent%20child%20of%20such%20a%20veteran%20or%20individual%20in%20"
		"active%20duty%20status%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id24%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isReceivingBenefits%22%2C%22Is%20{p_FN}%20currently%20enrolled%20on%20a%20health%20program%20or%20plan%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id1a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FSSN_NOT_APPLIED_REASON%2FPerson.ssnNotAppliedReason%22%2C%22Reason%2C%20why%20you%20don't%20have%20an%20SSN%22%2C%22SSN_NOT_APPLIED_REASON%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id22%2C__o3id21%2C__o3id20%2C__o3id6%2C__o3id18%2C__o3id19%2C__o3id17%2C__o3id1f%2C__o3id1c%2C__o3id1b%2C__o3id1e%2C__o3id1d%2C__o3id23%2C__o3id24%2C__o3id1a&__o3synch={p_o3synch_5}",
		LAST);

	lr_end_transaction("11_MaleWithAPTC_18_Race_Ethnicity",LR_AUTO);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_19_St_Address");

	web_reg_find("Text=home was built",  LAST );
	
	web_reg_save_param("p_o3synch_7", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_19_St_Address_{dp_UserID};PC=ProcessScript.do_7");
	web_submit_data("ProcessScript.do_7",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t40.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id6", "Value=0", ENDITEM,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=__o3id4", "Value=6", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=syncToken", "Value=6", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_6}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_19_St_Address",LR_AUTO);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_20_Home_Buit_Year");

	web_reg_find("Text=level of education", LAST );
	
	web_reg_save_param("p_o3synch_8", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_20_Home_Buit_Year_{dp_UserID};PC=ProcessScript.do_8");
	web_submit_data("ProcessScript.do_8",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t41.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id6", "Value=2", ENDITEM,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=__o3id4", "Value=7", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=syncToken", "Value=7", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_7}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_20_Home_Buit_Year",LR_AUTO);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_21_Education_Level");

	web_reg_find("Text=bedrooms",  LAST );
	
	web_reg_save_param("p_o3synch_9", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_21_Education_Level_{dp_UserID};PC=ProcessScript.do_9");
	web_submit_data("ProcessScript.do_9",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t42.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id6", "Value=0", ENDITEM,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=__o3id4", "Value=8", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=syncToken", "Value=8", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_8}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_21_Education_Level",LR_AUTO);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_22_No_Of_Bedroom");

	web_reg_find("Text=Application Group", LAST );
	
	web_reg_save_param("p_o3synch_10", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_22_No_Of_Bedroom_{dp_UserID};PC=ProcessScript.do_10");
	web_submit_data("ProcessScript.do_10",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t43.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id6", "Value=0", ENDITEM,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=__o3id4", "Value=9", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=RIDPPrimaryResponse", ENDITEM,
		"Name=syncToken", "Value=9", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_9}", ENDITEM,
		LAST);

	lr_end_transaction("11_MaleWithAPTC_22_No_Of_Bedroom",LR_AUTO);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_23_Application_Group");
	
	web_reg_save_param("p_o3synch_11", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_23_Application_Group_{dp_UserID};PC=ProcessScript.do_11");
	
	web_submit_data("ProcessScript.do_11",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t44.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__o3id0", "Value={executionID}", ENDITEM,
		"Name=__o3id1", "Value=1048692", ENDITEM,
		"Name=__o3id2", "Value=HealthCarePortal", ENDITEM,
		"Name=__o3id3", "Value=HouseholdBreaker", ENDITEM,
		"Name=__o3id4", "Value=10", ENDITEM,
		"Name=__o3id5", "Value=true", ENDITEM,
		"Name=validate-save-and-exit", "Value=true", ENDITEM,
		"Name=iegExecutionID", "Value={executionID}", ENDITEM,
		"Name=scriptID", "Value=HealthCarePortal", ENDITEM,
		"Name=pageID", "Value=HouseholdBreaker", ENDITEM,
		"Name=syncToken", "Value=10", ENDITEM,
		"Name=iegScriptVersion", "Value=V1", ENDITEM,
		"Name=iegScriptType", "Value=Portal", ENDITEM,
		"Name=forwardParams", "Value=&id={id}", ENDITEM,
		"Name=o3ctx", "Value=1048692", ENDITEM,
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", ENDITEM,
		"Name=__o3fmeta_mandatory_data", "Value=", ENDITEM,
		"Name=__o3synch", "Value={p_o3synch_10}", ENDITEM,
		LAST);
	
	lr_end_transaction("11_MaleWithAPTC_23_Application_Group",LR_AUTO);

	lr_think_time(ithinktime);
	
	return 0;
}
