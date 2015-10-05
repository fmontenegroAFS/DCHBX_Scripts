Action()
{

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_url("enroll_uat.dchbx.org", 
		"URL=http://{host_enroll_uat_dchbx_org}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/AvenirLTStd-Light-af804d2ea26c0ab34f6d6f1c148e90b2.woff", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/icons/check_radio_sheet-acb32d0354c34018182eac641553979c.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-d20cf782ea2d212335fa15f2ecb5e412.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-fcf0ee4ce3fcc9eb7d15fc0c2f96b827.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-icons_222222_256x240-c9d45cbe79fa6dab691c8b7438a5c815.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-79e6a336ebef984293eef201f783ce65.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-b78c474f171fc7320cb93907b8d44b77.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-5219036e0b535359bab02dc6d9a329c3.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		"Url=/assets/jquery-ui/ui-icons_454545_256x240-98f30197c1a1a6c536387f6581bc50d6.png", "Referer=http://{host_enroll_uat_dchbx_org}/assets/application-f46679a55900235b472472ac8659a877.css", ENDITEM, 
		LAST);

	lr_start_transaction("Click on Employee Tab");

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_link("Employee Portal", 
		"Text=Employee Portal", 
		"Snapshot=t2.inf", 
		LAST);

	lr_end_transaction("Click on Employee Tab",LR_AUTO);

	lr_start_transaction("Click Emp Create Account ");

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(24);

	web_link("Create account", 
		"Text=Create account", 
		"Snapshot=t3.inf", 
		LAST);

	lr_end_transaction("Click Emp Create Account ",LR_AUTO);

	lr_start_transaction("Emp Create Account Submit");

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	web_submit_data("users", 
		"Action=http://{host_enroll_uat_dchbx_org}/users", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{host_enroll_uat_dchbx_org}/users/sign_up", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=?", ENDITEM, 
		"Name=authenticity_token", "Value=YIoSW1xVv+XrSHY16uHVDEC4Q+jlB7PBIoHlxz03QQIBYLp3ByBPbq7RWU4qZsNyWH3ohPnCa06EI1OAGxicDg==", ENDITEM, 
		"Name=user[referer]", "Value=http://enroll_uat.dchbx.org/users/sign_in", ENDITEM, 
		"Name=user[email]", "Value=testemp1@test.com", ENDITEM, 
		"Name=user[password]", "Value=Abcd!234", ENDITEM, 
		"Name=user[password_confirmation]", "Value=Abcd!234", ENDITEM, 
		"Name=user[invitation_id]", "Value=", ENDITEM, 
		"Name=commit", "Value=Create account", ENDITEM, 
		LAST);

	lr_end_transaction("Emp Create Account Submit",LR_AUTO);

	lr_start_transaction("BeginCoverage Continue");

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(37);

	web_link("Continue", 
		"Text=Continue", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_cookie("AWSELB=6D2D4FC502CCAC03723C58EA8D775E64A466F6F60FCC4C5E0357B3719D86167B8DEBFACEA6818ABE584A2080F4CB9E59DC38536649C73C2879BEDFE23901AC4842A37FB0E9; DOMAIN=enroll_uat.dchbx.org");

	lr_end_transaction("BeginCoverage Continue",LR_AUTO);

	lr_start_transaction("Emp Personal Info");

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link", 
		LAST);

	lr_think_time(18);

	web_image("Logo", 
		"Alt=Logo", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}