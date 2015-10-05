ExistingEmpLogin()
{
/*
	web_url("{enrollAppLandingPage}",
		"URL=http://{enrollAppLandingPage}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='EAwuBFT43sVRZgXcZ2+0HSU3kaJ5/leCM7UVa2rxQ7vhyXiA9F3y8mCaYtKLMvfd52uPZgBSb8cLHxAyw+jypg==' Name ='authenticity_token_5' Type ='Manual'*/
//	web_reg_save_param_regexp("ParamName=authenticity_token_5",	"RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2",	SEARCH_FILTERS,	"Scope=Body",	"IgnoreRedirections=Yes","RequestUrl=*/sign_in*",LAST);

/*	web_url("Employee Portal", 
		"URL=http://{enrollAppLandingPage}/consumer/employee/welcome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);
*/
	lr_start_transaction("EMPLYE_0005_ExistingAccountLogin");
	
	web_submit_data("sign_in",
		"Action=http://{enrollAppLandingPage}/users/sign_in",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/users/sign_in",
		"Snapshot=t29.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=utf8", "Value=?", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_5}", ENDITEM,
		"Name=user[email]", "Value={EmpWorkEmail}", ENDITEM,
		"Name=user[password]", "Value=Abcd!234", ENDITEM,
		"Name=user[remember_me]", "Value=0", ENDITEM,
		"Name=commit", "Value=Sign in", ENDITEM,
		LAST);
	lr_end_transaction("EMPLYE_0005_ExistingAccountLogin", LR_AUTO);
	
	lr_think_time(10);
	
	return 0;
}
