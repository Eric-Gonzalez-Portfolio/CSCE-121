//Eric E. Gonzalez
//CSCE 121-502
//Due: October 21,2014
//hw6pr4.cpp

#include "Chrono.h"
using namespace Chrono;

int main()
try
{
	Date d1;		//instance of class date
	Date d2;
	Date d3;
	
	//continually prompt for input
	//input must be in (year, month, day) form with parentheses included
	cout<<"Enter a date (year, month, day): ";
	while (cin >> d1){
		d2 = d1;   //d2 == old value of d1
		d3 = d1++;   //d3 == old value of d1, d1 == new value of d1   
		if(d2 != d3)
			cerr<<"error in postfix ++\n";
		if(d2 == d1)
			cerr<<"error in postfix ++\n";
		if(d1 != ++d2)
			cerr<<"error in postfix ++\n";
		cout << "Tomorrow is " << d1 << '\n';
		cout<<"Enter a date (year, month, day): ";
	}
	return 0;
}

catch(exception& e)
{
	cerr<<"error: "<<e.what()<<'\n';
	return 1;   // 1 indicates failure
}
	
catch(...)
{
	cerr<<"Oops: Unknown exception\n";
	return 2;  // 2 indicates failure
}