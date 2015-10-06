CreateAccount()
{

	web_reg_find("Text=Welcome! Your account has been created",
	             LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0010_Create_Account");

	web_submit_data("users",
	                "Action={enrollPreprodURL}/users",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/users/sign_up",
	                "Snapshot=t69.inf",
	                "Mode=HTML",
	                "EncodeAtSign=YES",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token_2}", ENDITEM,
	                "Name=user[referer]", "Value={CheckbookURL}/{Checkbook_specifics}/plan.cfm?data="
	                "eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJzb3J0IjoyLCJoZWFsdGhTdGF0dXMiOiIiLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwicW00IjoiIiwicW0xMiI6IiIsImNhbmNlbGVkSW5zdXJhbmNlIjoiIiwibWV0YWwiOiIiLCJxbTExIjoiIiwicW01IjoiIiwicW0xNCI6IiIsInFtNiI6IiIsInFtMT"
	                "MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19", ENDITEM,
	             //   "Name=user[email]", "Value={applicantName}@test.com", ENDITEM,
	                "Name=user[email]", "Value=dchbxpt+{applicantName}@gmail.com", ENDITEM,	                
	                "Name=user[password]", "Value=Abcd!234", ENDITEM,
	                "Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM,
	                "Name=user[invitation_id]", "Value=", ENDITEM,
	                "Name=commit", "Value=Create account", ENDITEM,
	                LAST);

	lr_end_transaction("INTEG_UNASSISTED_0010_Create_Account", LR_AUTO);

	
	return 0;
}
