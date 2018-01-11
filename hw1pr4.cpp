//Eric E. GOnzalez
//CSCE-121-502
//Due: September 14, 2014
//hw1pr4.cpp

#include "std_lib_facilities_4.h"
int main()
{
	int x = 1;
	int i = 1;
	while (i <= 11){
		int x2 = x * x;
		double y = sqrt(x2);
		//cout goes here
		cout << "square root of (" << x << " squared) is " << y << "\n";
		x *= 10;
		i++;
	}
	cout << "This program produced some strange values since it constantly converted between the int and double data types.\n";
}