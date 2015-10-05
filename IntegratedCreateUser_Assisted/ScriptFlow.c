ScriptFlow()
{

	char dp_UserID[64];
	
	lr_think_time(10);
	
	lr_save_int(RandomRange(3,10),"LNameLength");
	random_alpha("randomLN",atoi(lr_eval_string("{LNameLength}")));	
	
	SSNGenerator("Assisted_SSN");
		
	sprintf(dp_UserID, "IA_%s_%s", lr_eval_string("{randomLN}"), lr_eval_string("{pSSN3dep1_1}"));
	
	lr_save_string(dp_UserID, "dp_UserID");

//	lr_save_string(dp_UserID, "dp_UserID_New");
	               
//	lr_output_message("%s", lr_eval_string("{dp_UserID}"));
	
	
//	lr_output_message(lr_eval_string("{Assisted_SSN}"));
	
//	Drupal_Steps();
		
	CreateUserFlow();
	
	lr_think_time(20);
	
	Curam_StartApp_Misc_URLS();
	
	lr_think_time(30);
	
	Logout_Curam();
	
	return 0;
}
