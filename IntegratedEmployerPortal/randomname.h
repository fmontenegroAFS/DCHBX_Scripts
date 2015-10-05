random_alpha(char* param_name, int length) {
	char buff[32] = "";
  int r,i;
  char c;
  srand((unsigned int)time(0)*atof(lr_eval_string("VUserID"))); //Seed number for rand()

  for (i = 0; i < length; i++) {
	// A-Z = 65-90 and a-z =  97-122
       //r = rand() % 25 + 65; //uppercase
	r = rand() % 26 + 97; //lowercase
    c = (char)r;
		buff[i] = c;
    printf("%c", c);
  }
	lr_save_string(buff, param_name);
  return 0;
}

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
	
