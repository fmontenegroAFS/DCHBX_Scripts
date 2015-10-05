GenerateUserName()
{
	
	char c,i;
	char name[32];
	
	name[0]='u';
	name[1]='i';
	name[2]='_';
	
	for (i=3;i<(atoi(lr_eval_string("{nameLength}"))+3);i++) {	
		c = (char) atoi(lr_eval_string("{letterCode}"));
		name[i]=c;
	}
	
	lr_save_string(name, "applicantName");
	
	lr_log_message("User Name = %s",lr_eval_string("{applicantName}"));
	
	return 0;
}

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

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}