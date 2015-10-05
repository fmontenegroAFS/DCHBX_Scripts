Add_a_Member()
{
	
	lr_start_transaction("EMPLYE_0010_Click_on_Add_Member");

	web_url("Add Member",
		"URL=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members/new?family_id={family_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={employee_role_id}",
		"Snapshot=t34.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("EMPLYE_0010_Click_on_Add_Member",LR_AUTO);
	
	return 0;
}
