ClearUsedEmployees()
{
	
	char * usedFileName = "..\\UsedData.dat";
	char * sourceFileName = "..\\EmpFName.dat";
	char * tempFileName = "..\\Temp.dat";
		
	long usedFile = fopen(usedFileName, "r");
	long sourceFile = fopen(sourceFileName, "r");
	long tempFile = fopen(tempFileName, "a+");

	char line[1024];
	int writeFlag;
	
	char * usedSSNs[512][11];
	int arrayPosition=0;
		
	if( sourceFile == NULL ){
      perror("Employee list is missing.\n");
      exit(0);
   	}
	
	//Build list of used SSNs	
	while (fgets(line,sizeof(line),usedFile)!=NULL){
		sprintf(usedSSNs[arrayPosition++],"%s", strtok(line,"\n"));
	}
	
	//Read lines off of source file	
	while (fgets(line,sizeof(line),sourceFile)!=NULL){
		writeFlag=1;
		//Check source file lines against list of used SSNs
		for(arrayPosition = 0; strlen(usedSSNs[arrayPosition])>9&&arrayPosition<512; arrayPosition++){
			if (strstr(line,usedSSNs[arrayPosition])!=NULL){
				writeFlag=0;
				break;
			}
		}
		//Write lines that do not contain used SSNs to temp file
		if (writeFlag==1){
			fprintf(tempFile, "%s" ,line);
		}		
	}	
	 
	fclose(usedFile);
	fclose(sourceFile);
	fclose(tempFile);

	//Delete source file, rename temp file to source file, clear used SSN file	
	remove(sourceFileName);
	rename(tempFileName,sourceFileName);
	fclose(fopen(usedFileName, "w"));

	return 0;
}
