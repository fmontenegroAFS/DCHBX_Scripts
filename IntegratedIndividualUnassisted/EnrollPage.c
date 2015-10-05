EnrollPage()
{

	web_reg_find("Text=DC Plan Comparison Tool 2015 - Enroll",
	             LAST);	
	
	lr_start_transaction("INTEG_UNASSISTED_0008_Enroll_Page");

	web_url("toEnroll.cfm",
	        "URL={CheckbookURL}/{Checkbook_specifics}/toEnroll.cfm?noLayout&track&planList=86052DC0400004-01&age=25&healthStatus=&medicalExpense=&smoker=&native=0&pregnant=0&county=Washington%20DC&canceledInsurance=&findSubsidy=NO&calculateSubsidy=0&householdNumber=1&income=&sort=2&docIDs=&coverage=&metal=&planType=&carrier=&doctorsFilter=&premiumFilter=&yearlyFilter=&badYearFilter=&deductibleFilter=&qualityFilter=&qm1=&qm2=&qm3=&qm4=&qm5=&qm6=&qm7=&qm8=&qm9=&qm10=&qm11=&qm12=&qm13=&qm14=&qm15=&network=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={CheckbookURL}/{Checkbook_specifics}/plan.cfm?data="
	        "eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJzb3J0IjoyLCJoZWFsdGhTdGF0dXMiOiIiLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwicW00IjoiIiwicW0xMiI6IiIsImNhbmNlbGVkSW5zdXJhbmNlIjoiIiwibWV0YWwiOiIiLCJxbTExIjoiIiwicW01IjoiIiwicW0xNCI6IiIsInFtNiI6IiIsInFtMT"
	        "MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19",
	        "Snapshot=t67.inf",
	        "Mode=HTML",
	        LAST);

	lr_end_transaction("INTEG_UNASSISTED_0008_Enroll_Page", LR_AUTO);
	
	return 0;
}
