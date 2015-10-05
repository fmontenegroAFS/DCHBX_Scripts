ScriptFlow()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_reg_find("Text=PREPROD[a] - DC Health Link | Welcome to DC's Health Insurance Marketplace", 
		LAST);

	web_add_cookie("SSESS637adb3fad27e0085dbb0898a1450649=MTqlkt-VwSIWXK5EBCCJ8ww3EX5EfCaOeZUcJk0_D1s; DOMAIN=preprod.dchealthlink.com");

	web_add_cookie("has_js=1; DOMAIN=preprod.dchealthlink.com");

	web_url("preprod.dchealthlink.com", 
		"URL=https://preprod.dchealthlink.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sites/all/modules/calendar/css/calendar_multiday.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/date/date_api/date.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/fences/field.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/extlink/extlink.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/views/css/views.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/bootstrap.min.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/ctools/css/ctools.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/css/home.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/custom/dchl_google_translate/dchl_google_translate.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/home.css?nuobvv", ENDITEM, 
		"Url=/sites/all/modules/extlink/extlink.png", "Referer=https://preprod.dchealthlink.com/sites/all/modules/extlink/extlink.css?nuobvv", ENDITEM, 
		LAST);

	web_reg_find("Text=PREPROD[a] - Individual &amp; Family | DC Health Link", 
		LAST);

	web_link("Individual & Family", 
		"Text=Individual & Family", 
		"Ordinal=1", 
		"Snapshot=t17.inf", 
		EXTRARES, 
		"Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/person-circle-gray.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM, 
		"Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer=https://preprod.dchealthlink.com/sites/all/themes/dchl/css/shared.css?nuobvv", ENDITEM, 
		LAST);

	web_reg_find("Text=DC Plan Comparison Tool 2016", 
		LAST);

	web_add_cookie("searchVariables=%7B%22peopleCovered%22%3A%5B%7B%22id%22%3A1%2C%22age%22%3A%2225%22%2C%22healthStatus%22%3A%22%22%2C%22medicalExpense%22%3A%22%22%2C%22smoker%22%3A0%2C%22native%22%3A0%2C%22pregnant%22%3A0%7D%5D%7D; DOMAIN=dc.checkbookhealth.org");

	web_link("Continue", 
		"Text=Continue", 
		"Ordinal=1", 
		"Snapshot=t18.inf", 
		EXTRARES, 
		"Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/info-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM, 
		"Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/video-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM, 
		"Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/plus-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM, 
		"Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/flag-lg-yellow.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM, 
		"Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/reload-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM, 
		"Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/print-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", ENDITEM, 
		LAST);

	web_reg_find("Text=DC Plan Comparison Tool 2016 - Tell us about those who will be covered under this insurance", 
		LAST);

	web_link("Continue_2", 
		"Text=Continue", 
		"Snapshot=t19.inf", 
		LAST);

	web_reg_find("Text=DC Plan Comparison Tool 2016 - Doctor Preferences", 
		LAST);

	web_url("doctors.cfm", 
		"URL=http://dc.checkbookhealth.org/hie/dc/2016/doctors.cfm?age=25&healthStatus=&medicalExpense=&pregnant=0&native=0&findSubsidy=no&householdNumber=1&income=&calculateSubsidy=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://dc.checkbookhealth.org/hie/dc/2016/search.cfm?data=eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7InN0YXJ0IjoiIn19", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=DC Plan Comparison Tool 2016 - Plans List", 
		LAST);

	web_submit_form("plans.cfm", 
		"Snapshot=t21.inf", 
		ITEMDATA, 
		"Name=doctorAutoComplete", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=assets/js/jquery-ui/images/ui-bg_glass_85_dfeffc_1x400.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/js/jquery-ui/jquery-ui.css", ENDITEM, 
		"Url=assets/js/jquery-ui/images/ui-bg_inset-hard_100_fcfdfd_1x100.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/js/jquery-ui/jquery-ui.css", ENDITEM, 
		LAST);

	web_reg_find("Text=DC Plan Comparison Tool 2016 - Plan Details", 
		LAST);

	web_link("BlueChoice HMO Young Adult $6,850", 
		"Text=BlueChoice HMO Young Adult $6,850", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_cookie("toEnroll=86052DC0400004-01; DOMAIN=dc.checkbookhealth.org");

	web_reg_find("Text=DC Plan Comparison Tool 2015 - Enroll", 
		LAST);

	web_url("toEnroll.cfm", 
		"URL=http://dc.checkbookhealth.org/hie/dc/2016/toEnroll.cfm?noLayout&track&planList=86052DC0400004-01&age=25&healthStatus=&medicalExpense=&smoker=&native=0&pregnant=0&county=Washington%20DC&canceledInsurance=&findSubsidy=NO&calculateSubsidy=0&householdNumber=1&income=&sort=2&docIDs=&coverage=&metal=&planType=&carrier=&doctorsFilter=&premiumFilter=&yearlyFilter=&badYearFilter=&deductibleFilter=&qualityFilter=&qm1=&qm2=&qm3=&qm4=&qm5=&qm6=&qm7=&qm8=&qm9=&qm10=&qm11=&qm12=&qm13=&qm14=&qm15=&network=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://dc.checkbookhealth.org/hie/dc/2016/plan.cfm?data="
		"eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwiaGVhbHRoU3RhdHVzIjoiIiwic29ydCI6MiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwibWV0YWwiOiIiLCJxbTQiOiIiLCJjYW5jZWxlZEluc3VyYW5jZSI6IiIsInFtMTIiOiIiLCJxbTUiOiIiLCJxbTExIjoiIiwicW02IjoiIiwicW0xNCI6IiIsInFtMT"
		"MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_url("search", 
		"URL=http://enroll-preprod.dchbx.org/insured/consumer_role/search?uqhp=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://dc.checkbookhealth.org/hie/dc/2016/plan.cfm?data="
		"eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwiaGVhbHRoU3RhdHVzIjoiIiwic29ydCI6MiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwibWV0YWwiOiIiLCJxbTQiOiIiLCJjYW5jZWxlZEluc3VyYW5jZSI6IiIsInFtMTIiOiIiLCJxbTUiOiIiLCJxbTExIjoiIiwicW02IjoiIiwicW0xNCI6IiIsInFtMT"
		"MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://js-agent.newrelic.com/nr-741.min.js", "Referer=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590037737&v=741.f816aee&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=8&be=1331&fe=121268&dc=121095&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590037737,%22n%22:0,%22dl%22:1318,%22di%22:122402,%22ds%22:122430,%22de%22:122454,%22dc%22:122603,%22l%22:122603,%22le%22:122604,%22r%22:0,%22re%22:1247,%22f%22:1250,%22dn%22:1251,%22dne%22:1251,%22c%22:1251,%22ce%22:1251,%22rq%22:1277,%22rp%22:1318,%22rpe%22:1333%7D,%22navigation%22"
		":%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("users", 
		"Action=http://enroll-preprod.dchbx.org/users", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/users/sign_up", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=/RTSRbnsDQ/kGqUmWjmM9E4hb5MM6rp1+Cly0dag9AxmhhO7xcXSCC7Y/cNyMu33qWAce9HOV0eQUW8iNc0sQA==", ENDITEM, 
		"Name=user[referer]", "Value=http://dc.checkbookhealth.org/hie/dc/2016/plan.cfm?data="
		"eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwiaGVhbHRoU3RhdHVzIjoiIiwic29ydCI6MiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwibWV0YWwiOiIiLCJxbTQiOiIiLCJjYW5jZWxlZEluc3VyYW5jZSI6IiIsInFtMTIiOiIiLCJxbTUiOiIiLCJxbTExIjoiIiwicW02IjoiIiwicW0xNCI6IiIsInFtMT"
		"MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19", ENDITEM, 
		"Name=user[email]", "Value=individualUnassisted4@test.com", ENDITEM, 
		"Name=user[password]", "Value=Abcd!234", ENDITEM, 
		"Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM, 
		"Name=user[invitation_id]", "Value=", ENDITEM, 
		"Name=commit", "Value=Create account", ENDITEM, 
		EXTRARES, 
		"Url=/assets/icons/check_radio_sheet-9de6b3ff89e891cb43ecc05a8dc84515.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/fontawesome-webfont-a21d40494ad61b33a05df3c78a7a276c.woff2?v=4.4.0", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590211269&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH1oJCxcQXVIQPkBZDVVKSRYBBEJUCg%3D%3D&ap=15&be=297&fe=12466&dc=314&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590211269,%22n%22:0,%22u%22:275,%22ue%22:277,%22dl%22:275,%22di%22:609,%22ds%22:609,%22de%22:754,%22dc%22:12760,%22l%22:12760,%22le%22:12761,%22r%22:3,%22re%22:201,%22f%22:201,%22dn%22:201,%22dne%22:201,%22c%22:201,%22ce%22:201,%22rq%22:229,%22rp%22:275,%22rpe%22:307%7D,"
		"%22navigation%22:%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/search?uqhp=true", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-66b22589d0fc959b460476ea579ea2c5.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-cfa0baa2d39d4ddef2fd98d7f6685c0f.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-icons_222222_256x240-cbcd12c8048035bf8dae817212e922da.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-78b60ab54d71e2185242c1c59123ddec.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-cd0eb7b399bba6ce203b35e4b98bd965.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-65c6a21b08a8c1151b2bbfbd64269d49.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-icons_454545_256x240-319ac2399bdbeb396c0afa7f41fceaac.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/glyphicons-halflings-regular-c575a06b0f5e17a30eccb36f64777cc3.woff2", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/avenirltstd-black-30537c01d25f7c6edc1d149513dd3116.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/icons/bronze-circle-01104c3991c066061e2562e16b743243.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/icons/silver-circle-215097bc30260c2d100146c2a2cf5917.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/icons/gold-circle-9c65653709ef747c464dc5ef45320613.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		"Url=/assets/icons/platinum-circle-413483a54b3f43af9fa1f2e6beedecb8.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(28);

	web_url("match", 
		"URL=http://enroll-preprod.dchbx.org/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=individualUnassisted4&person%5Bmiddle_name%5D=&person%5Blast_name%5D=Test&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D=111-11-1114&person%5Bno_ssn%5D=0&person%5Bgender%5D=male", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/search?uqhp=true", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("consumer_role", 
		"Action=http://enroll-preprod.dchbx.org/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=individualUnassisted4&person%5Bgender%5D=male&person%5Blast_name%5D=Test&person%5Bmiddle_name%5D=&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D=111-11-1114&person%5Buser_id%5D=55fc2e0b69702d487fb80300", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=individualUnassisted4&person%5Bmiddle_name%5D=&person%5Blast_name%5D=Test&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D=111-11-1114&person%5Bno_ssn%5D=0&person%5Bgender%5D=male", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=post", ENDITEM, 
		"Name=authenticity_token", "Value=JMIU5llgan7LIJtMy7pkJV7UMGV/8EwWBUsRFwnArem/UNUYJUm1eQHiw6njsQUmuZVDjaLUoSRtMwzk6q11pQ==", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590276279&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH1oJCxcQXVIQPkBZDVVKSQAADEQ%3D&ap=88&be=4499&fe=6677&dc=258&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590276279,%22n%22:0,%22dl%22:4464,%22di%22:4752,%22ds%22:4752,%22de%22:5122,%22dc%22:11172,%22l%22:11172,%22le%22:11173,%22r%22:0,%22re%22:4308,%22f%22:4309,%22dn%22:4310,%22dne%22:4310,%22c%22:4310,%22ce%22:4310,%22rq%22:4340,%22rp%22:4463,%22rpe%22:4624%7D,%22navigation%22:%7B%22rc%22"
		":1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/55fc2e4d69702d48735f0400/edit", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("55fc2e4d69702d48735f0400", 
		"Action=http://enroll-preprod.dchbx.org/insured/consumer_role/55fc2e4d69702d48735f0400", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/55fc2e4d69702d48735f0400/edit", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=_method", "Value=put", ENDITEM, 
		"Name=authenticity_token", "Value=atLOwvKWiOpY0Eo8GqierUhnNZVCQAIpHJuVM3myXmHxQA88jr9X7ZISEtkyo/+uryZGfZ9k7xt044jAmt+GLQ==", ENDITEM, 
		"Name=exit_after_method", "Value=false", ENDITEM, 
		"Name=people[id]", "Value=", ENDITEM, 
		"Name=person[first_name]", "Value=individualUnassisted4", ENDITEM, 
		"Name=person[middle_name]", "Value=", ENDITEM, 
		"Name=person[last_name]", "Value=Test", ENDITEM, 
		"Name=person[name_sfx]", "Value=", ENDITEM, 
		"Name=person[dob]", "Value=1978-01-01", ENDITEM, 
		"Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", ENDITEM, 
		"Name=person[ssn]", "Value=111-11-1114", ENDITEM, 
		"Name=person[no_ssn]", "Value=0", ENDITEM, 
		"Name=person[gender]", "Value=male", ENDITEM, 
		"Name=person[us_citizen]", "Value=true", ENDITEM, 
		"Name=person[naturalized_citizen]", "Value=false", ENDITEM, 
		"Name=immigration_doc_type", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][subject]", "Value=Naturalization Certificate", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][id]", "Value=55fc2e5069702d48917f0300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][naturalization_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][subject]", "Value=Certificate of Citizenship", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][id]", "Value=55fc2e5069702d4891800300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][passport_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][2][subject]", "Value=I-327 (Reentry Permit)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][2][id]", "Value=55fc2e5069702d4891810300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][2][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][3][subject]", "Value=I-551 (Permanent Resident Card)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][3][id]", "Value=55fc2e5069702d4891820300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][3][card_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][3][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][4][subject]", "Value=I-571 (Refugee Travel Document)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][4][id]", "Value=55fc2e5069702d4891830300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][4][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][5][subject]", "Value=I-94 (Arrival/Departure Record)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][5][id]", "Value=55fc2e5069702d4891840300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][5][i94_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][6][subject]", "Value=I-94 (Arrival/Departure Record) in Unexpired Foreign Passport", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][6][id]", "Value=55fc2e5069702d4891850300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][6][i94_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][6][passport_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][7][subject]", "Value=Machine Readable Immigrant Visa (with Temporary I-551 Language)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][7][id]", "Value=55fc2e5069702d4891860300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][7][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][8][subject]", "Value=I-571 (Refugee Travel Document)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][8][id]", "Value=55fc2e5069702d4891830300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][8][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][9][subject]", "Value=Temporary I-551 Stamp (on passport or I-94)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][9][id]", "Value=55fc2e5069702d4891870300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][9][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][10][subject]", "Value=I-20 (Certificate of Eligibility for Nonimmigrant (F-1) Student Status)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][10][id]", "Value=55fc2e5069702d4891880300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][10][sevis_id]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][11][subject]", "Value=I-94 (Arrival/Departure Record) in Unexpired Foreign Passport", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][11][id]", "Value=55fc2e5069702d4891850300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][11][i94_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][11][passport_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][12][subject]", "Value=Other (With Alien Number)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][12][id]", "Value=55fc2e5069702d4891890300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][12][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][12][description]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][13][subject]", "Value=Other (With Alien Number)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][13][id]", "Value=55fc2e5069702d4891890300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][13][i94_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][13][description]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][14][subject]", "Value=I-571 (Refugee Travel Document)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][14][id]", "Value=55fc2e5069702d4891830300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][14][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][15][subject]", "Value=Unexpired Foreign Passport", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][15][id]", "Value=55fc2e5069702d48918a0300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][15][passport_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][16][subject]", "Value=DS2019 (Certificate of Eligibility for Exchange Visitor (J-1) Status)", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][16][id]", "Value=55fc2e5069702d48918b0300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][16][sevis_id]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][id]", "Value=55fc2e4d69702d48735f0400", ENDITEM, 
		"Name=form_for_consumer_role", "Value=true", ENDITEM, 
		"Name=naturalization_doc_type", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][subject]", "Value=Naturalization Certificate", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][id]", "Value=55fc2e5069702d48917f0300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][naturalization_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][0][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][subject]", "Value=Certificate of Citizenship", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][id]", "Value=55fc2e5069702d4891800300", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][passport_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][vlp_documents_attributes][1][alien_number]", "Value=", ENDITEM, 
		"Name=person[consumer_role_attributes][id]", "Value=55fc2e4d69702d48735f0400", ENDITEM, 
		"Name=person[indian_tribe_member]", "Value=0", ENDITEM, 
		"Name=person[tribal_id]", "Value=", ENDITEM, 
		"Name=person[is_incarcerated]", "Value=0", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[ethnicity][]", "Value=", ENDITEM, 
		"Name=person[is_consumer_role]", "Value=true", ENDITEM, 
		"Name=person[no_dc_address]", "Value=0", ENDITEM, 
		"Name=person[addresses_attributes][0][kind]", "Value=home", ENDITEM, 
		"Name=person[addresses_attributes][0][address_1]", "Value=609 H St", ENDITEM, 
		"Name=person[addresses_attributes][0][address_2]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][0][city]", "Value=Washington", ENDITEM, 
		"Name=person[addresses_attributes][0][state]", "Value=DC", ENDITEM, 
		"Name=person[addresses_attributes][0][zip]", "Value=20002", ENDITEM, 
		"Name=person[addresses_attributes][1][kind]", "Value=work", ENDITEM, 
		"Name=person[addresses_attributes][1][address_1]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][1][address_2]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][1][city]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][1][state]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][1][zip]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][2][kind]", "Value=mailing", ENDITEM, 
		"Name=person[addresses_attributes][2][address_1]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][2][address_2]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][2][city]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][2][state]", "Value=", ENDITEM, 
		"Name=person[addresses_attributes][2][zip]", "Value=", ENDITEM, 
		"Name=person[phones_attributes][0][kind]", "Value=home", ENDITEM, 
		"Name=person[phones_attributes][0][full_phone_number]", "Value=", ENDITEM, 
		"Name=person[phones_attributes][1][kind]", "Value=mobile", ENDITEM, 
		"Name=person[phones_attributes][1][full_phone_number]", "Value=", ENDITEM, 
		"Name=person[emails_attributes][0][kind]", "Value=home", ENDITEM, 
		"Name=person[emails_attributes][0][address]", "Value=individualunassisted4@test.com", ENDITEM, 
		"Name=person[emails_attributes][0][id]", "Value=55fc2e4d69702d4873560400", ENDITEM, 
		"Name=person[emails_attributes][1][kind]", "Value=work", ENDITEM, 
		"Name=person[emails_attributes][1][address]", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590350629&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH1oJCxcQXVIQPkBZDVVKSRcNAUBoAwZAUwRdXAgR&ap=38&be=1396&fe=10779&dc=267&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590350629,%22n%22:0,%22u%22:1360,%22ue%22:1364,%22dl%22:1360,%22di%22:1657,%22ds%22:1657,%22de%22:1676,%22dc%22:12168,%22l%22:12168,%22le%22:12170,%22r%22:1,%22re%22:1248,%22f%22:1248,%22dn%22:1248,%22dne%22:1248,%22c%22:1248,%22ce%22:1248,%22rq%22:1277,%22rp%22:1359,%22rpe%22"
		":1388%7D,%22navigation%22:%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/consumer_role/ridp_agreement", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(4);

	web_link("Continue_3", 
		"Text=Continue", 
		"Snapshot=t29.inf", 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("interactive_identity_verifications", 
		"Action=http://enroll-preprod.dchbx.org/insured/interactive_identity_verifications", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/interactive_identity_verifications/new", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=hIZY5CBXi4O1LNdCYm5bIPVJCCioFLVBxOsm4Mq2/yMfFJkaXH5UhH/uj6dKZTojEgh7wHUwWHOskzsTKdsnbw==", ENDITEM, 
		"Name=interactive_verification[session_id]", "Value=AB783917E63E4CA345448C600928D632.pidd1v-1304180857460210166972210", ENDITEM, 
		"Name=interactive_verification[transaction_id]", "Value=c5f1-52-3a57", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][question_id]", "Value=1", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][question_text]", "Value=You currently or previously resided on one of the following streets. Please select the street name from the following choices.", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][0][response_id]", "Value=1", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][0][response_text]", "Value=AUGUSTA", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][1][response_id]", "Value=2", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][1][response_text]", "Value=FALMOUTH HEIGHTS", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][2][response_id]", "Value=3", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][2][response_text]", "Value=GOETHALS", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][3][response_id]", "Value=4", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][3][response_text]", "Value=HARRISON", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][4][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][0][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][question_id]", "Value=2", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][question_text]", "Value=Please select the range that includes the year the home was built for the address that you provided.", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][0][response_id]", "Value=1", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][0][response_text]", "Value=1965 to 1974", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][1][response_id]", "Value=2", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][1][response_text]", "Value=1975 to 1984", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][2][response_id]", "Value=3", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][2][response_text]", "Value=1985 to 1994", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][3][response_id]", "Value=4", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][3][response_text]", "Value=1995 to 2004", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][4][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][1][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][question_id]", "Value=3", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][question_text]", "Value=Which of the following is the highest level of education you have completed?  If there is not a matched educational level, please select 'NONE OF THE ABOVE'.", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][0][response_id]", "Value=1", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][0][response_text]", "Value=HIGH SCHOOL DIPLOMA", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][1][response_id]", "Value=2", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][1][response_text]", "Value=SOME COLLEGE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][2][response_id]", "Value=3", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][2][response_text]", "Value=BACHELOR DEGREE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][3][response_id]", "Value=4", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][3][response_text]", "Value=GRADUATE DEGREE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][4][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][2][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][question_id]", "Value=4", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][question_text]", "Value=Please select the number of bedrooms in your home from the\r\n                                following choices. If the number of bedrooms in your home is not one\r\n                                of the choices please select 'NONE OF THE ABOVE'.", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][0][response_id]", "Value=1", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][0][response_text]", "Value=2", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][1][response_id]", "Value=2", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][1][response_text]", "Value=3", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][2][response_id]", "Value=3", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][2][response_text]", "Value=4", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][3][response_id]", "Value=4", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][3][response_text]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][4][response_id]", "Value=5", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", ENDITEM, 
		"Name=interactive_verification[questions_attributes][3][response_id]", "Value=5", ENDITEM, 
		"Name=commit", "Value=Submit", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590378353&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH1wLFQgKSVIHPlZTEVVXAgAKEUMYCw9WUxk%3D&ap=36&be=637&fe=13405&dc=141&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590378353,%22n%22:0,%22u%22:595,%22ue%22:601,%22dl%22:595,%22di%22:760,%22ds%22:773,%22de%22:791,%22dc%22:14037,%22l%22:14037,%22le%22:14044,%22r%22:1,%22re%22:483,%22f%22:484,%22dn%22:484,%22dne%22:485,%22c%22:485,%22ce%22:485,%22rq%22:513,%22rp%22:593,%22rpe%22:631%7D,"
		"%22navigation%22:%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/employee_dependents?consumer_role_id=55fc2e4d69702d48735f0400", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_link("Continue_4", 
		"Text=Continue", 
		"Snapshot=t31.inf", 
		EXTRARES, 
		"Url=check_qle_date.js?date_val=09%2F01%2F2015&qle_type=I%27m+losing+other+health+insuranceI%27m+losing+other+health+insurance&qle_id=55f9048869702d595c260000", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("record_sep", 
		"Action=http://enroll-preprod.dchbx.org/insured/families/record_sep", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/families/find_sep", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=6J8CnEVGdFHbE0YDdSEawleKesfOIlTQ5w6Cl1IhKWJzDcNiOW+rVhHRHuZdKnvBsMsJLxMGueKPdp9ksUzxLg==", ENDITEM, 
		"Name=qle_date", "Value=09/01/2015", ENDITEM, 
		"Name=change_plan", "Value=I'm losing other health insurance", ENDITEM, 
		"Name=qle_id", "Value=55f9048869702d595c260000", ENDITEM, 
		"Name=employee_role_id", "Value=None", ENDITEM, 
		"Name=effective_on_kind", "Value=first_of_month", ENDITEM, 
		"Name=commit", "Value=Continue", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("group_selections", 
		"Action=http://enroll-preprod.dchbx.org/insured/group_selections", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/group_selections/new?consumer_role_id=55fc2e4d69702d48735f0400&enrollment_kind=sep&person_id=55fc2e4d69702d4873530400", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=mCk9Qx529ct3LQeje+n+JcDK3ba5e/sD8hJpoR2YvOsDu/y9Yl8qzL3vX0ZT4p8mJ4uuXmRfFjGaanRS/vVkpw==", ENDITEM, 
		"Name=person_id", "Value=55fc2e4d69702d4873530400", ENDITEM, 
		"Name=employee_role_id", "Value=", ENDITEM, 
		"Name=coverage_household_id", "Value=", ENDITEM, 
		"Name=enrollment_kind", "Value=sep", ENDITEM, 
		"Name=family_member_ids[0]", "Value=55fc2e4d69702d4873570400", ENDITEM, 
		"Name=coverage_kind", "Value=health", ENDITEM, 
		"Name=market_kind", "Value=individual", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590419879&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH0kKBAo6Q18NEUJfD1dKSRYMCkc%3D&ap=151&be=3069&fe=17857&dc=1200&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590419879,%22n%22:0,%22dl%22:3056,%22di%22:4267,%22ds%22:4267,%22de%22:4338,%22dc%22:20925,%22l%22:20925,%22le%22:20936,%22r%22:0,%22re%22:2781,%22f%22:2782,%22dn%22:2782,%22dne%22:2782,%22c%22:2782,%22ce%22:2782,%22rq%22:2853,%22rp%22:3045,%22rpe%22:3081%7D,%22navigation%22"
		":%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM, 
		"Url=plan_shoppings/55fc2edd69702d48a7c20200/plans?change_plan=&amp;coverage_kind=health&amp;enrollment_kind=sep&amp;market_kind=individual", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM, 
		"Url=../assets/logo/carrier/carefirst-dadfc5ebd8daceb4a814547e493b2de5.jpg", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM, 
		"Url=../assets/logo/carrier/kaiser-ed237f9064fd82d21a51b73ca5fd07a2.jpg", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM, 
		"Url=../assets/logo/carrier/aetna-f66e80a27c63101284b712ef5337b1eb.jpg", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200?coverage_kind=health&enrollment_kind=sep&market_kind=individual", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(12);

	web_submit_data("thankyou", 
		"Action=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id=5453a543791e4bcd3300002f", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200?coverage_kind=health&enrollment_kind=sep&market_kind=individual", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=post", ENDITEM, 
		"Name=authenticity_token", "Value=aPWfw8R7npIZFnocJdkp7p9lIbgysgKde3uTb1htxxzzZ149uFJBldPUIvkN0kjteCRSUO+W768TA46cuwAfUA==", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590454845&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH0kKBAo6Q18NEUJfD1dKSREMBF5cGw5H&ap=82&be=189&fe=16652&dc=124&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590454845,%22n%22:0,%22u%22:175,%22ue%22:177,%22dl%22:175,%22di%22:293,%22ds%22:314,%22de%22:329,%22dc%22:16841,%22l%22:16841,%22le%22:16842,%22f%22:1,%22dn%22:12,%22dne%22:13,%22c%22:13,%22ce%22:13,%22rq%22:46,%22rp%22:171,%22rpe%22:192%7D,%22navigation%22:%7B%7D%7D&jsonp="
		"NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id=5453a543791e4bcd3300002f", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("checkout", 
		"Action=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200/checkout?coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id=5453a543791e4bcd3300002f", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id=5453a543791e4bcd3300002f", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=post", ENDITEM, 
		"Name=authenticity_token", "Value=sAqElrPiBNqRbYiqwGNyV5YNCNJ+xYkMyISEin/aJfArmEVoz8vb3Vuv0E/oaBNUcUx7OqPhZD6g/Jl5nLf9vA==", ENDITEM, 
		EXTRARES, 
		"Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442590487416&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH0kKBAo6Q18NEUJfD1dKSRcBBlVeEhU%3D&ap=48&be=310&fe=7706&dc=109&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442590487416,%22n%22:0,%22u%22:277,%22ue%22:281,%22dl%22:277,%22di%22:419,%22ds%22:421,%22de%22:437,%22dc%22:8017,%22l%22:8017,%22le%22:8023,%22r%22:1,%22re%22:160,%22f%22:160,%22dn%22:161,%22dne%22:161,%22c%22:161,%22ce%22:161,%22rq%22:190,%22rp%22:276,%22rpe%22:302%7D,%22navigation%22"
		":%7B%22rc%22:1%7D%7D&jsonp=NREUM.setToken", "Referer=http://enroll-preprod.dchbx.org/insured/plan_shoppings/55fc2edd69702d48a7c20200/receipt?enrollment_kind=sep", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(5);

	web_link("My Insured Portal", 
		"Text=My Insured Portal", 
		"Snapshot=t36.inf", 
		LAST);

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_link("I'm an Insured", 
		"Text=I'm an Insured", 
		"Snapshot=t37.inf", 
		LAST);

	return 0;
}