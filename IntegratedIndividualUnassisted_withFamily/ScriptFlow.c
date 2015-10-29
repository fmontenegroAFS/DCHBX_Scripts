ScriptFlow()
{
	
	lr_save_int(RandomRange(3,10),"LNameLength");

	lr_think_time(5);	
	
	random_alpha("applicantName",atoi(lr_eval_string("{LNameLength}")));
	
	lr_log_message("Applicant Name = %s",lr_eval_string("{applicantName}"));
	
//	GenerateUserName();
	
	lr_think_time(5);

	GenerateUserSSN();
	
	lr_think_time(20);
	
	IntegratedLandingPage();
	
	lr_think_time(20);

	IndividualPage();
	
	lr_think_time(20);
//
//	PlanComparisonIntro();
//	
//	lr_think_time(20);
//
//	PersonalInfoPage();
//	
//	lr_think_time(20);
//
//	DoctorPreferences();
//	
//	lr_think_time(20);
//	
//	PlansList();
//	
//	lr_think_time(20);
//
//	PlanDetails();
//	
//	lr_think_time(20);
//
//	EnrollPage();
//	
//	lr_think_time(20);
//
//	ConsumerRoleSearch();
//	
//	lr_think_time(20);
//	
//	FinancialAssistanceCalculator();
//	
//	lr_think_time(20);
	
	SelectAccountType();
	
	lr_think_time(20);
	
	SelectUnassisted();
	
	lr_think_time(20);
	
	CreateAccount();
	
	lr_think_time(20);

	AccountMatch();
	
	lr_think_time(20);

	ConsumerRole();
	
	lr_think_time(20);

	SubmitPersonalData();
	
	lr_think_time(20);
	
	IDVerificationQuestions();
	
	lr_think_time(20);
	
	AddFamilyMembers();
	
	lr_think_time(20);

	SubmitChangeReason();
	
	lr_think_time(20);

	GroupSelections();
	
	lr_think_time(20);

	ThankYou();
	
	lr_think_time(20);
	
	CheckOut();
	
	lr_think_time(20);

//	web_reg_find("Text=Your enrollment application requires information that needs to be verified", 
//		LAST);

	lr_think_time(20);

	web_link("My Insured Portal", 
		"Text=My Insured Portal", 
		"Snapshot=t80.inf", 
		LAST);

	lr_think_time(20);
	
	lr_start_transaction("INTEG_UNASSISTED_0021_Logout");
	
//	web_submit_data("sign_out", 
//		"Action=http://enroll-preprod.dchbx.org/users/sign_out", 
//		"Method=POST", 
//		"RecContentType=text/html", 
//		"Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}", 
//		"Snapshot=t10.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=_method", "Value=delete", ENDITEM, 
//		"Name=authenticity_token", "Value={authenticity_token_8}", ENDITEM, 
//		LAST);

//	web_submit_form("logout", 
//		"Snapshot=t20.inf", 
//		ITEMDATA, 
//		LAST);	
	
	web_url("logout", 
		"URL=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);		
	
	
	lr_end_transaction("INTEG_UNASSISTED_0021_Logout",LR_AUTO);
	
	lr_think_time(20);
	
	return 0;
}