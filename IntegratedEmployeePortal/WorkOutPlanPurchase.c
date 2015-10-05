WorkOutPlanPurchase()
{
	
/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_2","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
	
	lr_start_transaction("EMPLYE_0018_Shop_For_Plans");

	web_link("Shop for plans Browse plans from carriers in the DC Health Care Exchange.", 
		"Text=Shop for plans Browse plans from carriers in the DC Health Care Exchange.", 
		"Snapshot=t24.inf", 
		LAST);

	lr_end_transaction("EMPLYE_0018_Shop_For_Plans",LR_AUTO);
	
	lr_think_time(10);
	
/*********************************************************************************************************************************************************************/	

/*Correlation comment - Do not change!  Original value='55c40cf669702d3238000000' Name ='plan_shoppings' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=plan_shoppings","RegExp=plan_shoppings/(.*?)\\\r\\\n",SEARCH_FILTERS,"Scope=Headers","IgnoreRedirections=No","RequestUrl=*/create*",LAST);

/*Correlation comment - Do not change!  Original value='5453a543791e4bcd33000007' Name ='plan_id' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=plan_id","RegExp=plan_id=(.*?)\">Select\\ Plan",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/55c40cf669702d3238000000*",	LAST);

	web_reg_save_param_ex("ParamName=plan_id", "LB=plan_id=", "RB=\">Select Plan", SEARCH_FILTERS, LAST );
	
	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	
	lr_think_time(10);
		
	lr_start_transaction("EMPLYE_0019_Select_Plan_Continue_{plan_count}");

	web_submit_data("create",
		"Action=http://{enrollAppLandingPage}/group_selection/create",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/group_selection/new?employee_role_id={employee_role_id}&person_id={person_id}",
		"Snapshot=t37.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_2}", ENDITEM,
		"Name=person_id", "Value={person_id}", ENDITEM,
		"Name=employee_role_id", "Value={employee_role_id}", ENDITEM,
		"Name=coverage_household_id", "Value=", ENDITEM,
		"Name=family_member_ids[0]", "Value={Spouse}", ENDITEM,
		"Name=family_member_ids[1]", "Value={Child_1}", ENDITEM,
		"Name=family_member_ids[2]", "Value={Child_2}", ENDITEM,
		"Name=family_member_ids[3]", "Value={Child_3}", ENDITEM,
		LAST);
	
	lr_end_transaction("EMPLYE_0019_Select_Plan_Continue_{plan_count}",LR_AUTO);

	lr_think_time(10);

/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	

	lr_start_transaction("EMPLYE_0020_Click_Select_Plan");

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
	
	lr_end_transaction("EMPLYE_0020_Click_Select_Plan",LR_AUTO);
	
	lr_think_time(10);
/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	
	
	lr_start_transaction("EMPLYE_0021_Purchase");

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

	lr_end_transaction("EMPLYE_0021_Purchase",LR_AUTO);

	lr_think_time(10);

	// Add Token Explicitly
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_5}");
/*********************************************************************************************************************************************************************/

	/*Correlation comment - Do not change!  Original value='3sCnTcDtwsZPf9vlj0rpD7akf8tqkJ+cmjiSZOGI3LcuQkPylwLVUnv9wGCArP7fsctxWzcYxxZdiLyl1Xf9NA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No",LAST);
	
/*********************************************************************************************************************************************************************/	
	
	lr_start_transaction("EMPLYE_0022_Continue");

	web_link("My Account", 
		"Text=My Account", 
		"Snapshot=t28.inf", 
		LAST);

	lr_end_transaction("EMPLYE_0022_Continue",LR_AUTO);

	lr_think_time(10);
		
	return 0;
}
