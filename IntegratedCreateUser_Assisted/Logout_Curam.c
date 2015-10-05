Logout_Curam()
{

	lr_start_transaction("0999_Logout_Curam");
	addDynaTraceHeader("NA=0999_Logout_Curam;PC=logout.jsp");
	web_url("logout.jsp",
		"URL=https://{p_Webapp_URL}/CitizenPortal/logout.jsp?end_url=https://{p_IA_URL}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/LogoutWrapperPage.do?o3ctx={o3ctx}&dojo.preventCache=1443210495845",
		"Snapshot=t30.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("0999_Logout_Curam", LR_AUTO);
	
	lr_think_time(20);
	
	lr_start_transaction("1000_Last_Logout");
	
	addDynaTraceHeader("NA=1000_Last_Logout;PC=logout");
	web_submit_form("logout", 
		"Snapshot=t31.inf", 
		ITEMDATA, 
		LAST);
	lr_end_transaction("1000_Last_Logout", LR_AUTO);
	
	lr_think_time(20);
	
	return 0;
}
