AddFirstFamilyMember()
{
	web_link("Add Member",
	         "Text=Add Member",
	         "Ordinal=1",
//	         EXTRARES,
//	         "Url=/assets/member-close-9e17602db594e7e8ec2545604a86cac5.png", "Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}", ENDITEM,
	         LAST);
	
/*Correlation comment - Do not change!  Original value='zx0L34IgyD5AUFUZLF/znk4x+5WNgGAelNqKVVAWIX127PSqNr/H8i9xEsqAOyIr5FVed9Thl98WUG0LUNK0Fg' Name ='authenticity_token_1_1' Type ='Manual'*/
//	web_reg_save_param_regexp(
//		"ParamName=authenticity_token_1",
//		"RegExp=name=\\\\\"authenticity_token\\\\\"\\ value=\\\\\"(.*?)==\\\\\"\\ ",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/edit*",
//		LAST);	
	
	GenerateFamilyMemberSSN();
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_1}");
	
	web_custom_request("family_members",
		"URL=http://enroll-preprod.dchbx.org/insured/family_members",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/javascript",
		"Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=utf8=%E2%9C%93&authenticity_token=uCA6AKJHdulYoZGKUvRH0JRYL1XaauvoJC6VC7qfidsZEy8D7LaOZNcgp8isjJYxg7lD0PmmnugmBRSvpPzMbw%3D%3D&dependent%5Bfirst_name%5D=Spouse&dependent%5Bmiddle_name%5D=&dependent%5Blast_name%5D={applicantName}&dependent%5Bdob%5D=1990-09-01&jq_datepicker_ignore_dependent%5Bdob%5D=09%2F01%2F1990&dependent%5Bssn%5D={familyMemberSSN}&dependent%5Bno_ssn%5D=0&dependent%5Bno_ssn%5D=0&dependent%5Brelationship%5D=spouse&dependent%5Bgender%5D=female&dependent%5Bis_incarcerated%5D=false&dependent%5Bus_citizen%5D=true&dependent%5Bnaturalized_citizen%5D=false&immigration_doc_type=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bsubject%5D=Naturalization+Certificate&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bid%5D=560451a169702d0283340000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bnaturalization_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attrib"
		"utes%5D%5B1%5D%5Bsubject%5D=Certificate+of+Citizenship&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bid%5D=560451a169702d0283350000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bcitizenship_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Bsubject%5D=I-327+(Reentry+Permit)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Bid%5D=560451a169702d0283360000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Bsubject%5D=I-551+(Permanent+Resident+Card)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Bid%5D=560451a169702d0283370000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Bcard_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5"
		"D%5Bvlp_documents_attributes%5D%5B4%5D%5Bsubject%5D=I-571+(Refugee+Travel+Document)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B4%5D%5Bid%5D=560451a169702d0283380000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B4%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B5%5D%5Bsubject%5D=I-94+(Arrival%2FDeparture+Record)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B5%5D%5Bid%5D=560451a169702d0283390000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B5%5D%5Bi94_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bsubject%5D=I-94+(Arrival%2FDeparture+Record)+in+Unexpired+Foreign+Passport&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bid%5D=560451a169702d02833a0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bi94_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_a"
		"ttributes%5D%5B7%5D%5Bsubject%5D=Machine+Readable+Immigrant+Visa+(with+Temporary+I-551+Language)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Bid%5D=560451a169702d02833b0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Bsubject%5D=I-571+(Refugee+Travel+Document)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Bid%5D=560451a169702d0283380000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Bcard_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bsubject%5D=Temporary+I-551+Stamp+(on+passport+or+I-94)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bid%5D=560451a169702d02833c0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attribu"
		"tes%5D%5B9%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B10%5D%5Bsubject%5D=I-20+(Certificate+of+Eligibility+for+Nonimmigrant+(F-1)+Student+Status)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B10%5D%5Bid%5D=560451a169702d02833d0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B10%5D%5Bsevis_id%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bsubject%5D=Other+(With+Alien+Number)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bid%5D=560451a169702d02833e0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bdescription%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bsubject%5D=Other+(With+Alien+Number)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bid%5D=560451a169702d02833e0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bi94"
		"_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bdescription%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bsubject%5D=Unexpired+Foreign+Passport&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bid%5D=560451a169702d02833f0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B14%5D%5Bsubject%5D=DS2019+(Certificate+of+Eligibility+for+Exchange+Visitor+(J-1)+Status)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B14%5D%5Bid%5D=560451a169702d0283400000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B14%5D%5Bsevis_id%5D=&form_for_consumer_role=false&naturalization_doc_type=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bsubject%5D=Naturalization+Certificate&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bid%5D=560451a169702d0283410000&dependent%5Bconsumer_role%5D%5Bvlp_doc"
		"uments_attributes%5D%5B0%5D%5Bnaturalization_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bsubject%5D=Certificate+of+Citizenship&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bid%5D=560451a169702d0283420000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bcitizenship_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Balien_number%5D=&dependent%5Bindian_tribe_member%5D=false&dependent%5Btribal_id%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bis_consumer_role%5D=true&dependent%5Bsame_with_primary%5D=false&dependent%5Bsame_with_primary%5D=true&dependent%5Bno_dc_address%5D=false&dependent%5Baddresses%5D%5Bkind%5D=home&dependent%5Baddresse"
		"s%5D%5Baddress_1%5D=&dependent%5Baddresses%5D%5Baddress_2%5D=&dependent%5Baddresses%5D%5Bcity%5D=&dependent%5Baddresses%5D%5Bstate%5D=&dependent%5Baddresses%5D%5Bzip%5D=&dependent%5Bfamily_id%5D={family_id}&button=",
		EXTRARES,
		"URL=family_members/new?family_id={family_id}", "Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}", ENDITEM,
		LAST);
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_1}");
	
