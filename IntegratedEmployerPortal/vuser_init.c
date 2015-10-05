/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 2739
   ------------------------------------------------------------------------------- */

vuser_init()
{
	
int pEmpCount;
int OEEndOnOffset, OEStartOnOffset, PYEndOnOffset, PYStartOnOffset;
int fileGroup;
char  GeneratedEmpFileName[64];

srand(atof(lr_eval_string("{MillisSeed}"))*atof(lr_eval_string("VUserID")));
	
fileGroup = (atoi(lr_eval_string("{VUserID}")))/1;

sprintf(GeneratedEmpFileName,"C:\\Enroll_App\\Data_Folder\\EmpFName_%d.dat",fileGroup);
//sprintf(GeneratedEmpFileName,"..\\EmpFName.dat");

lr_save_string(GeneratedEmpFileName, "EmpFileName");

CreateFiles();

/*
lr_save_int(RandomRange(0,100),"Random");

rands[0] = RandomRange(1,10);
rands[1] = RandomRange(10,20);
rands[2] = RandomRange(20,30);
rands[3] = RandomRange(30,40);
rands[4] = RandomRange(40,50);
rands[5] = RandomRange(50,75);
rands[6] = RandomRange(75,100);

if (atoi(lr_eval_string("{Random}")) > 90){
	lr_save_int(rands[6],"pEMPLOYEECOUNT");
	lr_save_string("07_SeventyFivetoHundredEmployee","pAddEmployeeTrName");
}
if (atoi(lr_eval_string("{Random}")) > 80){
	lr_save_int(rands[5],"pEMPLOYEECOUNT");
	lr_save_string("06_FiftytoSeventyFiveEmployee","pAddEmployeeTrName");
}
if (atoi(lr_eval_string("{Random}")) > 70){
	lr_save_int(rands[4],"pEMPLOYEECOUNT");
	lr_save_string("05_FortyToFiftyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 60){
	lr_save_int(rands[3],"pEMPLOYEECOUNT");
	lr_save_string("04_ThirtyToFortyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 55){
	lr_save_int(rands[2],"pEMPLOYEECOUNT");
	lr_save_string("03_TwentyToThirtyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 50){
	lr_save_int(rands[1],"pEMPLOYEECOUNT");
	lr_save_string("02_TenToTwentyEmployee","pAddEmployeeTrName");
}
else {
	lr_save_int(rands[0],"pEMPLOYEECOUNT");
	lr_save_string("01_OneToTenEmployee","pAddEmployeeTrName");
}

lr_error_message("<<<<<IGNORE THIS ERROR>>>>> Employee Roster size is: %s", lr_eval_string("{pEMPLOYEECOUNT}"));
*/
/*	
lr_save_datetime("%m%d", DATE_NOW, "pSSN3");

OEEndOnOffset = DaysUntilDate(0,1,10,0);
lr_save_datetime("%Y-%m-%d", DATE_NOW+ONE_DAY*OEEndOnOffset, "pOEEndOn");
lr_save_datetime("%m/%d/%Y", DATE_NOW+ONE_DAY*OEEndOnOffset, "pOEEndOnIgnore");

OEStartOnOffset = DaysUntilDate(0,1,1,0);
lr_save_datetime("%Y-%m-%d", DATE_NOW+ONE_DAY*OEStartOnOffset, "pOEStartOn");
lr_save_datetime("%m/%d/%Y", DATE_NOW+ONE_DAY*OEStartOnOffset, "pOEStartOnIgnore");

PYEndOnOffset = DaysUntilDate(1,2,1,1);
lr_save_datetime("%Y-%m-%d", DATE_NOW+ONE_DAY*PYEndOnOffset, "pPYEndOn");
lr_save_datetime("%m/%d/%Y", DATE_NOW+ONE_DAY*PYEndOnOffset, "pPYEndOnIgnore");

PYStartOnOffset = DaysUntilDate(0,3,1,0);
lr_save_datetime("%Y-%m-%d", DATE_NOW+ONE_DAY*PYStartOnOffset, "pPYStartOn");
lr_save_datetime("%m/%d/%Y", DATE_NOW+ONE_DAY*PYStartOnOffset, "pPYStartOnIgnore");
*/
 return 0;
}

//Choose how many Years forward, Months forward, and the specific day of the month you want (in that order).
//If the 4th parameter is anything other than zero, the date will be the last day of that month.
//Return value will be the number of days to that date.  Made to be used as shown below.
//DATE_NOW + ONE_DAY*ThisFunctionsReturnValue.  This is a smarter way of offsetting dates than LR allows. 
DaysUntilDate(int YearOffSet, int MonthOffSet, int DayWanted, int lastOf){
	int Year=0, Month=0, Day=0, YearWanted=10, MonthWanted=0;
	int iDays = 0;

     lr_save_datetime("%Y %m %d", DATE_NOW+ONE_DAY*iDays, "pTempDate");
     sscanf(lr_eval_string("{pTempDate}"), "%d %d %d", &Year, &Month, &Day);
     
     MonthWanted = (Month + MonthOffSet)%12;
     YearWanted = (Year + YearOffSet);
     
     if (MonthOffSet > 12){
     	YearOffSet += MonthOffSet/12;
     	MonthOffSet %= 12;
     }
     
     if (MonthWanted < Month){
     	YearOffSet++;
     }

     if (lastOf !=0){
     	MonthWanted++;
     	DayWanted = 1;
     }

	while (Year != YearWanted || Month != MonthWanted || Day != DayWanted) {
    	lr_save_datetime("%Y %m %d", DATE_NOW+ONE_DAY*iDays, "pTempDate");
    	sscanf(lr_eval_string("{pTempDate}"), "%d %d %d", &Year, &Month, &Day);
    	iDays++;
     }

     if (lastOf != 0){
     	return iDays-2;
     }
     
	return iDays-1;
}

buffer()
{
  web_set_max_html_param_len("2097152"); 
  web_reg_save_param("buffer","LB=","RB=","Search=Body",LAST);
  return 0;
}
