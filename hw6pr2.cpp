//Eric E. Gonzalez
//CSCE 121-502
//Due: October 21,2014
//hw6pr2.cpp

#include "std_lib_facilities_4.h"

//Account for input of 0
bool print_zero(int n){
	if (n==0)
		return true;
	else
		return false;
}

//Print decimal value as binary
void print_binary(int n){
	if (n > 0){
		print_binary(n/2);
		if (n%2==0){
			cout << 0;
		}
		else{
			cout << 1;
		}
	}
}

//Run and display values
main()
try
{
	int i;
	cout<<"Enter a number to convert to binary: ";
	while (cin >> i){
		if (i>=0){
			if (print_zero(i)==true){
				cout << 0;
			}
			else
				print_binary(i);
			cout << endl;
		}
		else
			cout << "Negative number--try again\n";
		cout<<"Enter a number to convert to binary: ";
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