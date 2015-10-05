EmployeeRosterSizeCalculator()
{
int rands[7];	
lr_save_int(RandomRange(0,100),"Random");

rands[0] = RandomRange(1,10);
rands[1] = RandomRange(10,20);
rands[2] = RandomRange(20,30);
rands[3] = RandomRange(30,40);
rands[4] = RandomRange(40,50);
// rands[5] = RandomRange(50,75);
// rands[6] = RandomRange(75,100);

/*if (atoi(lr_eval_string("{Random}")) > 90){
	lr_save_int(rands[6],"pEMPLOYEECOUNT");
	lr_save_string("07_SeventyFivetoHundredEmployee","pAddEmployeeTrName");
}
else if ((atoi(lr_eval_string("{Random}")) > 80)){
	lr_save_int(rands[5],"pEMPLOYEECOUNT");
	lr_save_string("06_FiftytoSeventyFiveEmployee","pAddEmployeeTrName");
}
else 
*/
if ((atoi(lr_eval_string("{Random}")) > 90)) {
	lr_save_int(rands[4],"pEMPLOYEECOUNT");
	lr_save_string("05_FortyToFiftyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 80){
	lr_save_int(rands[3],"pEMPLOYEECOUNT");
	lr_save_string("04_ThirtyToFortyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 70){
	lr_save_int(rands[2],"pEMPLOYEECOUNT");
	lr_save_string("03_TwentyToThirtyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 60){
	lr_save_int(rands[1],"pEMPLOYEECOUNT");
	lr_save_string("02_TenToTwentyEmployee","pAddEmployeeTrName");
}
else {
	lr_save_int(rands[0],"pEMPLOYEECOUNT");
	lr_save_string("01_OneToTenEmployee","pAddEmployeeTrName");
}

// lr_error_message("IGNORE THIS ERROR-> Employee Roster size is: %s", lr_eval_string("{pEMPLOYEECOUNT}"));


	return 0;
}
