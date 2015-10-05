Logout()
{
	
	lr_start_transaction("EMPLYE_0100_Logout");
	
	web_submit_data("sign_out",
		"Action=http://{enrollAppLandingPage}/users/sign_out",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&plan_id={plan_id}",
		"Snapshot=t39.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_method", "Value=delete", ENDITEM,
		"Name=authenticity_token", "Value={authenticity_token_4}", ENDITEM,
		LAST);
	
	lr_end_transaction("EMPLYE_0100_Logout",LR_AUTO);
	
	return 0;
}
