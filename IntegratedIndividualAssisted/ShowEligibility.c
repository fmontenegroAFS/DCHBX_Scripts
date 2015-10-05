ShowEligibility()
{
	lr_start_transaction("11_MaleWithAPTC_44_Show_Eligibility");
	
	web_submit_form("WaitDeferredProgressAction.do",
	                "Snapshot=t118.inf",
	                ITEMDATA,
	                LAST);

	lr_think_time(10);

	web_link("SHOW ELIGIBILITY RESULTS",
	         "Text=SHOW ELIGIBILITY RESULTS",
	         "Snapshot=t119.inf",
	         LAST);


	addDynaTraceHeader("NA=11_MaleWithAPTC_44_Show_Eligibility_1_{dp_UserID};PC=SHOW ELIGIBILITY RESULTS");
	web_url("SHOW ELIGIBILITY RESULTS",
	        "URL=https://{p_Webapp_URL}/CitizenPortal/en_US/HealthCare_resolveEligibilityPage.do?motivationID={motivationID}&o3ctx=112&__o3rpu=HealthCare_submitApplicationResponsePage.do%3FcategoryID%3Dnull%26intakeApplicationID%3D{CorrelationParameter}%26motivationID%3D{motivationID}",
	        "TargetFrame=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/HealthCare_submitApplicationResponsePage.do?intakeApplicationID={CorrelationParameter}&motivationID={motivationID}&categoryID=null",
	        "Snapshot=t67.inf",
	        "Mode=HTML",
	        LAST);

	addDynaTraceHeader("NA=11_MaleWithAPTC_44_Show_Eligibility_2_{dp_UserID};PC=application.do_3");
	web_url("application.do_3",
	        "URL=https://{p_Webapp_URL}/CitizenPortal/application.do",
	        "TargetFrame=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=https://{p_Webapp_URL}/CitizenPortal/userhome.jsp",
	        "Snapshot=t68.inf",
	        "Mode=HTML",
	        LAST);
	
	lr_end_transaction("11_MaleWithAPTC_44_Show_Eligibility",LR_AUTO);

	lr_think_time(ithinktime);
	
	return 0;
}
