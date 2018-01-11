//Eric E. Gonzalez
//CSCE-121-502
//Due: September 21, 2014
//hw2pr3.cpp

#include "std_lib_facilities_4.h"
int main()
{
	//Input and variables
	cout << "Income in dollars?\n";
	double income;
	double give;
	double save;
	double live;

	cin >> income;
	
	//Calculate give-10%, save-10%, live-80%
	give = income/10;
	save = income/10;
	live = income*.8;
	
	//Return & display values
	cout << fixed << std::setprecision(2) << "You should give away $" << give << ", ";
	cout << "save $" << save << ", ";
	cout << "and live on $" << live << ".\n";
}