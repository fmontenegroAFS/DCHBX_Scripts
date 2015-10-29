SubmitPersonalData()
{
	
	web_reg_find("Text=Verify Identity",
	             LAST);
	
	lr_start_transaction("INTEG_UNASSISTED_0013_Submit_Personal_Data");

	web_submit_data(lr_eval_string("{consumer_role_id}"),
	                "Action={enrollPreprodURL}/insured/consumer_role/{consumer_role_id}",
	                "Method=POST",
	                "EncType=multipart/form-data",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/consumer_role/{consumer_role_id}/edit",
	                "Snapshot=t72.inf",
	                "Mode=HTML",
	                ITEMDATA,
	                "Name=utf8", "Value=✓", ENDITEM,
	                "Name=_method", "Value=put", ENDITEM,
	                "Name=authenticity_token", "Value={authenticity_token}", ENDITEM,
	                "Name=exit_after_method", "Value=false", ENDITEM,
	                "Name=people[id]", "Value=", ENDITEM,
	                "Name=person[first_name]", "Value=Test", ENDITEM,
	                "Name=person[middle_name]", "Value=L", ENDITEM,
	                "Name=person[last_name]", "Value={applicantName}", ENDITEM,
	                "Name=person[name_sfx]", "Value=", ENDITEM,
	                "Name=person[dob]", "Value=1978-01-01", ENDITEM,
	                "Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", ENDITEM,
	                "Name=person[ssn]", "Value={applicantSSN}", ENDITEM,
	                "Name=person[no_ssn]", "Value=0", ENDITEM,
	                "Name=person[gender]", "Value=male", ENDITEM,
	                "Name=person[us_citizen]", "Value=true", ENDITEM,
	                "Name=person[naturalized_citizen]", "Value=false", ENDITEM,
	                "Name=immigration_doc_type", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][subject]", "Value=Naturalization Certificate", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][id]", "Value={NaturalizationCertElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][naturalization_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][subject]", "Value=Certificate of Citizenship", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][id]", "Value={CertOfCitizentshipElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][passport_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][2][subject]", "Value=I-327 (Reentry Permit)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][2][id]", "Value={ReentryPermitElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][2][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][subject]", "Value=I-551 (Permanent Resident Card)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][id]", "Value={PermanentResidentCardElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][card_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][4][subject]", "Value=I-571 (Refugee Travel Document)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][4][id]", "Value={RefugeeTravelDocumentElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][4][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][5][subject]", "Value=I-94 (Arrival/Departure Record)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][5][id]", "Value={ArrivalDepartureRecordElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][5][i94_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][subject]", "Value=I-94 (Arrival/Departure Record) in Unexpired Foreign Passport", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][id]", "Value={ForeignPassportArrivalDepartureRecordElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][i94_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][passport_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][7][subject]", "Value=Machine Readable Immigrant Visa (with Temporary I-551 Language)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][7][id]", "Value={ImmigrantVisaElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][7][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][8][subject]", "Value=I-571 (Refugee Travel Document)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][8][id]", "Value={RefugeeTravelDocumentElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][8][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][9][subject]", "Value=Temporary I-551 Stamp (on passport or I-94)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][9][id]", "Value={TemporaryI-551StampElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][9][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][10][subject]", "Value=I-20 (Certificate of Eligibility for Nonimmigrant (F-1) Student Status)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][10][id]", "Value={CertOfEligibilityForNonimmigrantElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][10][sevis_id]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][subject]", "Value=I-94 (Arrival/Departure Record) in Unexpired Foreign Passport", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][id]", "Value={ForeignPassportArrivalDepartureRecordElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][i94_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][passport_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][subject]", "Value=Other (With Alien Number)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][id]", "Value={OtherWithAlienNumberElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][description]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][subject]", "Value=Other (With Alien Number)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][id]", "Value={OtherWithAlienNumberElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][i94_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][description]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][14][subject]", "Value=I-571 (Refugee Travel Document)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][14][id]", "Value={RefugeeTravelDocumentElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][14][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][15][subject]", "Value=Unexpired Foreign Passport", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][15][id]", "Value={UnexpiredForeignPassportElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][15][passport_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][16][subject]", "Value=DS2019 (Certificate of Eligibility for Exchange Visitor (J-1) Status)", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][16][id]", "Value={DS2019ElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][16][sevis_id]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][id]", "Value={consumer_role_id}", ENDITEM,
	                "Name=form_for_consumer_role", "Value=true", ENDITEM,
	                "Name=naturalization_doc_type", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][subject]", "Value=Naturalization Certificate", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][id]", "Value={NaturalizationCertElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][naturalization_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][subject]", "Value=Certificate of Citizenship", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][id]", "Value={CertOfCitizentshipElementID}", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][passport_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][alien_number]", "Value=", ENDITEM,
	                "Name=person[consumer_role_attributes][id]", "Value={consumer_role_id}", ENDITEM,
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
	                "Name=person[phones_attributes][0][full_phone_number]", "Value=(202) 555-5555", ENDITEM,
	                "Name=person[phones_attributes][1][kind]", "Value=mobile", ENDITEM,
	                "Name=person[phones_attributes][1][full_phone_number]", "Value=", ENDITEM,
	                "Name=person[emails_attributes][0][kind]", "Value=home", ENDITEM,
	                "Name=person[emails_attributes][0][address]", "Value={applicantName}@{emailDomain}", ENDITEM,
	                "Name=person[emails_attributes][0][id]", "Value={emailAddressElementID}", ENDITEM,
	                "Name=person[emails_attributes][1][kind]", "Value=work", ENDITEM,
	                "Name=person[emails_attributes][1][address]", "Value=", ENDITEM,
		           LAST);

	lr_end_transaction("INTEG_UNASSISTED_0013_Submit_Personal_Data", LR_AUTO);

	return 0;
}
