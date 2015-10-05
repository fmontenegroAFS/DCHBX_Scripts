Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("10.83.84.161", 
		"URL=https://{host_10_83_84_161}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://{host_download_cdn_mozilla_net}/pub/firefox/releases/39.0/update/win32/en-US/firefox-39.0.complete.mar", "Referer=", ENDITEM, 
		"Url=/assets/AvenirLTStd-Light-af804d2ea26c0ab34f6d6f1c148e90b2.woff", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-d20cf782ea2d212335fa15f2ecb5e412.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-fcf0ee4ce3fcc9eb7d15fc0c2f96b827.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-icons_222222_256x240-c9d45cbe79fa6dab691c8b7438a5c815.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-79e6a336ebef984293eef201f783ce65.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-5219036e0b535359bab02dc6d9a329c3.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-b78c474f171fc7320cb93907b8d44b77.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_65_ffffff_1x400-bddba5b8ad3fb6e9bb6e44d64bf147af.png", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/glyphicons-halflings-regular-d6e0ff593059a0d876be4db9d38ed499.woff", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		"Url=/assets/fontawesome-webfont-910e0931fc81458bc886f7722d35e127.woff?v=4.3.0", "Referer=https://{host_10_83_84_161}/assets/application-1d6fbb9c01f0a4dc6b6bda4791921934.css", ENDITEM, 
		LAST);

	lr_start_transaction("Click on Employer Portal");

	web_url("Employer Portal", 
		"URL=https://{host_10_83_84_161}/employers/employer_profiles/new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click on Employer Portal",LR_AUTO);

	lr_think_time(11);

	lr_start_transaction("Click on Create Account");

	web_url("Create account", 
		"URL=https://{host_10_83_84_161}/users/sign_up", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/users/sign_in", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click on Create Account",LR_AUTO);

	lr_start_transaction("Create Account");

	web_submit_data("users", 
		"Action=https://{host_10_83_84_161}/users", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/users/sign_up", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=/P95Yzs+gqpD9H1/1ck4rNJhXnPk2LLEt/pxHx09KlYPn6QDtLjVds25saf2czOEmFfV2nDBdS7CTcR86ouNWQ==", ENDITEM, 
		"Name=user[referer]", "Value=https://10.83.84.161/users/sign_in", ENDITEM, 
		"Name=user[email]", "Value=PerfTest00004@test.com", ENDITEM, 
		"Name=user[password]", "Value=P@ssw0rd1", ENDITEM, 
		"Name=user[password_confirmation]", "Value=P@ssw0rd1", ENDITEM, 
		"Name=user[invitation_id]", "Value=", ENDITEM, 
		"Name=commit", "Value=Create account", ENDITEM, 
		EXTRARES, 
		"Url=http://{host_download_cdn_mozilla_net}/pub/firefox/releases/39.0/update/win32/en-US/firefox-39.0.complete.mar", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Create Account",LR_AUTO);

	lr_start_transaction("1_transaction");

	web_submit_data("employer_profiles", 
		"Action=https://{host_10_83_84_161}/employers/employer_profiles", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/employers", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=FNzQ6QFJzaSj6/C+E5jus4dT9UrkJFBJDEbFa9WD2wjnvA2Jjs+aeC2mPGYwIuWbzWV+43A9l6N58XAIIjV8Bw==", ENDITEM, 
		"Name=organization[first_name]", "Value=Perf", ENDITEM, 
		"Name=organization[last_name]", "Value=Test", ENDITEM, 
		"Name=organization[dob]", "Value=1978-07-15", ENDITEM, 
		"Name=jq_datepicker_ignore_organization[dob]", "Value=07/15/1978", ENDITEM, 
		"Name=organization[legal_name]", "Value=Perftest00004", ENDITEM, 
		"Name=organization[dba]", "Value=PerfTest00004", ENDITEM, 
		"Name=organization[fein]", "Value=090900004", ENDITEM, 
		"Name=organization[entity_kind]", "Value=tax_exempt_organization", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][kind]", "Value=primary", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][address_1]", "Value=609 H street NE", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][address_2]", "Value=", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][city]", "Value=washington", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][state]", "Value=DC", ENDITEM, 
		"Name=organization[office_locations_attributes][0][address_attributes][zip]", "Value=20002", ENDITEM, 
		"Name=organization[office_locations_attributes][0][phone_attributes][kind]", "Value=phone main", ENDITEM, 
		"Name=organization[office_locations_attributes][0][phone_attributes][area_code]", "Value=718", ENDITEM, 
		"Name=organization[office_locations_attributes][0][phone_attributes][number]", "Value=121-2111", ENDITEM, 
		"Name=organization[office_locations_attributes][0][phone_attributes][extension]", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("1_transaction",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("Click on Benefits");

	web_url("Benefits Benefits", 
		"URL=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400/show_profile?tab=benefits", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click on Benefits",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("Click on Add Plan");

	web_url("new", 
		"URL=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400/plan_years/new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://{host_download_cdn_mozilla_net}/pub/firefox/releases/39.0/update/win32/en-US/firefox-39.0.complete.mar", "Referer=", ENDITEM, 
		"Url=recommend_dates?start_on=2015-09-01", ENDITEM, 
		"Url=search_reference_plan?reference_plan_id=5453a543791e4bcd33000007&location_id=benefit-group-55ba29ed4842583b6cfa0400&_=1438263763124", ENDITEM, 
		"Url=calc_employer_contributions?start_on=2015-09-01&reference_plan_id=5453a543791e4bcd33000007&location_id=benefit-group-55ba29ed4842583b6cfa0400&relation_benefits%5B0%5D%5Brelationship%5D=employee&relation_benefits%5B0%5D%5Bpremium_pct%5D=0&relation_benefits%5B0%5D%5Boffered%5D=true&relation_benefits%5B1%5D%5Brelationship%5D=spouse&relation_benefits%5B1%5D%5Bpremium_pct%5D=0&relation_benefits%5B1%5D%5Boffered%5D=true&relation_benefits%5B2%5D%5Brelationship%5D=domestic_partner&"
		"relation_benefits%5B2%5D%5Bpremium_pct%5D=0&relation_benefits%5B2%5D%5Boffered%5D=true&relation_benefits%5B3%5D%5Brelationship%5D=child_under_26&relation_benefits%5B3%5D%5Bpremium_pct%5D=0&relation_benefits%5B3%5D%5Boffered%5D=true&relation_benefits%5B4%5D%5Brelationship%5D=child_26_and_over&relation_benefits%5B4%5D%5Bpremium_pct%5D=0&relation_benefits%5B4%5D%5Boffered%5D=false&_=1438263763125", ENDITEM, 
		"Url=calc_employer_contributions?start_on=2015-09-01&reference_plan_id=5453a543791e4bcd33000007&location_id=benefit-group-55ba29ed4842583b6cfa0400&relation_benefits%5B0%5D%5Brelationship%5D=employee&relation_benefits%5B0%5D%5Bpremium_pct%5D=100&relation_benefits%5B0%5D%5Boffered%5D=true&relation_benefits%5B1%5D%5Brelationship%5D=spouse&relation_benefits%5B1%5D%5Bpremium_pct%5D=0&relation_benefits%5B1%5D%5Boffered%5D=true&relation_benefits%5B2%5D%5Brelationship%5D=domestic_partner&"
		"relation_benefits%5B2%5D%5Bpremium_pct%5D=0&relation_benefits%5B2%5D%5Boffered%5D=true&relation_benefits%5B3%5D%5Brelationship%5D=child_under_26&relation_benefits%5B3%5D%5Bpremium_pct%5D=0&relation_benefits%5B3%5D%5Boffered%5D=true&relation_benefits%5B4%5D%5Brelationship%5D=child_26_and_over&relation_benefits%5B4%5D%5Bpremium_pct%5D=0&relation_benefits%5B4%5D%5Boffered%5D=false&_=1438263763126", ENDITEM, 
		"Url=calc_employer_contributions?start_on=2015-09-01&reference_plan_id=5453a543791e4bcd33000007&location_id=benefit-group-55ba29ed4842583b6cfa0400&relation_benefits%5B0%5D%5Brelationship%5D=employee&relation_benefits%5B0%5D%5Bpremium_pct%5D=100&relation_benefits%5B0%5D%5Boffered%5D=true&relation_benefits%5B1%5D%5Brelationship%5D=spouse&relation_benefits%5B1%5D%5Bpremium_pct%5D=100&relation_benefits%5B1%5D%5Boffered%5D=true&relation_benefits%5B2%5D%5Brelationship%5D=domestic_partner&"
		"relation_benefits%5B2%5D%5Bpremium_pct%5D=0&relation_benefits%5B2%5D%5Boffered%5D=true&relation_benefits%5B3%5D%5Brelationship%5D=child_under_26&relation_benefits%5B3%5D%5Bpremium_pct%5D=0&relation_benefits%5B3%5D%5Boffered%5D=true&relation_benefits%5B4%5D%5Brelationship%5D=child_26_and_over&relation_benefits%5B4%5D%5Bpremium_pct%5D=0&relation_benefits%5B4%5D%5Boffered%5D=false&_=1438263763127", ENDITEM, 
		"Url=calc_employer_contributions?start_on=2015-09-01&reference_plan_id=5453a543791e4bcd33000007&location_id=benefit-group-55ba29ed4842583b6cfa0400&relation_benefits%5B0%5D%5Brelationship%5D=employee&relation_benefits%5B0%5D%5Bpremium_pct%5D=100&relation_benefits%5B0%5D%5Boffered%5D=true&relation_benefits%5B1%5D%5Brelationship%5D=spouse&relation_benefits%5B1%5D%5Bpremium_pct%5D=100&relation_benefits%5B1%5D%5Boffered%5D=true&relation_benefits%5B2%5D%5Brelationship%5D=domestic_partner&"
		"relation_benefits%5B2%5D%5Bpremium_pct%5D=100&relation_benefits%5B2%5D%5Boffered%5D=true&relation_benefits%5B3%5D%5Brelationship%5D=child_under_26&relation_benefits%5B3%5D%5Bpremium_pct%5D=0&relation_benefits%5B3%5D%5Boffered%5D=true&relation_benefits%5B4%5D%5Brelationship%5D=child_26_and_over&relation_benefits%5B4%5D%5Bpremium_pct%5D=0&relation_benefits%5B4%5D%5Boffered%5D=false&_=1438263763128", ENDITEM, 
		"Url=calc_employer_contributions?start_on=2015-09-01&reference_plan_id=5453a543791e4bcd33000007&location_id=benefit-group-55ba29ed4842583b6cfa0400&relation_benefits%5B0%5D%5Brelationship%5D=employee&relation_benefits%5B0%5D%5Bpremium_pct%5D=100&relation_benefits%5B0%5D%5Boffered%5D=true&relation_benefits%5B1%5D%5Brelationship%5D=spouse&relation_benefits%5B1%5D%5Bpremium_pct%5D=100&relation_benefits%5B1%5D%5Boffered%5D=true&relation_benefits%5B2%5D%5Brelationship%5D=domestic_partner&"
		"relation_benefits%5B2%5D%5Bpremium_pct%5D=100&relation_benefits%5B2%5D%5Boffered%5D=true&relation_benefits%5B3%5D%5Brelationship%5D=child_under_26&relation_benefits%5B3%5D%5Bpremium_pct%5D=100&relation_benefits%5B3%5D%5Boffered%5D=true&relation_benefits%5B4%5D%5Brelationship%5D=child_26_and_over&relation_benefits%5B4%5D%5Bpremium_pct%5D=0&relation_benefits%5B4%5D%5Boffered%5D=false&_=1438263763129", ENDITEM, 
		LAST);

	lr_end_transaction("Click on Add Plan",LR_AUTO);

	lr_start_transaction("Add Plan Year");

	web_submit_data("plan_years", 
		"Action=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400/plan_years", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400/plan_years/new", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=ofoa4VyUNi/KIR3H3UF+LBsFe84RBR7gnpGl54O2uWFSmseB0xJh80Rs0R/++3UEUTPwZ4Uc2QrrJhCEdAAebg==", ENDITEM, 
		"Name=plan_year[start_on]", "Value=2015-09-01", ENDITEM, 
		"Name=plan_year[end_on]", "Value=2016-08-31", ENDITEM, 
		"Name=plan_year[open_enrollment_start_on]", "Value=2015-07-23", ENDITEM, 
		"Name=jq_datepicker_ignore_plan_year[open_enrollment_start_on]", "Value=07/23/2015", ENDITEM, 
		"Name=plan_year[open_enrollment_end_on]", "Value=2015-08-10", ENDITEM, 
		"Name=jq_datepicker_ignore_plan_year[open_enrollment_end_on]", "Value=08/10/2015", ENDITEM, 
		"Name=plan_year[fte_count]", "Value=10", ENDITEM, 
		"Name=plan_year[pte_count]", "Value=0", ENDITEM, 
		"Name=plan_year[msp_count]", "Value=0", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][title]", "Value=2015 Employer Benefits", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][effective_on_offset]", "Value=0", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][plan_option_kind]", "Value=single_plan", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][carrier_for_elected_plan]", "Value=53e67210eb899a4603000007", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][metal_level_for_elected_plan]", "Value=", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][reference_plan_id]", "Value=5453a543791e4bcd33000007", ENDITEM, 
		"Name=reference_plan", "Value=5453a543791e4bcd33000007", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=reference_plan", "Value=", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][0][relationship]", "Value=employee", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][0][premium_pct]", "Value=100", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][relationship]", "Value=spouse", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][premium_pct]", "Value=100", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][offered]", "Value=false", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][offered]", "Value=true", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][relationship]", "Value=domestic_partner", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][premium_pct]", "Value=100", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][offered]", "Value=false", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][offered]", "Value=true", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][relationship]", "Value=child_under_26", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][premium_pct]", "Value=100", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][offered]", "Value=false", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][offered]", "Value=true", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][relationship]", "Value=child_26_and_over", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][premium_pct]", "Value=0", ENDITEM, 
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][offered]", "Value=false", ENDITEM, 
		LAST);

	lr_end_transaction("Add Plan Year",LR_AUTO);

	lr_start_transaction("Logout");

	web_submit_data("sign_out", 
		"Action=https://{host_10_83_84_161}/users/sign_out", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=delete", ENDITEM, 
		"Name=authenticity_token", "Value=uJKq/evPiiL+OSPwzKCCfLxPbn+XTE4a2a1drnfcijlL8nedZEnd/nB07yjvGolU9nnl1gNVifCsGujNgGotNg==", ENDITEM, 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	lr_start_transaction("Click on Employer Portal");

	web_url("Employer Portal_2", 
		"URL=https://{host_10_83_84_161}/employers/employer_profiles/new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://{host_download_cdn_mozilla_net}/pub/firefox/releases/39.0/update/win32/en-US/firefox-39.0.complete.mar", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Click on Employer Portal",LR_AUTO);

	web_submit_data("sign_in", 
		"Action=https://{host_10_83_84_161}/users/sign_in", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{host_10_83_84_161}/users/sign_in", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=zBaxPdHP5LFqZW1HDrCCBTo52Gch3x56HssLy6T8csq+LmFvRRYHbqw3fR81auygX8+uXqlmqj1wuq3mgJARLQ==", ENDITEM, 
		"Name=user[email]", "Value=PerfTest00004@test.com", ENDITEM, 
		"Name=user[password]", "Value=P@ssw0rd1", ENDITEM, 
		"Name=user[remember_me]", "Value=0", ENDITEM, 
		"Name=commit", "Value=Sign in", ENDITEM, 
		LAST);

	lr_think_time(12);

	lr_start_transaction("Click on Benefits");

	web_url("Benefits Benefits_2", 
		"URL=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400/show_profile?tab=benefits", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=https://{host_10_83_84_161}/employers/employer_profiles/55ba29d24842583b6fe80400", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click on Benefits",LR_AUTO);

	lr_start_transaction("Click on Benefit Group");

	lr_end_transaction("Click on Benefit Group",LR_AUTO);

	return 0;
}