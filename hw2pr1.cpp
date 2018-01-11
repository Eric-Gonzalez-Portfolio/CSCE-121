//Eric E. Gonzalez
//CSCE-121-502
//Due: September 21, 2014
//hw2pr1.cpp

#include "std_lib_facilities_4.h"
int main()
{
	//Ask for amendment #
	cout << "Which amendment? (1-10)\n";
	int input;
	cin >> input;
	if (input == 1){
		cout << "Amendment 1 guarantees freedom of religion, speech, press, assembly, and petition.\n";
	}
	else if (input == 2){
		cout << "Amendment 2 guarantees the right to bear arms.\n";
	}
	else if (input == 3){
		cout << "Amendment 3 restricts the quartering of soldiers in private homes.\n";
	}
	else if (input == 4){
		cout << "Amendment 4 guarantees protection against unreasonable search and seizure.\n";
	}
	else if (input == 5){
		cout << "Amendment 5 guarantees due process, a trial, and compensation for seizure of private property.\n";
	}
	else if (input == 6){
		cout << "Amendment 6 guarantees a speedy trial, knowledge of charges, confronting witnesses, and counsel.\n";
	}
	else if (input == 7){
		cout << "Amendment 7 guarantees trial by jury.\n";
	}
	else if (input == 8){
		cout << "Amendment 8 guards against excessive bail, as well as cruel and unusual punishment.\n";
	}
	else if (input == 9){
		cout << "Amendment 9 protects against the use of the Constitution as a means to limitless federal power.\n";
	}
	else if (input == 10){
		cout << "Amendment 10 guarantees the right of the states/people to govern themselves.\n";
	}
	else{
		cout << "Invalid input.\n";
	}
	return 0;
}
