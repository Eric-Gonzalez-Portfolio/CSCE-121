//Eric E. Gonzalez
//CSCE 121-502
//Due: October 14,2014
//hw5pr3.cpp

#include "Chrono.h"
using namespace Chrono;

int main()
try
{
	Date date;		//instance of class date
	
	//continually prompt for input
	//input must be in (year, month, day) form with parentheses included
	cout<<"Enter a date (year, month, day): ";
	while (cin >> date){
		cout <<"Tomorrow is "<<++date<<"."<<endl;
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