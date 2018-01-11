//Eric E. Gonzalez
//CSCE-121-502
//Due: December 11, 2014
//hw8pr1.cpp

#include <regex>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()

{
	try{
		string isbn;
		//cout << "Please enter ISBN number: ";
		bool quit = false;
	
		regex pattern {R"([9][7][8-9]\s*-*(\d-*){9}([-])?([0-9,X,x])?)" };
		smatch matches;
		while(quit==false){
			cout << "Please enter ISBN number or type 'Quit': ";
			cin >> isbn;
			if (regex_search(isbn, matches, pattern)){
				cout << matches[0] << '\n';
				cout << "Valid Format\n" << endl;
			}
			
			else if (isbn=="Quit"){
				cout << "\nGoodbye\n\n";
				quit = true;
			}
			
			else{
				cout << matches[0] << '\n';
				cout << "Invalid Format\n" << endl;
			}
			
		}
		return 0;
	}
	
	catch(exception& e)
	{
		cerr<<"error: "<<e.what()<<'\n';
		//keep_window_open();
		return 1;   // 1 indicates failure
	}
	
	catch(...)
	{
		cerr<<"Oops: Unknown exception\n";
		//keep_window_open();
		return 2;  // 2 indicates failure
	}
}