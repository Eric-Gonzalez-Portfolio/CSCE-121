//Eric E. Gonzalez
//CSCE-121-502
//Due: December 11, 2014
//hw8pr2.cpp

#include "std_lib_facilities_4.h"
#include <string>
#include <regex>
#include <iostream>
#include <fstream>

using namespace std;

int main()
try
{
	ifstream in("file.txt");
	if (!in) cerr << "no file\n";

	regex social{ R"(([0-8]\d{2})\s*-?\s*(\d{2})\s*-?\s*(\d{4}))" };

	int count = 0;
	for (string line; getline(in, line);){
		++count;
		smatch matches;
		if (regex_search(line, matches, social) && matches[1]!="666" && matches[1]!="000" && matches[2]!="00" && matches[3]!="0000"){
			cout << count << ": " << matches[0] << '\n';
			cout << "Valid format\n\n";
		}
		else{
			cout << count << ": " << line << '\n';
			cout << "Invalid format\n\n";
		}
	}

	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}