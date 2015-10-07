ScriptFlow()
{
	int i;
	
	// Calculate Employee Roster size first
	
	EmployeeRosterSizeCalculator();
//	
//	lr_think_time(10);
//	
//	IntegratedLandingPage();
//	
//	lr_think_time(10);
//	
//	SmallBusinessTab();
//	
//	lr_think_time(10);
	
//	ContinueToBusinessCostCalculator();
	
	lr_think_time(10);
	
	EnrollAppLandingPage(); // Invoke Landing Page Class
	
	lr_think_time(10);

	EmployerTab(); // Click on Employer Tab
	
	lr_think_time(10);
	
	EmployerCreateAccount(); // Create Employer Login
	
	lr_think_time(10);
	
	lr_save_int(RandomRange(3,8),"LegalName");

	random_alpha("LegalName",atoi(lr_eval_string("{LegalName}")));
	
	EmployerCreateProfile(); // Create Employer Business Profile
	
	lr_think_time(10);
	
	web_reg_save_param("AUTH_TOKEN_4", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST); 
	
	EmployerClickBenefitsTab(); // Click on Benefits Tab. This function is separated intentionally
	
	lr_think_time(10);
	
	EmployerAddBenefits(); // Create Plan Year
	
	lr_think_time(10);
	
	Logout(); // Call the logout function
	
	lr_think_time(10);
	
	// Call Login again to capture Benefit Group ID
	web_reg_save_param("AUTH_TOKEN_5", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST);
	
	EmployerTab(); // Click on Employer Tab First and capture the auth token for Signin ()
	
	lr_think_time(10);
	
	EmployerLogin(); // Login to the employer account
	
	lr_think_time(10);
	
	web_reg_save_param("AUTH_TOKEN_4", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST);
	
//	web_reg_save_param("BENEFIT_GROUP_ID_3", "LB=\"#bg", "RB=\">","SaveLen=24", LAST);
	
//		web_reg_save_param_ex("ParamName=Plan_ID4URL", "LB=/plan_years/", "RB=/publish\\\">Publish Plan Year", SEARCH_FILTERS, LAST);

	web_reg_save_param_ex("ParamName=Plan_ID4URL", "LB=/plan_years/", "RB=/force_publish", SEARCH_FILTERS, LAST);
	
	EmployerClickBenefitsTab(); // click on Benefits Tab to capture Benefit Group ID
	
	lr_think_time(10);
	
	for (i=0;i<atoi(lr_eval_string("{pEMPLOYEECOUNT}"));i++) // This is the good code
		
//	for (i=0;i<7000;i++)

	{
		
		//calls the random_alpha function,
		//assigns it to parameter 'randomName' of 6 characters.
		// Create First and LastName
		
		lr_save_int(RandomRange(3,10),"LNameLength");
//		lr_save_int(2,"LNameLength");

		random_alpha("randomLN",atoi(lr_eval_string("{LNameLength}")));
		SSNGenerator("EmployeeSSN");
		SSNGenerator("EmployeeDep1SSN");
		SSNGenerator("EmployeeDep2SSN");
		lr_log_message(lr_eval_string("{EmployeeSSN}"));
		lr_log_message(lr_eval_string("{EmployeeDep1SSN}"));
		lr_log_message(lr_eval_string("{EmployeeDep2SSN}"));

		lr_think_time(10);
		
		EmployerAddEmployeeRoster(); // Add Employees to the roster
	}
	
	web_add_header ("X-CSRF-Token", "{AUTH_TOKEN_4}");
	
	PublishPlan();

	lr_think_time(10);
	
	Logout(); // Call the logout function
	
	return 0;
}
