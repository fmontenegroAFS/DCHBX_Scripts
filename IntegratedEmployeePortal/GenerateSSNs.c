GenerateSSNs()
{
	SSNGenerator("EmployeeSpouseSSN");
	
		lr_output_message(lr_eval_string("{EmployeeSpouseSSN}"));
	
	SSNGenerator("EmployeeChildOneSSN");
	
		lr_output_message(lr_eval_string("{EmployeeChildOneSSN}"));
		
	SSNGenerator("EmployeeChildTwoSSN");
	
		lr_output_message(lr_eval_string("{EmployeeChildTwoSSN}"));	
	return 0;
}
