EmployerAddEmployeeRoster()
{
	int looper = 1, retry = 0, passcount, savedcount;
	
	web_reg_save_param("Auth_Token_010", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST);
	
	lr_start_transaction("INTEG_EMPLYR_0009_Click_Employee_Tab");
	
//		web_url("Employees Employees",
//		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/show_profile?tab=employees",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=text/javascript",
//		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
//		"Snapshot=t7.inf",
//		"Mode=HTML",
//		LAST);
	
	web_link("Employees",
	         "Text=Employees",
	         "Snapshot=t27.inf",
	         LAST);
	
/*Correlation comment - Do not change!  Original value='56142bec69702d2d892d0000' Name ='Benefit_Group_ID' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=Benefit_Group_ID",
		"RegExp=value=\"(.*?)\">2015 Employer Benefits",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);	
	
	web_link("Add New Employee",
	         "Text=Add New Employee",
	         "Snapshot=t28.inf",
	         LAST);
	
	lr_end_transaction("INTEG_EMPLYR_0009_Click_Employee_Tab", LR_AUTO);
	
	lr_think_time(10);
	
	while (looper){
		
		web_reg_find("Text=provided SSN belongs", "SaveCount=savedcount", LAST);
		web_reg_find("Text=Census Employee is successfully", "SaveCount=passcount",LAST);

		lr_start_transaction(lr_eval_string("INTEG_EMPLYR_0010_{pAddEmployeeTrName}"));


	
	web_submit_data("census_employees",
	    "Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees?employer_id={EMPLOYER_ID}",
//		"Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
//		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees/new?tab=employees",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"EncodeAtSign=YES",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=authenticity_token", "Value={Auth_Token_010}", ENDITEM,
		"Name=census_employee[first_name]", "Value={EmpFName}", ENDITEM,
		"Name=census_employee[middle_name]", "Value={EmpMI}", ENDITEM,
		"Name=census_employee[last_name]", "Value={randomLN}", ENDITEM,
		"Name=census_employee[name_sfx]", "Value=", ENDITEM,
		"Name=census_employee[dob]", "Value={EmpDOB}", ENDITEM,
		"Name=jq_datepicker_ignore_census_employee[dob]", "Value={EmpDOBPicker}", ENDITEM,
		"Name=census_employee[ssn]", "Value={EmployeeSSN}", ENDITEM,
		"Name=census_employee[gender]", "Value=female", ENDITEM,
		"Name=census_employee[hired_on]", "Value={EmpHireDate}", ENDITEM,
		"Name=jq_datepicker_ignore_census_employee[hired_on]", "Value={EmpHireDatePicker}", ENDITEM,
		"Name=census_employee[is_business_owner]", "Value=0", ENDITEM,
		"Name=census_employee[benefit_group_assignments_attributes][0][benefit_group_id]", "Value={Benefit_Group_ID}", ENDITEM,
		"Name=census_employee[address_attributes][kind]", "Value=home", ENDITEM,
		"Name=census_employee[address_attributes][address_1]", "Value=609 H Street NE", ENDITEM,
		"Name=census_employee[address_attributes][address_2]", "Value=", ENDITEM,
		"Name=census_employee[address_attributes][city]", "Value=Washington", ENDITEM,
		"Name=census_employee[address_attributes][state]", "Value=DC", ENDITEM,
		"Name=census_employee[address_attributes][zip]", "Value=20002", ENDITEM,
		"Name=census_employee[email_attributes][kind]", "Value=work", ENDITEM,
		"Name=census_employee[email_attributes][address]", "Value={pEmlyePrefix}{EmployeeSSN}@test.com", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][first_name]", "Value=Spouse", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][middle_name]", "Value=L", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][last_name]", "Value=Male", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][ssn]", "Value={{EmployeeDep1SSN}", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][_destroy]", "Value=false", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][dob]", "Value=1978-01-01", ENDITEM,
//		"Name=jq_datepicker_ignore_census_employee[census_dependents_attributes][1439047771382][dob]", "Value=01/01/1978", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][gender]", "Value=male", ENDITEM,
//		"Name=census_employee[census_dependents_attributes][1439047771382][employee_relationship]", "Value=spouse", ENDITEM,
		LAST);

/*
		web_submit_data("census_employees",
		                "Action=http://enroll-preprod.dchbx.org/employers/employer_profiles/{EMPLOYER_ID}/census_employees?employer_id={EMPLOYER_ID}",
		                "Method=POST",
		                "EncodeAtSign=YES",
		                "RecContentType=text/html",
		                "Referer=http://enroll-preprod.dchbx.org/employers/employer_profiles/{EMPLOYER_ID}/census_employees/?tab=employees",
		                "Snapshot=t29.inf",
		                "Mode=HTML",
		                ITEMDATA,
		                "Name=utf8", "Value=✓", ENDITEM,
		                "Name=authenticity_token", "Value={Auth_Token_010}", ENDITEM,
		                "Name=census_employee[first_name]", "Value=Test", ENDITEM,
		                "Name=census_employee[middle_name]", "Value=", ENDITEM,
		                "Name=census_employee[last_name]", "Value=employee1-3", ENDITEM,
		                "Name=census_employee[name_sfx]", "Value=", ENDITEM,
		                "Name=census_employee[dob]", "Value=1990-01-01", ENDITEM,
		                "Name=jq_datepicker_ignore_census_employee[dob]", "Value=01/01/1990", ENDITEM,
		                "Name=census_employee[ssn]", "Value={EmployeeSSN}", ENDITEM,
		                "Name=census_employee[gender]", "Value=male", ENDITEM,
		                "Name=census_employee[hired_on]", "Value=2015-10-01", ENDITEM,
		                "Name=jq_datepicker_ignore_census_employee[hired_on]", "Value=10/01/2015", ENDITEM,
		                "Name=census_employee[is_business_owner]", "Value=0", ENDITEM,
		                "Name=census_employee[benefit_group_assignments_attributes][0][benefit_group_id]", "Value={BENEFIT_GROUP_ID_3}", ENDITEM,
		                "Name=census_employee[address_attributes][kind]", "Value=home", ENDITEM,
		                "Name=census_employee[address_attributes][address_1]", "Value=609 H St", ENDITEM,
		                "Name=census_employee[address_attributes][address_2]", "Value=", ENDITEM,
		                "Name=census_employee[address_attributes][city]", "Value=Washington", ENDITEM,
		                "Name=census_employee[address_attributes][state]", "Value=DC", ENDITEM,
		                "Name=census_employee[address_attributes][zip]", "Value=20002", ENDITEM,
		                "Name=census_employee[email_attributes][kind]", "Value=work", ENDITEM,
		                "Name=census_employee[email_attributes][address]", "Value={pEmlyePrefix}{EmployeeSSN}@test.com", ENDITEM,
		                LAST);
*/		
		/*

	web_submit_data("census_employees_2",
		"Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees?employer_id={EMPLOYER_ID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncodeAtSign=YES",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=authenticity_token", "Value={Auth_Token_010}", ENDITEM,
		"Name=census_employee[first_name]", "Value={EmpFName}", ENDITEM,
		"Name=census_employee[middle_name]", "Value={EmpMI}", ENDITEM,
		"Name=census_employee[last_name]", "Value={EmpLName}", ENDITEM,
		"Name=census_employee[name_sfx]", "Value=", ENDITEM,
		"Name=census_employee[dob]", "Value={EmpDOB}", ENDITEM,
		"Name=jq_datepicker_ignore_census_employee[dob]", "Value={EmpDOBPicker}", ENDITEM,
		"Name=census_employee[ssn]", "Value={EmpSSN}", ENDITEM,
		"Name=census_employee[gender]", "Value={EmpSEX}", ENDITEM,
		"Name=census_employee[hired_on]", "Value={EmpHireDate}", ENDITEM,
		"Name=jq_datepicker_ignore_census_employee[hired_on]", "Value={EmpHireDatePicker}", ENDITEM,
		"Name=census_employee[is_business_owner]", "Value=0", ENDITEM,
		"Name=census_employee[benefit_group_assignments_attributes][0][benefit_group_id]", "Value={BENEFIT_GROUP_ID_3}", ENDITEM,
		"Name=census_employee[address_attributes][kind]", "Value=home", ENDITEM,
		"Name=census_employee[address_attributes][address_1]", "Value={EmpAddressL1}", ENDITEM,
		"Name=census_employee[address_attributes][address_2]", "Value=", ENDITEM,
		"Name=census_employee[address_attributes][city]", "Value={EmpCity}", ENDITEM,
		"Name=census_employee[address_attributes][state]", "Value=DC", ENDITEM,
		"Name=census_employee[address_attributes][zip]", "Value={EmpZip}", ENDITEM,
		"Name=census_employee[email_attributes][kind]", "Value=work", ENDITEM,
		"Name=census_employee[email_attributes][address]", "Value={EmpWorkEmail}", ENDITEM,
		LAST);
		 */

//	lr_end_transaction("INTEG_EMPLYR_0010_Click_Employee_Tab", LR_AUTO);
		
		looper = 0;
		if (atoi(lr_eval_string("{passcount}"))){
			EmployeeInfoOutput(); // If Employee is created, redirect the Emp Info into LogFile so the Employee Script can use the data to create account on emp portal
			lr_end_transaction(lr_eval_string("INTEG_EMPLYR_0010_{pAddEmployeeTrName}"), LR_PASS);
		}
		
		else if (atoi(lr_eval_string("{savedcount}"))) {
			lr_output_message("SSN Already in use, retrying");
			looper = 1;
			retry++;
			
			if (retry > 4){
				lr_output_message("Could Not Create New Employee");
				lr_save_int(atoi(lr_eval_string("{pSSN3}"))+1000,"pSSN3");
			}
		}
		else{
			lr_end_transaction(lr_eval_string("INTEG_EMPLYR_0010_{pAddEmployeeTrName}"),LR_AUTO);
		}
	}
	
	return 0;
}
