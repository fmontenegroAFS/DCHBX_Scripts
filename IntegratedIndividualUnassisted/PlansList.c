PlansList()
{
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Plans List",
	             LAST);
	
	/*Correlation comment - Do not change!  Original value='BlueChoice HMO Young Adult $6,850' Name ='Text' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=First_Plan_Link",
		"RegExp=planName\">(.*?)</a",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/plans.cfm*",
		LAST);

	lr_start_transaction("INTEG_UNASSISTED_0006_Plans_List");

	web_submit_form("plans.cfm",
	                "Snapshot=t65.inf",
	                ITEMDATA,
	                "Name=doctorAutoComplete", "Value=", ENDITEM,
	                EXTRARES,
	                "Url=assets/js/jquery-ui/images/ui-bg_glass_85_dfeffc_1x400.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/js/jquery-ui/jquery-ui.css", ENDITEM,
	                "Url=assets/js/jquery-ui/images/ui-bg_inset-hard_100_fcfdfd_1x100.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/js/jquery-ui/jquery-ui.css", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0006_Plans_List", LR_AUTO);

	return 0;
}
