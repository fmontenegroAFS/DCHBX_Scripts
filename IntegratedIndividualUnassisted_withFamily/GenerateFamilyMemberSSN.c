GenerateFamilyMemberSSN()
{
	
	char userSSN[32];
	sprintf(userSSN,"%s-%s-%s",lr_eval_string("{UserSSNFirst3}"),lr_eval_string("{UserSSNSecond2}"),lr_eval_string("{UserSSNLast4}"));
	lr_save_string(userSSN,"familyMemberSSN");
	
	return 0;
}
