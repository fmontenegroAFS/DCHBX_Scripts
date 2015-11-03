GenerateSSNs()
{
	SSNGenerator("Assisted_SSN");
	
		lr_output_message(lr_eval_string("{Assisted_SSN}"));
	return 0;
}

SSNGenerator(char* param_name, char* ssnNoSpace)
{
	int randSSN[3];
	char EmployeeDep1SSN[100];
	char EmployeeDep1SSN_1[100];
	char p_SSN_1[100];
	
	randSSN[0] = RandomRange(100,999);
	randSSN[1] = RandomRange(10,99);
	randSSN[2] = RandomRange(1000,9999);
	
	lr_save_int(randSSN[0],"pSSN1dep1_1");
	lr_save_int(randSSN[1],"pSSN2dep1_1");
	lr_save_int(randSSN[2],"pSSN3dep1_1");

	sprintf(EmployeeDep1SSN, "%s-%s-%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	sprintf(EmployeeDep1SSN_1, "%s%s%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	
	lr_save_string(EmployeeDep1SSN, "EmployeeDep1SSN");
	
	lr_save_string(EmployeeDep1SSN, param_name);
	lr_save_string(EmployeeDep1SSN_1, ssnNoSpace);
	
  return 0;
}

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}

random_alpha(char* param_name, int length) {
	char buff[32] = "";
  int r,i;
  char c;
  srand((unsigned int)time(0)); //Seed number for rand()
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

HTMLEncoder(char* param_name){
	
//	char sIn[] = "What color was your first pet&#63;";
	lr_save_string(param_name, "InputParam");
	
	web_convert_param("InputParam", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", LAST);

	lr_output_message("%s", lr_eval_string("{InputParam}"));

//	lr_save_string(InputParam, "InputParam");
	
//	lr_save_string(InputParam, param_name);
	return 0;
	
}