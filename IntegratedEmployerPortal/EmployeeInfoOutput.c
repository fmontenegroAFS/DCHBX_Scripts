
EmployeeInfoOutput()
{
//	char * filename ="c:\\Harish\\EnrollApp\\DataFile\\EmpFName.dat";

//	char * filename = "..\\EmpFName.dat;
	long file;
	char names[10];

	fopen(lr_eval_string("{EmpFileName}"), "a+");
	if ((file = fopen(lr_eval_string("{EmpFileName}"), "a+")) == NULL)
	{
		lr_error_message ("Cannot open %s", file); 
		return -1; 
	}
	
//	fprintf(file, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\tCO%s@test.com\t%s\t%s\t%s\tCONG1%s@test.com\n", lr_eval_string("{EmpFName}"), lr_eval_string("{EmpMI}"), lr_eval_string("{randomLN}"), lr_eval_string("{EmpDOBPicker}"),lr_eval_string("{EmpDOB}"),lr_eval_string("{EmployeeSSN}"),lr_eval_string("{EmpSEX}"),lr_eval_string("{EmpHireDate}"),lr_eval_string("{EmpHireDatePicker}"),lr_eval_string("{EmpAddressL1}"),lr_eval_string("{EmpCity}"),lr_eval_string("{EmpZip}"),lr_eval_string("{EmployeeSSN}"),lr_eval_string("{EmpDOBDay}"),lr_eval_string("{EmpDOBMonth}"),lr_eval_string("{EmpDOBYear}"),lr_eval_string("{FEIN}"));
	fprintf(file, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s%s@test.com\t%s\t%s\t%s\t%s%s@test.com\n", lr_eval_string("{EmpFName}"), lr_eval_string("{EmpMI}"), lr_eval_string("{randomLN}"), lr_eval_string("{EmpDOBPicker}"),lr_eval_string("{EmpDOB}"),lr_eval_string("{EmployeeSSN}"),lr_eval_string("{EmpSEX}"),lr_eval_string("{EmpHireDate}"),lr_eval_string("{EmpHireDatePicker}"),lr_eval_string("{EmpAddressL1}"),lr_eval_string("{EmpCity}"),lr_eval_string("{EmpZip}"), lr_eval_string("{pEmlyePrefix}"),  lr_eval_string("{EmployeeSSN}"), lr_eval_string("{EmpDOBDay}"), lr_eval_string("{EmpDOBMonth}"), lr_eval_string("{EmpDOBYear}"), lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));	 
	fclose(file);
			
return 0;

}
