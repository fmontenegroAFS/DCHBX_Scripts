CreateUserFlow()
{
	
	/*Correlation comment - Do not change!  Original value='oKAMFkkrHp0rpFW+qKP7UeXYnXuhhJNLJz+cH25MFd/n7aobSGRsOiUrDIsoIdGv4zI1BkLITBVtTEKimSf6SQ==' Name ='authenticity_token' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=authenticity_token", "RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", SEARCH_FILTERS, "Scope=Body", "IgnoreRedirections=Yes", "RequestUrl=*/sign_up*", LAST);
	
	lr_start_transaction("0003_Select_Individual");
	addDynaTraceHeader("NA=0003_Select_Individual_{dp_UserID};PC=assisted");

/*
	web_url("assisted", 
		"URL=https://{p_IA_URL}/create-account/assisted", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);	
*/

	web_url("search",
		"URL=http://enroll-preprod.dchbx.org/insured/consumer_role/search?aqhp=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);		
	
	lr_end_transaction("0003_Select_Individual",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("0004_Create_EnrollApp_User");

//	addDynaTraceHeader("NA=0004_Create_EnrollApp_User;PC=users");

	web_submit_data("users",
		"Action=http://{p_EA_URL}/users",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{p_EA_URL}/users/sign_up",
		"Snapshot=t18.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=✓", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token}", ENDITEM,
		"Name=user[referer]", "Value=", ENDITEM,
//		"Name=user[email]", "Value=IA_{randomLN}_{pSSN3dep1_1}@{emailDomain}", ENDITEM,
		"Name=user[email]", "Value={dp_UserID}@{emailDomain}", ENDITEM,
		"Name=user[password]", "Value=Abcd!234", ENDITEM,
		"Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM,
		"Name=user[invitation_id]", "Value=", ENDITEM,
		"Name=commit", "Value=Create account", ENDITEM,
		LAST);

	lr_end_transaction("0004_Create_EnrollApp_User",LR_AUTO);

	lr_think_time(20);

/*Correlation comment - Do not change!  Original value='km124bGFQqFY3oPQIs6/oZC6iPisW8cp99x6wPtylbjVINDssMowBlZR2uWiTJVfllAghU8XGHe9r6R9DBl6Lg==' Name ='authenticity_token_1' Type ='Manual'*/
	web_reg_save_param_regexp( "ParamName=authenticity_token_1", "RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", SEARCH_FILTERS, "Scope=Body", "IgnoreRedirections=No", "RequestUrl=*/match*", LAST);

	/*Correlation comment - Do not change!  Original value='5605a47f69702d7b642f0000' Name ='5D' Type ='Manual'*/
	web_reg_save_param_regexp("ParamName=5D_Param","RegExp=person%5Buser_id%5D=(.*?)\">Continue",SEARCH_FILTERS,"Scope=Body","IgnoreRedirections=No","RequestUrl=*/match*",LAST);
	
	lr_start_transaction("0005_Personal_Info");

//	addDynaTraceHeader("NA=0005_Personal_Info;PC=match");

//	web_url("match",
//		"URL=http://{p_EA_URL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D={randomLN}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={Assisted_SSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://{p_EA_URL}/insured/consumer_role/search?aqhp=true", 
//		
//		"Snapshot=t19.inf",
//		"Mode=HTML", 
//		LAST);

	web_submit_data("match", 
		"Action=http://{p_EA_URL}/insured/consumer_role/match", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{p_EA_URL}/insured/consumer_role/search?uqhp=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value={authenticity_token}", ENDITEM, 
		"Name=people[id]", "Value=", ENDITEM, 
		"Name=person[first_name]", "Value=assisted", ENDITEM, 
		"Name=person[middle_name]", "Value=", ENDITEM, 
		"Name=person[last_name]", "Value={randomLN}", ENDITEM, 
		"Name=person[name_sfx]", "Value=", ENDITEM, 
		"Name=person[dob]", "Value=1978-01-01", ENDITEM, 
		"Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", ENDITEM, 
		"Name=person[ssn]", "Value={Assisted_SSN}", ENDITEM, 
		"Name=person[no_ssn]", "Value=0", ENDITEM, 
		"Name=person[gender]", "Value=male", ENDITEM, 
		LAST);	
		
	
	lr_end_transaction("0005_Personal_Info",LR_AUTO);

	lr_think_time(20);

/*Correlation comment - Do not change!  Original value='v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&' Name ='tap_token' Type ='Manual'*/
	web_reg_save_param_regexp( "ParamName=tap_token", "RegExp=tap_token=(.*?)TapSubmitURL", SEARCH_FILTERS, "Scope=Headers", "IgnoreRedirections=No", "RequestUrl=*/obrareq.cgi*", LAST);

/*Correlation comment - Do not change!  Original value='8172100689942012479' Name ='CorrelationParameter' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=Req_ID_1","RegExp=request_id=-(.*?)&locale", SEARCH_FILTERS, "Scope=Headers", "IgnoreRedirections=No", "RequestUrl=*/obrareq.cgi*", LAST);
	
//	web_reg_save_param("Req_ID_New","LB=request_id=-","RB=&amp;",LAST);

	lr_start_transaction("0006_Continue");

	addDynaTraceHeader("NA=0006_Continue_{dp_UserID};PC=consumer_role");
	
	web_submit_data("consumer_role",
		"Action=http://{p_EA_URL}/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=assisted&person%5Bgender%5D=male&person%5Blast_name%5D={randomLN}&person%5Bmiddle_name%5D=&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D={Assisted_SSN}&person%5Buser_id%5D={5D_Param}",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{p_EA_URL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D={randomLN}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={Assisted_SSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_method", "Value=post", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_1}", ENDITEM,
//		EXTRARES,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/calendar_multiday.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/date.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/datepicker.1.7.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/field.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/extlink.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/views.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/bootstrap.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.xtras.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/shared.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/ctools.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/v2_3up_landing.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/create-account.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token=v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%2"
//		"52FNavigationLoginApp", ENDITEM,
//		"URL=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-img/flag-red-sm.png", "Referer=https://{p_Webapp_URL}/oaam_server/dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", ENDITEM,
		LAST);

	lr_end_transaction("0006_Continue",LR_AUTO);

	web_add_cookie("has_js=1; DOMAIN={p_Webapp_URL}");

	lr_think_time(20);

/**************************************************************************************************************************/

	// web_find_text("Text/IC=The username or password you entered is incorrect.", "SAVECOUNT=OIMLOGIN", LAST);
	web_reg_find("Text/IC=The username or password you entered is incorrect.", "SAVECOUNT=OIMLOGIN", LAST );
	web_reg_find("Text/IC=DC HealthLink One Time Pin Registration", "SAVECOUNT=LOGIN_Success", LAST );
	
	lr_start_transaction("0007_Login_Curam");

	addDynaTraceHeader("NA=0007_Login_Curam_{dp_UserID};PC=loginAuth.do");
	
	web_submit_data("loginAuth.do",
		"Action=https://{p_Webapp_URL}/oaam_server/loginAuth.do",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token={tap_token}TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-8172100689942012479&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%252FNavigationLoginApp",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=clientOffset", "Value=-4", ENDITEM,
//		"Name=userid", "Value=IA_{randomLN}_{pSSN3dep1_1}@{emailDomain}", ENDITEM,
		"Name=userid", "Value={dp_UserID}@{emailDomain}", ENDITEM,
		"Name=pass", "Value=Abcd!234", ENDITEM,
		LAST);

	if (strcmp(lr_eval_string("{LOGIN_Success}"), "0") > 0)
	{
			lr_end_transaction("0007_Login_Curam",LR_PASS);
	}
	else if (strcmp(lr_eval_string("{OIMLOGIN}"), "0") > 0)
	{
		lr_end_transaction("0007_Login_Curam",LR_FAIL);
		lr_error_message("1st Login Msg - Incorrect Login %s", lr_eval_string("{dp_UserID}"));
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}
	else
	{
		lr_end_transaction("0007_Login_Curam",LR_FAIL);
		lr_error_message("Failed to Login User 1st Time in OIM %s", lr_eval_string("{dp_UserID}"));
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
	}

//	lr_end_transaction("0007_Login_Curam", LR_AUTO);
	
	lr_think_time(20);
	
	web_reg_save_param("corr_fkvalue","LB=fk\" value=\"","RB=\">",LAST);
//    web_reg_save_param("corr_ques0","LB=<option value='","RB='>","Ord=2",LAST);
//    web_reg_save_param("corr_ques1","LB=<option value='","RB='>","Ord=8",LAST);
//    web_reg_save_param("corr_ques2","LB=<option value='","RB='>","Ord=14",LAST);
    /*Correlation comment - Do not change!  Original value='What color was your first cat&#63;' Name ='question0' Type ='Manual'*/

	lr_start_transaction("0007_1_Login_Curam_authJump");	
		addDynaTraceHeader("NA=0007_1_Login_Curam_authJump_{dp_UserID};PC=authJump.do");
		web_url("authJump.do", 
		"URL=https://{p_Webapp_URL}/oaam_server/authJump.do?jump=false&clientOffset=-4", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/oaam_server/loginAuth.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=dhs/ui/dcas-ui-wrapper-css/calendar_multiday.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/date.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/datepicker.1.7.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/field.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/extlink.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/views.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.xtras.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/shared.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/ctools.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/v2_3up_landing.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/create-account.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", ENDITEM, 
		LAST);
	lr_end_transaction("0007_1_Login_Curam_authJump", LR_AUTO);
/**********************************************************************************************************************************************************/
//	char sIn[] = question0;

/**********************************************************************************************************************************************************/	
	lr_think_time(20);
	
	lr_start_transaction("0008_Security_Questions");	
	
	addDynaTraceHeader("NA=0008_Security_Questions_{dp_UserID};PC=registerQuestions.do");

	web_submit_form("registerQuestions.do", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=email", "Value=individual_assisted_1@test.com", ENDITEM, 
		"Name=registerDevice", "Value=true", ENDITEM, 
		"Name=register", "Value=Continue", ENDITEM, 
		LAST);
	
	
	/*
	web_submit_form("registerQuestions.do",
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=question0", "Value=What color was your first cat?", ENDITEM, 
		"Name=Bharosa_Register_Pad0DataField", "Value=none", ENDITEM, 
		"Name=question1", "Value=What is your significant other's favorite color?", ENDITEM, 
		"Name=Bharosa_Register_Pad1DataField", "Value=none", ENDITEM, 
		"Name=question2", "Value=What was your first cat's name?", ENDITEM, 
		"Name=Bharosa_Register_Pad2DataField", "Value=none", ENDITEM, 
		"Name=register", "Value=Continue", ENDITEM, 
		LAST);
*/	
	lr_end_transaction("0008_Security_Questions", LR_AUTO);
	
	lr_think_time(20);
	
/*Correlation comment - Do not change!  Original value='1048576' Name ='o3ctx' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=o3ctx",
		"RegExp=o3ctx=(.*?)\";\\\r\\\n\\ \\ \\ \\ \\ \\ \\\r",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/application.js*",
		LAST);
	
lr_start_transaction("0009_Start_Application");
	
	addDynaTraceHeader("NA=0009_Start_Application_{dp_UserID};PC=application.do");
	web_url("application.do", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/userhome.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=CDEJ/jscript/ibmidxtk/idx/icons/commonIcons.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/base.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", ENDITEM, 
		"Url=CDEJ/themes/v6/css/optimal_browser_msg.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/application-banner.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/curam/app/ExternalApplication.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/curam/widget/menu/MenuPane.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/fx.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/Button.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/text.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormWidget.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_Widget.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/registry.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/main.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_WidgetBase.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/Stateful.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_OnDijitClickMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_FocusMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/focus.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/window.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/a11y.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/manager.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/uacss.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/hccss.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_CssStateMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/touch.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_TemplatedMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/string.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/cache.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormWidgetMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_ButtonMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/ToggleButton.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_ToggleButtonMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/ContentPane.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/i18n.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_ContentPaneResizeMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/utils.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_Contained.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/html.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/parser.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/_base/url.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/date/stamp.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/nls/loading.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/TooltipDialog.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_DialogMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/BorderContainer.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/cookie.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/regexp.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_LayoutWidget.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_Container.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/require.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/main.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/_common.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/Provider.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/manager.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/LocalStorageProvider.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/WhatWGStorageProvider.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/BehaviorStorageProvider.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/storage/CookieStorageProvider.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ContentPane.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/html/_base.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ExpandoPane.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/define.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/debug.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/RuntimeContext.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/Constants.js", ENDITEM, 
		"Url=CDEJ/jscript/cm/_base/_dom.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ResourceBundle.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ScreenContext.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/onLoad.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/UimDialog.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/dialog.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/Refresh.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/tab.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ContextPanel.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ui/refresh/TabRefreshController.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ui/refresh/RefreshEvent.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/DialogObject.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/UIMFragment.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/layout/TabContainer.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/TabContainer.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_TabContainerBase.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/StackContainer.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/nls/common.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/TabController.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/StackController.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/Menu.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/popup.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/place.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/BackgroundIframe.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/DropDownMenu.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_MenuBase.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_KeyNavContainer.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/MenuItem.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/layout/ScrollingTabController.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_WidgetsInTemplateMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_HasDropDown.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/widget/OptimalBrowserMessage.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/ui/ClientDataAccessor.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/app/ExternalApplication.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/widget/containers/TransitionContainer.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/cache/CacheLRU.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/collections/Dictionary.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/collections/_base.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/widget/menu/MenuPane.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/widget/componentWrappers/ListWraper.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/widget/form/ToggleButtonGroup.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/Tooltip.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/HoverCard.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/Moveable.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/Mover.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/common.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/autoscroll.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/TimedMoveable.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/Menu.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/_MenuOpenOnHoverMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/DropDownButton.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/dijit.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/WidgetSet.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/focus.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/place.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/popup.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/scroll.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/sniff.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/typematic.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/typematic.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/wai.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_base/window.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormValueWidget.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormValueMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/HoverCard.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/CheckedMenuItem.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuBar.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/MenuBar.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/Header.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/Header.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuDialog.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/io/iframe.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/_EventTriggerMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuHeading.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/MenuSeparator.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/HoverHelpTooltip.js", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/HoverHelpTooltip.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/PopupMenuBarItem.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/PopupMenuItem.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/MenuBarItem.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/ComboButton.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/widget/menu/BannerMenuItem.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ui/AppExitConfirmation.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/util/ui/AppExitConditionHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/TextBox.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_TextBoxMixin.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/application/nls/Debug.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/application/nls/en/Debug.js", ENDITEM, 
		"Url=CDEJ/jscript/curam/application/nls/en-us/Debug.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/Commons.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/io/script.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/SlidingHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/NodeList-traverse.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/EventHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/AjaxHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/xml/parser.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/FormHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/UIMFragment.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/LoadingHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/Dialog.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/DialogUnderlay.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/util/PopupManager.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/EligibilityResult.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/CategoryAction.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/ProgramAction.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/Transitions.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/fx/easing.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/HoverHelpTooltip.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/_OrientedDropDown.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/InlineDropDown.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/Rotator.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/MenuItem.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/TitlePane.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/FragmentPane.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/DropDown.js", ENDITEM, 
		"Url=CDEJ/jscript/cwtk/widget/ContrastModeChooser.js", ENDITEM, 
		"Url=CDEJ/jscript/HCRCommons.js", ENDITEM, 
		"Url=CDEJ/jscript/HCRTitlePane.js", ENDITEM, 
		"Url=CDEJ/jscript/HCREventHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/HCRAjaxHandler.js", ENDITEM, 
		"Url=CDEJ/jscript/HCRDropDown.js", ENDITEM, 
		"Url=CDEJ/jscript/HCRMenuItem.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ScrollPane.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/_Templated.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/NumberSpinner.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/_Spinner.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/RangeBoundTextBox.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/MappedTextBox.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/ValidationTextBox.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/nls/validate.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/NumberTextBox.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/number.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/cldr/nls/number.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/cldr/nls/en/number.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dijit/form/Form.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/widget/AutoRotator.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/widget/Rotator.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Pan.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Slide.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Controller.js", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/image/menu-icons.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/fx/Toggler.js", ENDITEM, 
		"Url=CDEJ/jscript/dojotk/dojo/resources/blank.gif", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/image/logo-f.png", ENDITEM, 
		"Url=Images/cw_loading_icon.gif", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/custom.css", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/image/contentfull-bg.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", ENDITEM, 
		"Url=CDEJ/extapp/themes/curam-extapp/image/white-75-percent-transparent.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", ENDITEM, 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[help_faq.png]", ENDITEM, 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[ext-banner-user-home.png]", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerLogo.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", ENDITEM, 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[app-banner-logo.png]", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerIcons_TopBanner.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", ENDITEM, 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerIcons.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", ENDITEM, 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[help_contactus.png]", ENDITEM, 
		LAST);
	
	lr_end_transaction("0009_Start_Application", LR_AUTO);
	
	lr_think_time(20);

	
	return 0;
}