EmployeeBeginCoverage()
{

	web_reg_find("Text/IC=Personal Information", "SAVECOUNT=ContinueButton", LAST );
	 	
	lr_start_transaction("EMPLYE_0006_Continue_Coverage");

	web_url("Continue", 
		"URL=http://{enrollAppLandingPage}/insured/employee/search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/employee/welcome", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	if (strcmp(lr_eval_string("{ContinueButton}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0006_Continue_Coverage",LR_PASS);
	}
	else
	{
			lr_end_transaction("EMPLYE_0006_Continue_Coverage",LR_FAIL);
			lr_error_message("Failed to get Welcome page for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	
	lr_think_time(6);
		
/*********************************************************************************************************************************************************************/	

	/*Correlation comment - Do not change!  Original value='rKgQQBl6QUvjSAf8IVH7dbmhEEsTDvyfmpc35cpbIfxcKvT/TpVW39fKHHkut+ylvs4e206GpBVdJxkk/qQAfw==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_5","RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", SEARCH_FILTERS, "Scope=Body","IgnoreRedirections=No",LAST);

	/*Correlation comment - Do not change!  Original value='09/01/2015' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=EligibleDate", "RegExp=/dt>\\\n<dd>(.*?)</dd", "Ordinal=3", SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);

	/*Correlation comment - Do not change!  Original value='55cf866f69702d3f93c51100' Name ='EmployeeID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=EmployeeID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name",	"Ordinal=9",SEARCH_FILTERS,	"Scope=Body","IgnoreRedirections=No",LAST);

	/*Correlation comment - Do not change!  Original value='01/01/2015' Name ='EmpHireDate' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=EmpHireDate", "RegExp=/dt>\\\n<dd>(.*?)</dd", "Ordinal=2",SEARCH_FILTERS, "Scope=Body", "IgnoreRedirections=No",	LAST);

	/*Correlation comment - Do not change!  Original value='09/01/2015' Name ='CovgStartDate' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=CovgStartDate", "RegExp=/dt>\\\n<dd>(.*?)</dd", "Ordinal=3", SEARCH_FILTERS, "Scope=Body", "IgnoreRedirections=No", LAST);	
	
/*********************************************************************************************************************************************************************/	
	
	web_reg_find("Text/IC=Eligible for Coverage", "SAVECOUNT=AddPersonalInfo", LAST );
	web_reg_find("Text/IC=No employer plan found.", "SAVECOUNT=NoEmployerFound", LAST );
	
	
	lr_start_transaction("EMPLYE_0007_Add_Personal_Info");

	web_url("match", 
		"URL=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=TestE&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={EmpLName}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={EmpSSN}&person%5Bgender%5D={EmpSEX}",
		"TargetFrame=",
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/search", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);
	
	if (strcmp(lr_eval_string("{AddPersonalInfo}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0007_Add_Personal_Info",LR_PASS);
	}
	else if (strcmp(lr_eval_string("{SAVECOUNT}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0007_Add_Personal_Info",LR_FAIL);
			lr_error_message("No Employer Found for Employee %s & Employer ID is %s", lr_eval_string("{EmpWorkEmail}"), lr_eval_string("{EmployerEmail}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	else
	{
			lr_end_transaction("EMPLYE_0007_Add_Personal_Info",LR_FAIL);
			lr_error_message("Failed to Add Personal Info for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
		
	lr_think_time(10);
	
//	lr_error_message("Starting This is my Employer Tx for %s >>>", lr_eval_string("{EmpWorkEmail}"));

/*********************************************************************************************************************************************************************/	

	/*Correlation comment - Do not change!  Original value='55c40c5669702d32300e0000' Name ='person_id' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=person_id","RegExp=employee/(.*?)\">Profile",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*", "Notfound=warning", LAST);

	/*Correlation comment - Do not change!  Original value='55f6fc1e69702d41f21c0000' Name ='person_id' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=person_id","RegExp=edit_person_(.*?)\"\\ action",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*",LAST);
	
	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230180000' Name ='employee_role_id' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=employee_role_id",	"RegExp=employee/(.*?)/",SEARCH_FILTERS,"Scope=Headers","IgnoreRedirections=No","RequestUrl=*/employee*", "Notfound=warning", LAST);
		
	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230110000' Name ='CorrelationParameter_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=EmployeeEmailAttrID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=11",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*", "Notfound=warning", LAST);
	
	web_add_header ("X-CSRF-Token", "{authenticity_token}");
	
	web_reg_save_param_regexp(	"ParamName=authenticity_token_1","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No", "Notfound=warning",LAST);
	
	/*Correlation comment - Do not change!  Original value='55cfacdd69702d3fa41c1200' Name ='Employee_Role_ID' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=Employee_Role_ID","RegExp=employee/(.*?)/",SEARCH_FILTERS,	"Scope=Headers","IgnoreRedirections=No","RequestUrl=*/employee*", "Notfound=warning",LAST);

/*********************************************************************************************************************************************************************/
	web_reg_find("Text/IC={EmpWorkEmail}", "SAVECOUNT=ClickThisismyEmployer", LAST );
	               
	web_reg_find("Text/IC=The Oracle account creation service is currently unavailable", "SAVECOUNT=OracleServiceFailure", LAST );
	
	lr_start_transaction("EMPLYE_0008_1_This_is_my_Employer");

	web_submit_data("employee", 
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=TestE&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={EmpLName}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={EmpSSN}&person%5Bgender%5D={EmpSEX}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=?", ENDITEM, 
		"Name=authenticity_token", "Value={authenticity_token_5}", ENDITEM, 
		"Name=commit", "Value=This is my employer", ENDITEM, 
		"Name=employment_relationship[first_name]", "Value={EmpFName}", ENDITEM, 
		"Name=employment_relationship[last_name]", "Value={EmpLName}", ENDITEM,
		"Name=employment_relationship[middle_name]", "Value=L", ENDITEM,
		"Name=employment_relationship[name_pfx]", "Value=", ENDITEM,
		"Name=employment_relationship[name_sfx]", "Value=", ENDITEM,
		"Name=employment_relationship[gender]", "Value={EmpSEX}", ENDITEM,
		"Name=employment_relationship[hired_on]", "Value={EmpHireDate}", ENDITEM,
		"Name=employment_relationship[eligible_for_coverage_on]", "Value={CovgStartDate}", ENDITEM,
		"Name=employment_relationship[census_employee_id]", "Value={EmployeeID}", ENDITEM,
		LAST);
	
	if (strcmp(lr_eval_string("{ClickThisismyEmployer}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0008_1_This_is_my_Employer",LR_PASS);
	}
	else if (strcmp(lr_eval_string("{OracleServiceFailure}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0008_1_This_is_my_Employer",LR_FAIL);
			lr_error_message("Unable to connect to the Oracle account creation service");
	}
	else		
	{
			lr_end_transaction("EMPLYE_0008_1_This_is_my_Employer",LR_FAIL);
			lr_error_message("Step 1 : Failed to click This Is my Employer Button for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	
	web_reg_find("Text/IC={EmpWorkEmail}", "SAVECOUNT=ClickThisismyEmployer_1", LAST );
		
	lr_start_transaction("EMPLYE_0008_2_This_is_my_Employer");
		
	web_link("I'm an {applicationTypeNameCase}",
		"Text=I'm an {applicationTypeNameCase}", 
		"Snapshot=t9.inf", 
		LAST);

	if (strcmp(lr_eval_string("{ClickThisismyEmployer_1}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0008_2_This_is_my_Employer",LR_PASS);
	}
	else
	{
			lr_end_transaction("EMPLYE_0008_2_This_is_my_Employer",LR_FAIL);
			lr_error_message("Step 2 - web link I am an Employee Failed  for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	
	lr_think_time(19);	

/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230170000' Name ='family_id' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=family_id","RegExp=family_id=(.*?)\">Add\\ Member",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/family_members*",LAST);

	
	/*Correlation comment - Do not change!  Original value='rKgQQBl6QUvjSAf8IVH7dbmhEEsTDvyfmpc35cpbIfxcKvT/TpVW39fKHHkut+ylvs4e206GpBVdJxkk/qQAfw==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", SEARCH_FILTERS, "Scope=Body","IgnoreRedirections=No",LAST);


/*********************************************************************************************************************************************************************/
			
	lr_start_transaction("EMPLYE_0009_Contact_Info_Continue");
	
		web_submit_data("55cfacdd69702d3fa4121200",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/{person_id}",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/{Employee_Role_ID}/edit",
		"Snapshot=t19.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=_method", "Value=put", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_1}", ENDITEM,
		"Name=exit_after_method", "Value=false", ENDITEM,
		"Name=person[employee_role_id]", "Value={Employee_Role_ID}", ENDITEM,
		"Name=people[id]", "Value=", ENDITEM,
		"Name=person[first_name]", "Value={EmpFName}", ENDITEM,
		"Name=person[middle_name]", "Value=L", ENDITEM,
		"Name=person[last_name]", "Value={EmpLName}", ENDITEM,
		"Name=person[name_sfx]", "Value=", ENDITEM,
		"Name=person[dob]", "Value={EmpDOB}", ENDITEM,
		"Name=person[ssn]", "Value={EmpSSN}", ENDITEM,
		"Name=person[gender]", "Value={EmpSEX}", ENDITEM,
		"Name=person[addresses_attributes][0][kind]", "Value=home", ENDITEM,
		"Name=person[addresses_attributes][0][address_1]", "Value=609 H Street NE", ENDITEM,
		"Name=person[addresses_attributes][0][address_2]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][0][city]", "Value=Washington", ENDITEM,
		"Name=person[addresses_attributes][0][state]", "Value=DC", ENDITEM,
		"Name=person[addresses_attributes][0][zip]", "Value=20002", ENDITEM,
		"Name=person[addresses_attributes][1][kind]", "Value=work", ENDITEM,
		"Name=person[addresses_attributes][1][address_1]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][1][address_2]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][1][city]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][1][state]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][1][zip]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][2][kind]", "Value=mailing", ENDITEM,
		"Name=person[addresses_attributes][2][address_1]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][2][address_2]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][2][city]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][2][state]", "Value=", ENDITEM,
		"Name=person[addresses_attributes][2][zip]", "Value=", ENDITEM,
		"Name=person[phones_attributes][0][kind]", "Value=home", ENDITEM,
		"Name=person[phones_attributes][0][full_phone_number]", "Value=(213) 131-3213", ENDITEM,
		"Name=person[phones_attributes][1][kind]", "Value=mobile", ENDITEM,
		"Name=person[phones_attributes][1][full_phone_number]", "Value=", ENDITEM,
		"Name=person[phones_attributes][2][kind]", "Value=work", ENDITEM,
		"Name=person[phones_attributes][2][full_phone_number]", "Value=(454) 545-5342", ENDITEM,
		"Name=person[phones_attributes][3][kind]", "Value=fax", ENDITEM,
		"Name=person[phones_attributes][3][full_phone_number]", "Value=", ENDITEM,
		"Name=person[emails_attributes][0][kind]", "Value=home", ENDITEM,
		"Name=person[emails_attributes][0][address]", "Value={EmpWorkEmail}", ENDITEM,
		"Name=person[emails_attributes][0][id]", "Value={EmployeeEmailAttrID}", ENDITEM,
		"Name=person[emails_attributes][1][kind]", "Value=work", ENDITEM,
		"Name=person[emails_attributes][1][address]", "Value=", ENDITEM,
		LAST);

	lr_end_transaction("EMPLYE_0009_Contact_Info_Continue",LR_AUTO);
	
	lr_think_time(10);

/**************************************************************Add A Member()*****************************************************************************************/
	
// Call Add a Member method to click on Add a Member link on the dependents page
//	Add_a_Member();

	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
		Add_a_Member();

/*	web_link("Add Member",
		"Ordinal=1",
		"Text=Add Member",
		"Snapshot=t20.inf",
		LAST);
*/	
/*********************************************************************************************************************************************************************/		

	lr_think_time(10);

/*********************************************************************************************************************************************************************/

/*Correlation comment - Do not change!  Original value='55c40cbe69702d3212040000' Name ='CorrelationParameter_4' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=CorrelationParameter_4","RegExp=add_member_list_(.*?)\"\\)\\.length\\)\\ \\{",	SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
	
/*********************************************************************************************************************************************************************/

	lr_start_transaction("EMPLYE_0011_Confim_Member_Dependent_1");
	
	web_submit_data("family_members",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members",
		"Method=POST",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={Employee_Role_ID}",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=dependent[first_name]", "Value=Honey", ENDITEM,
		"Name=dependent[middle_name]", "Value=", ENDITEM,
		"Name=dependent[last_name]", "Value={EmpLName}", ENDITEM,
		"Name=dependent[dob]", "Value=1978-10-10", ENDITEM,
		"Name=jq_datepicker_ignore_dependent[dob]", "Value=10/10/1978", ENDITEM,
		"Name=dependent[ssn]", "Value={EmployeeSpouseSSN}", ENDITEM,
		"Name=dependent[relationship]", "Value=spouse", ENDITEM,
		"Name=dependent[gender]", "Value=male", ENDITEM,
		"Name=dependent[family_id]", "Value={family_id}", ENDITEM,
		"Name=button", "Value=", ENDITEM,
		LAST);
	
	lr_end_transaction("EMPLYE_0011_Confim_Member_Dependent_1",LR_AUTO);

	lr_think_time(15);

/**************************************************************Add A Member()*****************************************************************************************/

// Call Add a Member method to click on Add a Member link on the dependents page
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
	
	Add_a_Member();
	
/*********************************************************************************************************************************************************************/		
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");

	lr_start_transaction("EMPLYE_0012_Confim_Member_Dependent_2");

	web_submit_data("family_members_2",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members",
		"Method=POST",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={Employee_Role_ID}",
		"Snapshot=t23.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=dependent[first_name]", "Value=SrPain", ENDITEM,
		"Name=dependent[middle_name]", "Value=", ENDITEM,
		"Name=dependent[last_name]", "Value={EmpLName}", ENDITEM,
		"Name=dependent[dob]", "Value=1990-11-11", ENDITEM,
		"Name=jq_datepicker_ignore_dependent[dob]", "Value=11/11/2000", ENDITEM,
		"Name=dependent[ssn]", "Value={EmployeeChildOneSSN}", ENDITEM,
		"Name=dependent[relationship]", "Value=child", ENDITEM,
		"Name=dependent[gender]", "Value=male", ENDITEM,
		"Name=dependent[family_id]", "Value={family_id}", ENDITEM,
		"Name=button", "Value=", ENDITEM,
		LAST);

	lr_end_transaction("EMPLYE_0012_Confim_Member_Dependent_2",LR_AUTO);

	lr_think_time(10);
/**************************************************************Add A Member()*****************************************************************************************/

// Call Add a Member method to click on Add a Member link on the dependents page
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
		
	Add_a_Member();
	
/*********************************************************************************************************************************************************************/		
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
	
	lr_start_transaction("EMPLYE_0013_Confim_Member_Dependent_3");

	web_submit_data("family_members_2",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members",
		"Method=POST",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={Employee_Role_ID}",
		"Snapshot=t23.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=dependent[first_name]", "Value=JrPain", ENDITEM,
		"Name=dependent[middle_name]", "Value=", ENDITEM,
		"Name=dependent[last_name]", "Value={EmpLName}", ENDITEM,
		"Name=dependent[dob]", "Value=1991-11-11", ENDITEM,
		"Name=jq_datepicker_ignore_dependent[dob]", "Value=11/11/2001", ENDITEM,
		"Name=dependent[ssn]", "Value={EmployeeChildTwoSSN}", ENDITEM,
		"Name=dependent[relationship]", "Value=child", ENDITEM,
		"Name=dependent[gender]", "Value=male", ENDITEM,
		"Name=dependent[family_id]", "Value={family_id}", ENDITEM,
		"Name=button", "Value=", ENDITEM,
		LAST);

	lr_end_transaction("EMPLYE_0013_Confim_Member_Dependent_3",LR_AUTO);

	lr_think_time(10);
/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_2","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);

	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230130000' Name ='CorrelationParameter_3' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=Spouse","RegExp=id=\"family_member_ids_0\"\\ value=\"(.*?)\"\\ readonly",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);	

	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230130000' Name ='CorrelationParameter_3' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=Child_1","RegExp=id=\"family_member_ids_1\"\\ value=\"(.*?)\"\\ onclick",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);	

	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230130000' Name ='CorrelationParameter_3' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=Child_2","RegExp=id=\"family_member_ids_2\"\\ value=\"(.*?)\"\\ onclick",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);	

	/*Correlation comment - Do not change!  Original value='55c40c5669702d3230130000' Name ='CorrelationParameter_3' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=Child_3","RegExp=id=\"family_member_ids_3\"\\ value=\"(.*?)\"\\ onclick",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);	

	
/*********************************************************************************************************************************************************************/

	lr_start_transaction("EMPLYE_0014_Continue_to_Select_Plan");

	web_url("new",
		"URL=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections/new?change_plan=&employee_role_id={employee_role_id}&person_id={person_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={employee_role_id}",
		"Snapshot=t36.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("EMPLYE_0014_Continue_to_Select_Plan",LR_AUTO);
	
	lr_think_time(10);

/*********************************************************************************************************************************************************************/	

/*Correlation comment - Do not change!  Original value='55c40cf669702d3238000000' Name ='plan_shoppings' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=plan_shoppings","RegExp=plan_shoppings/(.*?)\\\r\\\n",SEARCH_FILTERS,"Scope=Headers","IgnoreRedirections=No","RequestUrl=*/create*",LAST);

/*Correlation comment - Do not change!  Original value='55f7208469702d6be4270000' Name ='plan_shoppings' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=plan_shoppings",
		"RegExp=plan_shoppings/(.*?)\\?coverage_kind",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/group_selections*",
		LAST);	
		
/*Correlation comment - Do not change!  Original value='5453a543791e4bcd33000007' Name ='plan_id' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=plan_id","RegExp=plan_id=(.*?)\">Select\\ Plan",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/55c40cf669702d3238000000*",	LAST);

//	web_reg_save_param_ex("ParamName=plan_id", "LB=plan_id=", "RB=\">Select Plan", SEARCH_FILTERS, LAST );
	
	/*Correlation comment - Do not change!  Original value='5453a543791e4bcd33000007' Name ='plan_id' Type ='Manual'*/
//	web_reg_save_param_regexp(
//		"ParamName=plan_id",
//		"RegExp=plan_id=(.*?)\\\">Select Plan",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/plans*",
//		LAST);
//	
//	web_reg_save_param_ex("ParamName=plan_id", "LB=plan_id=", "RB=Select Plan", SEARCH_FILTERS, LAST);
	
	web_reg_save_param_ex("ParamName=plan_count", "LB=plans-count\'>", "RB=</strong>", SEARCH_FILTERS, LAST );
	
	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	
	
	lr_start_transaction("EMPLYE_0015_Select_Plan_Continue");
//
//		web_submit_data("group_selections",
//		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections",
//		"Method=POST",
//		"TargetFrame=",
//		"RecContentType=text/html",
//		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections/new?change_plan=&employee_role_id={employee_role_id}&person_id={person_id}",
//		"Snapshot=t37.inf",
//		"Mode=HTML",
//		ITEMDATA,
//		"Name=utf8", "Value=?", ENDITEM,
//		"Name=authenticity_token", "Value={authenticity_token_2}", ENDITEM,
//		"Name=person_id", "Value={person_id}", ENDITEM,
//		"Name=employee_role_id", "Value={employee_role_id}", ENDITEM,
//		"Name=coverage_household_id", "Value=", ENDITEM,
//		"Name=family_member_ids[0]", "Value={Spouse}", ENDITEM,
//		"Name=family_member_ids[1]", "Value={Child_1}", ENDITEM,
//		"Name=family_member_ids[2]", "Value={Child_2}", ENDITEM,
//		"Name=family_member_ids[3]", "Value={Child_3}", ENDITEM,
//		"Name=coverage_kind", "Value=health", ENDITEM,
//		"Name=market_kind", "Value=shop", ENDITEM,
//		LAST);
	
//	web_reg_save_param_regexp(
//		"ParamName=plan_id",
//		"RegExp=plan_id=(.*?)\\\\\">Select\\ Plan",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/plans*",
//		LAST);

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);	
	
	web_submit_data("group_selections",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections/new?change_plan=&employee_role_id={employee_role_id}&person_id={person_id}",
		"Snapshot=t37.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_3}", ENDITEM,
		"Name=person_id", "Value={person_id}", ENDITEM,
		"Name=employee_role_id", "Value={employee_role_id}", ENDITEM,
		"Name=coverage_household_id", "Value=", ENDITEM,
		"Name=family_member_ids[0]", "Value={Spouse}", ENDITEM,
		"Name=family_member_ids[1]", "Value={Child_1}", ENDITEM,
		"Name=family_member_ids[2]", "Value={Child_2}", ENDITEM,
		"Name=family_member_ids[3]", "Value={Child_3}", ENDITEM,
		"Name=coverage_kind", "Value=health", ENDITEM,
		"Name=market_kind", "Value=shop", ENDITEM,
		EXTRARES,
		"URL=plan_shoppings/{plan_shoppings}/plans?change_plan=&amp;coverage_kind=health&amp;enrollment_kind=&amp;market_kind=shop", "Referer=http://enroll-test.dchbx.org/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=&market_kind=shop", ENDITEM,
		"URL=../assets/logo/carrier/aetna-61b8b10ac6a5945749ae7162bb820fd8.jpg", "Referer=http://enroll-test.dchbx.org/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=&market_kind=shop", ENDITEM,
		LAST);
	
	
	lr_end_transaction("EMPLYE_0015_Select_Plan_Continue",LR_AUTO);

	lr_think_time(10);

/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	

	lr_start_transaction("EMPLYE_0016_Click_Select_Plan");

	web_submit_data("thankyou",
		"Action=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&plan_id={plan_id}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}",
		"Snapshot=t38.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_method", "Value=post", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_3}", ENDITEM,
		LAST);

	lr_end_transaction("EMPLYE_0016_Click_Select_Plan",LR_AUTO);
	
	lr_think_time(10);
	
	/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	
	
	lr_start_transaction("EMPLYE_0017_Purchase");

	web_submit_data("checkout", 
		"Action=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/checkout?change_plan=change_plan&plan_id={plan_id}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=change_plan&plan_id={plan_id}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=post", ENDITEM, 
		"Name=authenticity_token", "Value={authenticity_token_4}", ENDITEM, 
		LAST);

	lr_end_transaction("EMPLYE_0017_Purchase",LR_AUTO);

	lr_think_time(10);
	
	lr_start_transaction("EMPLYE_0018_Save_and_Exit");

	web_submit_data("sign_out", 
		"Action=http://{enrollAppLandingPage}/users/sign_out", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&plan_id={plan_id}", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=delete", ENDITEM, 
		"Name=authenticity_token", "Value={authenticity_token_4}", ENDITEM, 
		LAST);

	lr_end_transaction("EMPLYE_0018_Save_and_Exit",LR_AUTO);
	
	lr_think_time(2);
	
	return 0;
}
