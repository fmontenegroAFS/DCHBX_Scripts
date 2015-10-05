GenerateUserSSN()
{
	
	char userSSN[32];
	sprintf(userSSN,"%s-%s-%s",lr_eval_string("{UserSSNFirst3}"),lr_eval_string("{UserSSNSecond2}"),lr_eval_string("{UserSSNLast4}"));
	lr_save_string(userSSN,"applicantSSN");
	
	lr_log_message("User SSN = %s",lr_eval_string("{applicantSSN}"));
	
	return 0;
}
