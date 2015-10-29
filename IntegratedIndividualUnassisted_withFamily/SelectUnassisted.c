SelectUnassisted()
{
	
	/*Correlation comment - Do not change!  Original value='VpD7EZi+SkT046i1rmTo+ZIQdG4AIkeePT+6TFOylF/rEDVly5wLIK80/FSt5T1qEahT0fvI66Vvo7a8p3BWaA==' Name ='authenticity_token_2' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_2",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/sign_up*",
		LAST);
	
	web_reg_find("Text/IC=Create account",
	             LAST);

	lr_start_transaction("INTEG_UNASSISTED_0005_Select_Unassisted");

	web_url("unassisted",
	        "URL={IntegratedURL}/create-account/unassisted",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t5.inf",
	        "Mode=HTML",
	        EXTRARES,
	        "Url=http://enroll-preprod.dchbx.org/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://js-agent.newrelic.com/nr-686.min.js", "Referer=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM,
	        "Url=http://bam.nr-data.net/1/7b24c5470b?a=8419501&pl=1443109422922&v=686.b365e66&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=11&be=3583&fe=8319&dc=1206&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1443109422922,%22n%22:0,%22dl%22:3556,%22di%22:4763,%22ds%22:4787,%22de%22:4817,%22dc%22:11900,%22l%22:11900,%22le%22:11901,%22f%22:3468,%22dn%22:3468,%22dne%22:3468,%22c%22:3468,%22ce%22:3468,%22rq%22:3496,%22rp%22:3556,%22rpe%22:3579%7D,%22navigation%22:%7B%7D%7D&jsonp=NREUM.setToken", "Refe"
	        "rer=http://enroll-preprod.dchbx.org/users/sign_up", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/fontawesome-webfont-a21d40494ad61b33a05df3c78a7a276c.woff2?v=4.4.0", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/check_radio_sheet-9de6b3ff89e891cb43ecc05a8dc84515.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-66b22589d0fc959b460476ea579ea2c5.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-cfa0baa2d39d4ddef2fd98d7f6685c0f.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-icons_222222_256x240-cbcd12c8048035bf8dae817212e922da.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-cd0eb7b399bba6ce203b35e4b98bd965.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-78b60ab54d71e2185242c1c59123ddec.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-65c6a21b08a8c1151b2bbfbd64269d49.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/glyphicons-halflings-regular-c575a06b0f5e17a30eccb36f64777cc3.woff2", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/avenirltstd-black-30537c01d25f7c6edc1d149513dd3116.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/bronze-circle-01104c3991c066061e2562e16b743243.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/silver-circle-215097bc30260c2d100146c2a2cf5917.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/gold-circle-9c65653709ef747c464dc5ef45320613.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/platinum-circle-413483a54b3f43af9fa1f2e6beedecb8.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", ENDITEM,
	        LAST);

	lr_end_transaction("INTEG_UNASSISTED_0005_Select_Unassisted", LR_AUTO);

	
	return 0;
}
