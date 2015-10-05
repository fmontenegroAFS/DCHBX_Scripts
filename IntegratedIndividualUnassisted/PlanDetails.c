PlanDetails()
{
	
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Plan Details",
	             LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0007_Plan_Details");

	web_link("BlueChoice HMO Young Adult $6,850",
	         "Text={First_Plan_Link}",
	         "Snapshot=t66.inf",
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0007_Plan_Details", LR_AUTO);
	
	return 0;
}
