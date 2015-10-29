ConsumerRoleSearch()
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

	web_reg_find("Text=Create account",
	             LAST);

	lr_start_transaction("INTEG_UNASSISTED_0009_Consumer_Role_Search");

	web_url("search",
	        "URL={enrollPreprodURL}/insured/consumer_role/search?uqhp=true",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={CheckbookURL}/{Checkbook_specifics}/plan.cfm?data="
	        "eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJzb3J0IjoyLCJoZWFsdGhTdGF0dXMiOiIiLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwicW00IjoiIiwicW0xMiI6IiIsImNhbmNlbGVkSW5zdXJhbmNlIjoiIiwibWV0YWwiOiIiLCJxbTExIjoiIiwicW01IjoiIiwicW0xNCI6IiIsInFtNiI6IiIsInFtMT"
	        "MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19",
	        "Snapshot=t68.inf",
	        "Mode=HTML",
	        EXTRARES,
	        "Url=/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=http://js-agent.newrelic.com/nr-741.min.js", "Referer={enrollPreprodURL}/users/sign_up", ENDITEM,
	        "Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442587829472&v=741.f816aee&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=9&be=1351&fe=6247&dc=807&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442587829472,%22n%22:0,%22dl%22:1341,%22di%22:2147,%22ds%22:2165,%22de%22:2188,%22dc%22:7604,%22l%22:7604,%22le%22:7606,%22r%22:0,%22re%22:1269,%22f%22:1269,%22dn%22:1270,%22dne%22:1270,%22c%22:1270,%22ce%22:1270,%22rq%22:1299,%22rp%22:1341,%22rpe%22:1356%7D,%22navigation%22:%7B%22rc%22"
	        ":1%7D%7D&jsonp=NREUM.setToken", "Referer={enrollPreprodURL}/users/sign_up", ENDITEM,
	        "Url=/assets/fontawesome-webfont-a21d40494ad61b33a05df3c78a7a276c.woff2?v=4.4.0", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/icons/check_radio_sheet-9de6b3ff89e891cb43ecc05a8dc84515.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-66b22589d0fc959b460476ea579ea2c5.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-cfa0baa2d39d4ddef2fd98d7f6685c0f.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/jquery-ui/ui-icons_222222_256x240-cbcd12c8048035bf8dae817212e922da.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-78b60ab54d71e2185242c1c59123ddec.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-cd0eb7b399bba6ce203b35e4b98bd965.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-65c6a21b08a8c1151b2bbfbd64269d49.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/glyphicons-halflings-regular-c575a06b0f5e17a30eccb36f64777cc3.woff2", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/avenirltstd-black-30537c01d25f7c6edc1d149513dd3116.woff", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/icons/bronze-circle-01104c3991c066061e2562e16b743243.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/icons/silver-circle-215097bc30260c2d100146c2a2cf5917.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/icons/gold-circle-9c65653709ef747c464dc5ef45320613.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        "Url=/assets/icons/platinum-circle-413483a54b3f43af9fa1f2e6beedecb8.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", ENDITEM,
	        LAST);

	lr_end_transaction("INTEG_UNASSISTED_0009_Consumer_Role_Search", LR_AUTO);

	return 0;
}