//	web_convert_param("authenticity_token_1_1_URL2",
//		"SourceString={authenticity_token_1_1}",
//		"SourceEncoding=HTML",
//		"TargetEncoding=URL",
//		LAST);
	
	web_custom_request("56156cfe69702d43c1790000",
		"URL=http://enroll-preprod.dchbx.org/insured/family_members/{family_id}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}", 
		"Snapshot=t14.inf",
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=utf8=%E2%9C%93&_method=put&authenticity_token={authenticity_token_1}%3D%3D&dependent%5Bfirst_name%5D=Spouse&dependent%5Bmiddle_name%5D=&dependent%5Blast_name%5D={applicantName}&dependent%5Bdob%5D=1990-01-02&jq_datepicker_ignore_dependent%5Bdob%5D=01%2F02%2F1990&dependent%5Bssn%5D={familyMemberSSN}&dependent%5Bno_ssn%5D=0&dependent%5Brelationship%5D=spouse&dependent%5Bgender%5D=female&dependent%5Bis_incarcerated%5D=false&"
		"dependent%5Bus_citizen%5D=true&dependent%5Bnaturalized_citizen%5D=false&immigration_doc_type=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bsubject%5D=Naturalization+Certificate&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bid%5D=56156d0569702d43d88c0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bnaturalization_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Balien_number%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bsubject%5D=Certificate+of+Citizenship&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bid%5D=56156d0569702d43d88d0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bcitizenship_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Bsubject%5D=I-327+(Reentry+Permit)&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Bid%5D=56156d0569702d43d88e0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B2%5D%5Bexpiration_date%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Bsubject%5D=I-551+(Permanent+Resident+Card)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Bid%5D=56156d0569702d43d88f0000&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Bcard_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B3%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B4%5D%5Bsubject%5D=I-571+(Refugee+Travel+Document)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B4%5D%5Bid%5D=56156d0569702d43d8900000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B4%5D%5Balien_number%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B5%5D%5Bsubject%5D=I-94+(Arrival%2FDeparture+Record)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B5%5D%5Bid%5D=56156d0569702d43d8910000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B5%5D%5Bi94_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bsubject%5D=I-94+(Arrival%2FDeparture+Record)+in+Unexpired+Foreign+Passport&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bid%5D=56156d0569702d43d8920000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bi94_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bcountry_of_citizenship%5D=Afghanistan&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bexpiration_date%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bvisa_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B6%5D%5Bsevis_id%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Bsubject%5D=Machine+Readable+Immigrant+Visa+(with+Temporary+I-551+Language)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Bid%5D=56156d0569702d43d8930000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Balien_number%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B7%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Bsubject%5D=I-571+(Refugee+Travel+Document)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Bid%5D=56156d0569702d43d8900000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B8%5D%5Bcard_number%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bsubject%5D=Temporary+I-551+Stamp+(on+passport+or+I-94)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bid%5D=56156d0569702d43d8940000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bcountry_of_citizenship%5D=Afghanistan&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B9%5D%5Bexpiration_date%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B10%5D%5Bsubject%5D=I-20+(Certificate+of+Eligibility+for+Nonimmigrant+(F-1)+Student+Status)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B10%5D%5Bid%5D=56156d0569702d43d8950000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B10%5D%5Bsevis_id%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bsubject%5D="
		"Other+(With+Alien+Number)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bid%5D=56156d0569702d43d8960000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bcountry_of_citizenship%5D=Afghanistan&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bexpiration_date%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B11%5D%5Bsevis_id%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bsubject%5D=Other+(With+I-94)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bid%5D=56156d0569702d43d8970000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bi94_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bpassport_number%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bcountry_of_citizenship%5D=Afghanistan&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bexpiration_date%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B12%5D%5Bsevis_id%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bsubject%5D=Unexpired+Foreign+Passport&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bid%5D=56156d0569702d43d8980000&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bpassport_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bcountry_of_citizenship%5D=Afghanistan&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bexpiration_date%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bi94_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B13%5D%5Bsevis_id%5D=&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B14%5D%5Bsubject%5D=DS2019+(Certificate+of+Eligibility+for+Exchange+Visitor+(J-1)+Status)&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B14%5D%5Bid%5D=56156d0569702d43d8990000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B14%5D%5Bsevis_id%5D=&form_for_consumer_role=false&naturalization_doc_type=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bsubject%5D=Naturalization+Certificate&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bid%5D=56156d0569702d43d89a0000&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Bnaturalization_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B0%5D%5Balien_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bsubject%5D=Certificate+of+Citizenship&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bid%5D=56156d0569702d43d89b0000&"
		"dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Bcitizenship_number%5D=&dependent%5Bconsumer_role%5D%5Bvlp_documents_attributes%5D%5B1%5D%5Balien_number%5D=&dependent%5Bindian_tribe_member%5D=false&dependent%5Btribal_id%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bethnicity%5D%5B%5D=&dependent%5Bis_consumer_role%5D="
		"true&dependent%5Bsame_with_primary%5D=false&dependent%5Bsame_with_primary%5D=true&dependent%5Bno_dc_address%5D=false&dependent%5Baddresses%5D%5Bkind%5D=home&dependent%5Baddresses%5D%5Baddress_1%5D=&dependent%5Baddresses%5D%5Baddress_2%5D=&dependent%5Baddresses%5D%5Bcity%5D=&dependent%5Baddresses%5D%5Bstate%5D=&dependent%5Baddresses%5D%5Bzip%5D=&dependent%5Bfamily_id%5D={family_id}&button=", 
		EXTRARES, 
		"Url=new?family_id={family_id}", "Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}", ENDITEM, 
		LAST);	
	
	return 0;
}
