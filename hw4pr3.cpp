//Eric E. Gonzalez
//CSCE-121-502
//Due: October 07, 2014
//hw4pr3.cpp

#include "std_lib_facilities_4.h"

//Assume positive answer begins with 'Y' or 'y'
bool Yes(string input){
	if (input[0] == 'Y' || input[0] == 'y'){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	try
	{
		string q1;
		string q2;
		string q3;
	
		//Begin tree of binary values corresponding to questions; map to answers
		cout << "Is it something alive?\n";
		cin >> q1;
		if (Yes(q1)==true){
			cout << "Is it found inside?\n";
			cin >> q2;
			if (Yes(q2)==true){
				cout << "Is it big?\n";
				cin >> q3;
				if (Yes(q3)==true){
					cout << "Doggy!\n";
				}
				else{
					cout << "Mouse...\n";
				}
			}
			else{
				cout << "Is it big?\n";
				cin >> q3;
				if (Yes(q3)==true){
					cout << "Elephant\n";
				}
				else{
					cout << "Frog\n";
				}
			}
		}
		else{
			cout << "Is it found inside?\n";
			cin >> q2;
			if (Yes(q2)==true){
				cout << "Is it big?\n";
				cin >> q3;
				if (Yes(q3)==true){
					cout << "Refrigerator\n";
				}
				else{
					cout << "Mouse Trap\n";
				}
			}
			else{
				cout << "Is it big?\n";
				cin >> q3;
				if (Yes(q3)==true){
					cout << "Mountain\n";
				}
				else{
					cout << "Atom\n";
				}
			}
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
}