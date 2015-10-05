CreateFiles()
{
	
//	char * EmpFileName = "..\\EmpFName.dat";
	long EmpFile = fopen(lr_eval_string("{EmpFileName}"), "a+");
	char line[1024];
	
	if (fgets(line,sizeof(line),EmpFile)==NULL){
		fprintf(EmpFile,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
			"EmpFName","EmpMI","EmpLName","EmpDOBPicker","EmpDOB","EmpSSN","EmpSex","EmpHireDate",
			"EmpHireDatePicker","EmpAddressL1","EmpCity","EmpZip","EmpWorkEmail","EmpDOBDay","EmpDOBMonth",
			"EmpDOBYear","EmployerEmail");
	}

	fclose(EmpFile);
	
	return 0;
}
