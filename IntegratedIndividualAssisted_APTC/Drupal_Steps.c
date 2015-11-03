Drupal_Steps()
{

	web_add_cookie("SSESS637adb3fad27e0085dbb0898a1450649=UUEMFiy_c0rnu9vj3jgo-Mz0B_YoJJFvISlgNl-vp5Q; DOMAIN={p_IA_URL}");

	web_add_cookie("has_js=1; DOMAIN={p_IA_URL}");
	
	lr_start_transaction("0001_Load_Integrated_HomePage");
	
	addDynaTraceHeader("NA=0001_Load_Integrated_HomePage_{dp_UserID};PC=%7Bp_IA_URL%7D");
	
	web_url("{p_IA_URL}", 
		"URL=https://{p_IA_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("0001_Load_Integrated_HomePage",LR_AUTO);
	
	lr_think_time(13);

	lr_start_transaction("0002_Click_Create_Account");

	addDynaTraceHeader("NA=0002_Click_Create_Account_{dp_UserID};PC=CreateAccount");
	
	web_link("Create Account", 
		"Text=Create Account", 
		"Ordinal=1", 
		"Snapshot=t16.inf", 
		LAST);

	lr_end_transaction("0002_Click_Create_Account",LR_AUTO);
	
	lr_think_time(13);
	return 0;
}
