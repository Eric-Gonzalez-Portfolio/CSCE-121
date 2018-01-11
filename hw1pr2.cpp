//Eric E. GOnzalez
//CSCE-121-502
//Due: September 14, 2014
//hw1pr2.cpp

#include "std_lib_facilities_4.h"
int main()
{
	cout << "Enter operands and operator\n";
	double operand1;
	double operand2;
	string operator1;
	cin >> operand1 >> operand2 >> operator1;		// read three inputs
	
	if (operator1 == "+"){
		cout << operand1 + operand2 << "\n";
	}
	else if (operator1 == "-"){
		cout << operand1 - operand2 << "\n";
	}
	else if (operator1 == "*"){
		cout << operand1 * operand2 << "\n";
	}
	else if (operator1 == "/"){
		cout << operand1 / operand2 << "\n";
	}
	
}