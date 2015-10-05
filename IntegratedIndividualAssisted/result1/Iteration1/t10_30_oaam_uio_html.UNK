

function validateReg(){
	if (num != undefined && bharosaAuthenticator != undefined && bharosaAuthenticator != ""){
		for (i=0; i<num; i++){
			var questionId = "question" + i;
			var answerId = bharosaAuthenticator + i + "DataField";

			var questionField = document.getElementById(questionId);
			var answerField = document.getElementById(answerId);

			if (questionField.options[questionField.selectedIndex].value == ""){
				alert("You must select an option for question " + (i+1) + ".");
				questionField.focus();
				return false;
			}
			if (trimstring(answerField.value) == "" || trimstring(answerField.value).length < minPinLength){
				alert("You must enter an answer for question " + (i+1) + " between " + minPinLength + " and " + maxPinLength + " characters in length.");
				answerField.focus();
				return false;
			}
		}
	} else {
		return false;
	}
	return true;
}