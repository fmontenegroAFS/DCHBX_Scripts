vuser_init()
{
	//HTMLEncoder("What color was your first pet&#63;");
	// lr_save_string(HTMLEncoder("What color was your first pet&#63;"),"SecQ_1");
	//lr_output_message("%s", "{SecQ_1}");
			
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_set_max_html_param_len("6270");

	srand(atoi(lr_eval_string("{MillisSeed}")));
	
	return 0;
}
