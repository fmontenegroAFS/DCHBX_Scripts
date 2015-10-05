SelectAccountType()
{
	
	lr_start_transaction("INTEG_UNASSISTED_0004_Integrated_Create_Account");

	web_reg_find("Text/IC=What Type of Account Do You Need",
	             LAST);

	web_link("Create Account",
	         "Text=Create Account",
	         "Ordinal=1",
	         "Snapshot=t4.inf",
	         EXTRARES,
	         "Url=/sites/all/themes/dchl/css/create-account.css?nuuek7", ENDITEM,
	         "Url=/sites/all/themes/dchl/img/icon/arrow-right-sm-blue.png", "Referer={IntegratedURL}/sites/all/themes/dchl/css/shared.css?nuuek7", ENDITEM,
	         LAST);

	lr_end_transaction("INTEG_UNASSISTED_0004_Integrated_Create_Account", LR_AUTO);

	
	return 0;
}
