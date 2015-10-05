PersonalInfoPage()
{
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Tell us about those who will be covered under this insurance", LAST);

	lr_start_transaction("INTEG_UNASSISTED_0004_Personal_Info_Page");

	web_link("Continue_2",
	         "Text=Continue",
	         "Snapshot=t63.inf",
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0004_Personal_Info_Page", LR_AUTO);

	
	return 0;
}
