//Eric E. Gonzalez
//CSCE 121-502
//Due: October 21,2014
//hw6pr1.cpp

#include "Chrono.h"
using namespace Chrono;

int main()
try
{	
	Date d1;
	Date::Day d2;
	
	
	//continually prompt for input
	//input must be in (year, month, day) form with parentheses included
	cout<<"Enter a date (year, month, day): ";
	while (cin >> d1){
		cout<<"Your date: "<<d1<<endl;
		d2 = d1.day_of_week(d1);
		
		//Assign temp based on value returned from day_of_week in Chrono.cpp
		string temp = "";
		if (d2==Date::Day::sunday)
			temp = "Sunday";
		else if (d2==Date::Day::monday)
			temp = "Monday";
		else if (d2==Date::Day::tuesday)
			temp = "Tuesday";
		else if (d2==Date::Day::wednesday)
			temp = "Wednesday";
		else if (d2==Date::Day::thursday)
			temp = "Thursday";
		else if (d2==Date::Day::friday)
			temp = "Friday";
		else if (d2==Date::Day::saturday)
			temp = "Saturday";
		
		//Print and re-issue prompt
		cout << "That is a " << temp << '\n';
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