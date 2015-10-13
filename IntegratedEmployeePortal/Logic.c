Logic()
{
	GenerateSSNs();
	
	web_set_sockets_option("SSL_VERSION", "TLS1.1");
	
//	IntegratedLandingPage();

//	EmployeeTab();

	EnrollAppHomePage();
	
	EmployeeCreateAccount();
	
//	ExistingEmpLogin();
	
// Generate SSN for All Dependents
	
	EmployeeBeginCoverage();
	
	Logout();
		
//	EnrollAppHomePage();
//	
//	ExistingEmpLogin();
//	
//	WorkOutPlanPurchase();
	
//	Logout();
	
//	SaveSSN();
		
	return 0;
}
