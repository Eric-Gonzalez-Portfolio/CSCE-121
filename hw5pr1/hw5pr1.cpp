//Eric E. Gonzalez
//CSCE 121-502
//Due: October 14,2014
//hw5pr1.cpp

#include "randint.h"
#include "std_lib_facilities_4.h"

int a;
int b;

int main()
try
{
	int counter[10] = {0,0,0,0,0,0,0,0,0,0}; //Make vector for counter element
	for (int i = 0; i < 1000000; ++i){
		a = randint();
		b = a % 10; //Ensure whole numbers
		counter[b]++;
	}
	int i = 0;
	//Increment through and print values
	while(i < 10){
		cout << "Number of " << i << "'s: " << counter[i] << endl;
		i++;
	}
	return 0;
}

catch(exception& e)
{
	cerr<<"error: "<<e.what()<<'\n';
	keep_window_open();
	return 1;   // 1 indicates failure
}
	
catch(...)
{
	cerr<<"Oops: Unknown exception\n";
	keep_window_open();
	return 2;  // 2 indicates failure
}
