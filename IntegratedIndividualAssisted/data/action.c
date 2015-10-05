Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_add_cookie("SSESS637adb3fad27e0085dbb0898a1450649=UUEMFiy_c0rnu9vj3jgo-Mz0B_YoJJFvISlgNl-vp5Q; DOMAIN=preprod.dchealthlink.com");

	web_add_cookie("has_js=1; DOMAIN=preprod.dchealthlink.com");

	addDynaTraceHeader("NA=;PC=preprod.dchealthlink.com");
	web_url("preprod.dchealthlink.com", 
		"URL=https://preprod.dchealthlink.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sites/all/modules/calendar/css/calendar_multiday.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/date/date_api/date.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/fences/field.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/extlink/extlink.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/views/css/views.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/bootstrap.min.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/shared.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/home.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/js/tooltip-flexible/jquery-ui.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/ctools/css/ctools.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/custom/dchl_google_translate/dchl_google_translate.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/home.css?nuuek7", ENDITEM, 
		"Url=/sites/all/modules/extlink/extlink.png", "Referer=https://preprod.dchealthlink.com/sites/all/modules/extlink/extlink.css?nuuek7", ENDITEM, 
		LAST);

	lr_think_time(13);

	lr_start_transaction("0002_Click_Create_Account");

	addDynaTraceHeader("NA=0002_Click_Create_Account;PC=CreateAccount");
	web_link("Create Account", 
		"Text=Create Account", 
		"Ordinal=1", 
		"Snapshot=t16.inf", 
		EXTRARES, 
		"Url=/sites/all/themes/dchl/css/create-account.css?nuuek7", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nuuek7", ENDITEM, 
		LAST);

	lr_end_transaction("0002_Click_Create_Account",LR_AUTO);

	lr_start_transaction("0003_Select_Individual");

	addDynaTraceHeader("NA=0003_Select_Individual;PC=assisted");
	web_url("assisted", 
		"URL=https://preprod.dchealthlink.com/create-account/assisted", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://enroll-preprod.dchbx.org/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://js-agent.newrelic.com/nr-686.min.js", "Referer=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8420599&pl=1443208864375&v=686.b365e66&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=18&be=4065&fe=1667&dc=1197&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1443208864375,%22n%22:0,%22dl%22:4045,%22di%22:5220,%22ds%22:5266,%22de%22:5308,%22dc%22:5735,%22l%22:5735,%22le%22:5736,%22f%22:3902,%22dn%22:3902,%22dne%22:3902,%22c%22:3902,%22ce%22:3902,%22rq%22:3938,%22rp%22:4044,%22rpe%22:4049%7D,%22navigation%22:%7B%7D%7D&jsonp=NREUM.setToken", "Referer"
		"=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/fontawesome-webfont-9cc0a3ea9c1a3dadad9e75e8eb0312db.woff?v=4.4.0", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/icons/check_radio_sheet-9de6b3ff89e891cb43ecc05a8dc84515.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-icons_222222_256x240-cbcd12c8048035bf8dae817212e922da.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-66b22589d0fc959b460476ea579ea2c5.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-cd0eb7b399bba6ce203b35e4b98bd965.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-cfa0baa2d39d4ddef2fd98d7f6685c0f.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_65_ffffff_1x400-b3cd9a420fcfd4bca52c6b76d2486146.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		"Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-78b60ab54d71e2185242c1c59123ddec.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM, 
		LAST);

	lr_end_transaction("0003_Select_Individual",LR_AUTO);

	lr_start_transaction("0004_Create_EnrollApp_User");

	addDynaTraceHeader("NA=0004_Create_EnrollApp_User;PC=users");
	web_submit_data("users", 
		"Action=http://enroll-preprod.dchbx.org/users", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/users/sign_up", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=oKAMFkkrHp0rpFW+qKP7UeXYnXuhhJNLJz+cH25MFd/n7aobSGRsOiUrDIsoIdGv4zI1BkLITBVtTEKimSf6SQ==", ENDITEM, 
		"Name=user[referer]", "Value=", ENDITEM, 
		"Name=user[email]", "Value=assisteduser5@test.com", ENDITEM, 
		"Name=user[password]", "Value=Abcd!234", ENDITEM, 
		"Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM, 
		"Name=user[invitation_id]", "Value=", ENDITEM, 
		"Name=commit", "Value=Create account", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8420599&pl=1443208903906&v=686.b365e66&to=IQ5cQhNfVQoAFkpZWREUQFMFH1oJCxcQXVIQPkBZDVVKSRYBBEJUCg%3D%3D&ap=29&be=626&fe=1605&dc=1314&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1443208903906,%22n%22:0,%22u%22:606,%22ue%22:609,%22dl%22:606,%22di%22:1946,%22ds%22:1946,%22de%22:2142,%22dc%22:2237,%22l%22:2237,%22le%22:2238,%22r%22:2,%22re%22:417,%22f%22:417,%22dn%22:417,%22dne%22:417,%22c%22:417,%22ce%22:417,%22rq%22:459,%22rp%22:605,%22rpe%22:638%7D,"
		"%22navigation%22:%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/search?aqhp=true", ENDITEM, 
		LAST);

	lr_end_transaction("0004_Create_EnrollApp_User",LR_AUTO);

	lr_start_transaction("0005_Personal_Info");

	addDynaTraceHeader("NA=0005_Personal_Info;PC=match");
	web_url("match", 
		"URL=http://enroll-preprod.dchbx.org/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D=test3&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D=796-78-6755&person%5Bno_ssn%5D=0&person%5Bgender%5D=male", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/search?aqhp=true", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8420599&pl=1443208941503&v=686.b365e66&to=IQ5cQhNfVQoAFkpZWREUQFMFH1oJCxcQXVIQPkBZDVVKSQgFEVNf&ap=444&be=679&fe=1507&dc=1324&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1443208941503,%22n%22:0,%22u%22:668,%22ue%22:672,%22dl%22:668,%22di%22:1972,%22ds%22:2010,%22de%22:2146,%22dc%22:2193,%22l%22:2193,%22le%22:2194,%22f%22:1,%22dn%22:1,%22dne%22:1,%22c%22:1,%22ce%22:1,%22rq%22:122,%22rp%22:668,%22rpe%22:682%7D,%22navigation%22:%7B%7D%7D&jsonp=NREUM.setToken", 
		"Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D=test3&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D=796-78-6755&person%5Bno_ssn%5D=0&person%5Bgender%5D=male", ENDITEM, 
		LAST);

	lr_end_transaction("0005_Personal_Info",LR_AUTO);

	lr_start_transaction("0006_Continue");

	addDynaTraceHeader("NA=0006_Continue;PC=consumer_role");
	web_submit_data("consumer_role", 
		"Action=http://enroll-preprod.dchbx.org/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=assisted&person%5Bgender%5D=male&person%5Blast_name%5D=test3&person%5Bmiddle_name%5D=&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D=796-78-6755&person%5Buser_id%5D=56059ed369702d34f4060000", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D=test3&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D=796-78-6755&person%5Bno_ssn%5D=0&person%5Bgender%5D=male", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=post", ENDITEM, 
		"Name=authenticity_token", "Value=km124bGFQqFY3oPQIs6/oZC6iPisW8cp99x6wPtylbjVINDssMowBlZR2uWiTJVfllAghU8XGHe9r6R9DBl6Lg==", ENDITEM, 
		EXTRARES, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/calendar_multiday.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/date.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/datepicker.1.7.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/field.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/extlink.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/views.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.min.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/bootstrap.min.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.xtras.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/shared.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/ctools.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/v2_3up_landing.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/create-account.css?nu05sh", "Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", ENDITEM, 
		"Url=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-img/flag-red-sm.png", "Referer=https://webpp.dchealthlink.com/oaam_server/dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", ENDITEM, 
		LAST);

	lr_end_transaction("0006_Continue",LR_AUTO);

	lr_start_transaction("0007_Login_Curam");

	web_add_cookie("has_js=1; DOMAIN=webpp.dchealthlink.com");

	lr_think_time(14);

	addDynaTraceHeader("NA=0007_Login_Curam;PC=loginAuth.do");
	web_submit_data("loginAuth.do", 
		"Action=https://webpp.dchealthlink.com/oaam_server/loginAuth.do", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://webpp.dchealthlink.com/oaam_server/oamLoginPage.jsp?tap_token="
		"v2.0%7EOAAMTAPPartner%7ENEU2RkQ3NTNGMUY4NUFBNkEyQ0Q1N35CQTBBMDBBODUyMTk3MzQ1RkEzRkI2MDFDMEEyQUQ2QjM0ODVDMUEzfjM4RkY5NDBDRDU0REM2QTJBQ0RFNEZEQTVERkJGMTJGfjNEMjJGNEY3NUZBNDgyODIzMjg5RTM5N0UwRTdFRUNERDMwMDhENDIxMUFDQzE3QTVGQzIyNkQ5MUFDM0Q1MEEzQUIwQkIzM0VFMjhFMEI3RjJBNkYzRUYzOTFENEFGODhCRUZBQzUyNTk4NjhDNkM5NEYzNEJBODkwOUFBQUE4OTU3QTZDMjJENDA3QzgxQjVBMjREODI0NDcyOTY2QzhBNTBDN0MxMDRGNkFCM0VBQTc5ODdGNUFBRDQxOTlBMDg2N0MzMjZBNUVFNDU4NzRDMERDODgxQzQxMzBCMTZDNTY0Mzc5NEM5RUI4NDI1RUQyMURGNjM1NUYwQkU1REU%3D&"
		"TapSubmitURL=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2Fwebpp.dchealthlink.com%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-5304511976462968818&locale=en_US&resource_url=https%253A%252F%252Fwebpp.dchealthlink.com%252FNavigationLoginApp", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=clientOffset", "Value=-4", ENDITEM, 
		"Name=userid", "Value=assisteduser5@test.com", ENDITEM, 
		"Name=pass", "Value=Abcd!234", ENDITEM, 
		EXTRARES, 
		"Url=dhs/ui/dcas-ui-wrapper-css/calendar_multiday.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/date.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/datepicker.1.7.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/field.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/extlink.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/views.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.min.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap.min.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.xtras.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/shared.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/ctools.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/v2_3up_landing.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", ENDITEM, 
		"Url=dhs/ui/dcas-ui-wrapper-css/create-account.css?nu05sh", ENDITEM, 
		"Url=../favicon.ico", "Referer=", ENDITEM, 
		LAST);

	return 0;
}