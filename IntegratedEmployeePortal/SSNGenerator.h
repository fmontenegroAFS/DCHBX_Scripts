SSNGenerator(char* param_name)
{
	int randSSN[3];
	char EmployeeDep1SSN[100];
	
	randSSN[0] = RandomRange(100,999);
	randSSN[1] = RandomRange(10,99);
	randSSN[2] = RandomRange(1000,9999);
	
	lr_save_int(randSSN[0],"pSSN1dep1_1");
	lr_save_int(randSSN[1],"pSSN2dep1_1");
	lr_save_int(randSSN[2],"pSSN3dep1_1");

	sprintf(EmployeeDep1SSN, "%s-%s-%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	lr_save_string(EmployeeDep1SSN, "EmployeeDep1SSN");
	//lr_output_message("Employee dep 1 SSN is %s", lr_eval_string("{EmployeeDep1SSN}"));
	lr_save_string(EmployeeDep1SSN, param_name);
  return 0;
}

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}
