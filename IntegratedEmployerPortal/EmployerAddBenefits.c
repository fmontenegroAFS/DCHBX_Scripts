EmployerAddBenefits()
{
	web_reg_save_param("AUTH_TOKEN_3", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST);
	
//	web_reg_save_param_ex("ParamName=CorrelationParameter", "LB=option value=\"", "RB=\">Aetna", SEARCH_FILTERS, "Scope=Body", "IgnoreRedirections=No",	LAST);
		
	lr_start_transaction("INTEG_EMPLYR_0007_Click_Add_Plan");

//	web_url("new", 
//		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years/new", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}", 
//		"Snapshot=t7.inf", 
//		"Mode=HTML", 
//		LAST);

//		web_link("click here", 
//		"Text=click here", 
//		"Snapshot=t25.inf", 
//		EXTRARES, 
//		"Url=recommend_dates?start_on=2016-01-01", "Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years/new?tab=benefits", ENDITEM, 
//		"Url=5612dfc569702d080b010000/reference_plans?benefit_group={BENEFIT_GROUP_ID_3}&carrier_for_elected_plan=CareFirst&carrier_id=53e67210eb899a4603000004&plan_option_kind=single_carrier&start_on=2016", "Referer=http://enroll-preprod.dchbx.org/employers/employer_profiles/{EMPLOYER_ID}/plan_years/new?tab=benefits", ENDITEM, 
//		"Url=search_reference_plan?start_on=2016-01-01&reference_plan_id=5603dfb069702d33bc170000&location_id=benefit-group-{BENEFIT_GROUP_ID_3}&_=1444077488637", "Referer=http://enroll-preprod.dchbx.org/employers/employer_profiles/{EMPLOYER_ID}/plan_years/new?tab=benefits", ENDITEM, 
//		"Url=calc_employer_contributions?start_on=2016-01-01&reference_plan_id=5603dfb069702d33bc170000&plan_option_kind=single_carrier&relation_benefits%5B0%5D%5Brelationship%5D=employee&relation_benefits%5B0%5D%5Bpremium_pct%5D=50&relation_benefits%5B0%5D%5Boffered%5D=true&relation_benefits%5B1%5D%5Brelationship%5D=spouse&relation_benefits%5B1%5D%5Bpremium_pct%5D=0&relation_benefits%5B1%5D%5Boffered%5D=true&relation_benefits%5B2%5D%5Brelationship%5D=domestic_partner&"
//		"relation_benefits%5B2%5D%5Bpremium_pct%5D=0&relation_benefits%5B2%5D%5Boffered%5D=true&relation_benefits%5B3%5D%5Brelationship%5D=child_under_26&relation_benefits%5B3%5D%5Bpremium_pct%5D=0&relation_benefits%5B3%5D%5Boffered%5D=true&relation_benefits%5B4%5D%5Brelationship%5D=child_26_and_over&relation_benefits%5B4%5D%5Bpremium_pct%5D=0&relation_benefits%5B4%5D%5Boffered%5D=false&location_id=benefit-group-{BENEFIT_GROUP_ID_3}&_=1444077488638", "Referer=http://enroll-preprod.dchbx.org/employers/"
//		"employer_profiles/{EMPLOYER_ID}/plan_years/new?tab=benefits", ENDITEM, 
//		LAST);
	
	lr_end_transaction("INTEG_EMPLYR_0007_Click_Add_Plan",LR_AUTO);
	
		lr_think_time(9);

	// Auth Token value Needed for the logout Class
	
//	web_reg_save_param("AUTH_TOKEN_4", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", LAST); 

	lr_start_transaction(lr_eval_string("INTEG_EMPLYR_0008_1_Add_Plan_Year_{TxName}"));

	web_submit_data("plan_years",
		"Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years/new",
		"Snapshot=t8.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=✓", ENDITEM,
		"Name=authenticity_token", "Value={AUTH_TOKEN_4}", ENDITEM,
		"Name=plan_year[start_on]", "Value=2015-11-01", ENDITEM,
		"Name=plan_year[end_on]", "Value=2016-10-31", ENDITEM,
		"Name=plan_year[open_enrollment_start_on]", "Value=2015-08-25", ENDITEM,
		"Name=jq_datepicker_ignore_plan_year[open_enrollment_start_on]", "Value=08/25/2015", ENDITEM,
		"Name=plan_year[open_enrollment_end_on]", "Value=2015-10-10", ENDITEM,
		"Name=jq_datepicker_ignore_plan_year[open_enrollment_end_on]", "Value=10/10/2015", ENDITEM,
		"Name=plan_year[fte_count]", "Value={pEMPLOYEECOUNT}", ENDITEM,
		"Name=plan_year[pte_count]", "Value=0", ENDITEM,
		"Name=plan_year[msp_count]", "Value=0", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][title]", "Value=2015 Employer Benefits", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][effective_on_offset]", "Value=0", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][plan_option_kind]", "Value={PlanOption}", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][carrier_for_elected_plan]", "Value={Carrier_ID}", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][metal_level_for_elected_plan]", "Value={Metal_Level}", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][reference_plan_id]", "Value={ReferencePlan}", ENDITEM,
		"Name=reference_plan", "Value={ReferencePlan}", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=reference_plan", "Value=", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][0][relationship]", "Value=employee", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][0][premium_pct]", "Value=75", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][relationship]", "Value=spouse", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][premium_pct]", "Value=75", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][offered]", "Value=false", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][offered]", "Value=true", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][relationship]", "Value=domestic_partner", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][premium_pct]", "Value=75", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][offered]", "Value=false", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][offered]", "Value=true", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][relationship]", "Value=child_under_26", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][premium_pct]", "Value=75", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][offered]", "Value=false", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][offered]", "Value=true", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][relationship]", "Value=child_26_and_over", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][premium_pct]", "Value=75", ENDITEM,
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][offered]", "Value=false", ENDITEM,
		LAST);

	lr_end_transaction(lr_eval_string("INTEG_EMPLYR_0008_1_Add_Plan_Year_{TxName}"), LR_AUTO);


	return 0;
}
