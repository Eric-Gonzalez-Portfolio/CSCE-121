//Eric E. Gonzalez
//CSCE 121-502
//Due: October 14,2014
//hw5pr2.cpp

#include "std_lib_facilities_4.h"

string line_01; 
string line_02; 
string line_03;
vector<string> vect1;
vector<string> vect2;
vector<string> vect3;
string file_name;

int main()
try{
	//prompt for 1st file name
	cout << "Enter 1st input file name (input1.txt):\n";
	cin >> file_name;
	ifstream input1(file_name);
	
	//prompt for 2nd file name
	cout << "Enter 2nd input file name (input2.txt):\n";
	cin >> file_name;
	ifstream input2(file_name);
	
	//prompt for output file name
	cout << "Enter the output file name (output.txt):\n";
	cin >> file_name;
	ofstream output(file_name);
	
	//Get lines from input1.txt
	if (input1.is_open())
		{
		cout << "input1.txt:\n";
		while (getline(input1, line_01))
		{
			cout << line_01 << endl;
			vect1.push_back(line_01);
		}
		input1.close();
	}
	
	//Get lines from input2.txt
	if (input2.is_open()){
		cout << "input2.txt:\n";
		while (getline(input2, line_02)){
			cout << line_02 << endl;
			vect2.push_back(line_02);
		}
		input2.close();
	}
	
	//Form output.txt by comparing vector values
	if (output.is_open()){
		while(vect1.size()<vect2.size()|| vect1.size()>vect2.size())
		{
			if (vect1.size() > vect2.size()){
				vect2.push_back(" ");
			}
			else if (vect1.size() < vect2.size())
			{
				vect1.push_back(" ");
			}
		}
		cout << "output:\n";
		for (int i = 0; i < vect1.size(); ++i){
			if (vect1[i] == vect2[i]){
				vect3.push_back("OK");
			}
			else if (vect1[i] != vect2[i]){
				vect3.push_back("DIFF");
			}
			cout << vect3[i] << endl;
			output << vect3[i] << endl;
		}
		output.close();
	}
	else {
		throw 1;
	
	}

	keep_window_open();
	return 0;
}


catch (int e) {
	cerr << "the file did not open successfully\n";
	keep_window_open();
	return 1;
}

catch (...){
	cerr << "Oops:unknown exception!\n";
	keep_window_open();
	return 2;
}