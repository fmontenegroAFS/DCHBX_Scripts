Curam_StartApp_Misc_URLS()
{
	
	lr_start_transaction("0010_Curam_StartApp_Misc_URLS");
	
		addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_1_{dp_UserID};PC=0010_ExternalApplication.html");
		web_custom_request("0010_ExternalApplication.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/curam/app/templates/ExternalApplication.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_2_{dp_UserID};PC=Menu.html");
	web_custom_request("Menu.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/Menu.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_3_{dp_UserID};PC=_MenuColumn.html");
	web_custom_request("_MenuColumn.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/_MenuColumn.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_4_{dp_UserID};PC=HoverCard.html");
	web_custom_request("HoverCard.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/HoverCard.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_5_{dp_UserID};PC=MenuDialog.html");
	web_custom_request("MenuDialog.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/MenuDialog.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_6_{dp_UserID};PC=MenuHeading.html");
	web_custom_request("MenuHeading.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/MenuHeading.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_7_{dp_UserID};PC=HoverHelpTooltip.html");
	web_custom_request("HoverHelpTooltip.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/HoverHelpTooltip.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_8_{dp_UserID};PC=InlineDropDown.html");
	web_custom_request("InlineDropDown.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/InlineDropDown.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_9_{dp_UserID};PC=Rotator.html");
	web_custom_request("Rotator.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/Rotator.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_10_{dp_UserID};PC=MenuItem.html");
	web_custom_request("MenuItem.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/MenuItem.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_11_{dp_UserID};PC=TitlePane.html");
	web_custom_request("TitlePane.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/TitlePane.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_12_{dp_UserID};PC=DropDown.html");
	web_custom_request("DropDown.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/DropDown.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_13_{dp_UserID};PC=ContrastModeChooser.html");
	web_custom_request("ContrastModeChooser.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/ContrastModeChooser.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_14_{dp_UserID};PC=PathResolver");
	web_submit_data("PathResolver", 
		"Action=https://{p_Webapp_URL}/CitizenPortal/servlet/PathResolver?r=j&p=/config/tablayout/extapp[CITWSAPP]", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dojo.preventCache", "Value=1443210486406", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_15_{dp_UserID};PC=CitizenWorkspace_userHomeResolverPage.do");
	web_custom_request("CitizenWorkspace_userHomeResolverPage.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/CitizenWorkspace_userHomeResolverPage.do?o3ctx={o3ctx}&testParam1=1&testParam2=2&dojo.preventCache=1443210486411",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_16_{dp_UserID};PC=CitizenWorkspace_userHomeResolverPage.do_2");
	web_custom_request("CitizenWorkspace_userHomeResolverPage.do_2",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/CitizenWorkspace_userHomeResolverPage.do?o3ctx={o3ctx}&dojo.preventCache=1443210487060",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_17_{dp_UserID};PC=application-banner-fragment.jspx");
	web_custom_request("application-banner-fragment.jspx", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/application-banner-fragment.jspx?dojo.preventCache=1443210487043", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_18_{dp_UserID};PC=UIMIFrameWrapperPage.do");
	web_custom_request("UIMIFrameWrapperPage.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/UIMIFrameWrapperPage.do?uimPageID=StandardUser_home&o3ctx={o3ctx}&pageParams=&dojo.preventCache=1443210488053",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		EXTRARES,
		"URL=../servlet/PathResolver?r=i&p=/config/tablayout/image[ext-banner-user-arrow.png]", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/application-banner.css", ENDITEM,
		"URL=../CDEJ/jscript/curam/core-uim.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", ENDITEM,
		"URL=../CDEJ/jscript/dojotk/dojo/nls/cdej_en-us.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", ENDITEM,
		"URL=../CDEJ/jscript/curam/application/nls/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", ENDITEM,
		"URL=../CDEJ/jscript/curam/application/nls/en/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", ENDITEM,
		"URL=../CDEJ/jscript/curam/application/nls/en-us/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", ENDITEM,
		LAST);

	lr_think_time(10);

//	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_19_{dp_UserID};PC=UIMIFrameWrapperPage.do_2");
//	web_custom_request("UIMIFrameWrapperPage.do_2",
//		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/UIMIFrameWrapperPage.do?uimPageID=LogoutWrapper&o3ctx={o3ctx}&dojo.preventCache=1443210495845",
//		"Method=GET",
//		"Resource=0",
//		"RecContentType=text/html",
//		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
//		"Snapshot=t29.inf",
//		"Mode=HTML",
//		"EncType=application/x-www-form-urlencoded",
//		LAST);
	
	lr_end_transaction("0010_Curam_StartApp_Misc_URLS", LR_AUTO);
	
	return 0;
}
