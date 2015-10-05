SaveSSN()
{
	
	char * filename = "..\\UsedData.dat";
	long file;

	fopen(filename, "a+");
	if ((file = fopen(filename, "a+")) == NULL) 
	{
		lr_error_message ("Cannot open %s", file); 
		return -1; 
	}
	
	fprintf(file, "%s\n" ,lr_eval_string("{EmpSSN}"));
	 
	fclose(file);
	
	return 0;
}
