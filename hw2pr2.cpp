//Eric E. Gonzalez
//CSCE-121-502
//Due: September 21, 2014
//hw2pr2.cpp

#include "std_lib_facilities_4.h"
int main()
{
	//Ask for amendment #
	cout << "Which amendment? (1-10)\n";
	int input;
	
	//Form vector of answers
	vector<string> answers;
	answers.push_back("Amendment 1 guarantees freedom of religion, speech, press, assembly, and petition.\n");
	answers.push_back("Amendment 2 guarantees the right to bear arms.\n");
	answers.push_back("Amendment 3 restricts the quartering of soldiers in private homes.\n");
	answers.push_back("Amendment 4 guarantees protection against unreasonable search and seizure.\n");
	answers.push_back("Amendment 5 guarantees due process, a trial, and compensation for seizure of private property.\n");
	answers.push_back("Amendment 6 guarantees a speedy trial, knowledge of charges, confronting witnesses, and counsel.\n");
	answers.push_back("Amendment 7 guarantees trial by jury.\n");
	answers.push_back("Amendment 8 guards against excessive bail, as well as cruel and unusual punishment.\n");
	answers.push_back("Amendment 9 protects against the use of the Constitution as a means to limitless federal power.\n");
	answers.push_back("Amendment 10 guarantees the right of the states/people to govern themselves.\n");
	cin >> input;
	
	//Determine & display amendment
	if (input > 0 and input <= 10){
		cout << answers[input-1];
	}
	else{
		cout << "Invalid input.\n";
	}
}
