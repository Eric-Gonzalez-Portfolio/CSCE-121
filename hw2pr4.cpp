//Eric E. Gonzalez
//CSCE-121-502
//Due: September 21, 2014
//hw2pr4.cpp

#include "std_lib_facilities_4.h"
int main()
{	
	//Variables
	int count_1;
	int count_2;
	int count_5;
	int count_10;
	int count_20;
	int count_25;
	int count_50;
	int count_100;
	int count_200;
	int count_500;
	
	//Vectors
	vector<int> count{count_1,count_2,count_5,count_10,count_20,count_25,count_50,count_100,count_200,count_500};
	vector<int> denomination{1,2,5,10,20,25,50,100,200,500};
	
	//Loop prompting for inputs
	for (int i=0; i<10; i++){
		if (denomination[i] >= 100){
			cout << "How many " << denomination[i]/100 << "-pound coins do you have?\n";
			cin >> count[i];
		}
		else{
			cout << "How many " << denomination[i] << "-penny coins do you have?\n";
			cin >> count[i];
		}
	}
	
	//Find total value in pence and U.S. dollars
	double total = (denomination[0]*count[0])+(denomination[1]*count[1])+(denomination[2]*count[2])+(denomination[3]*count[3])+(denomination[4]*count[4])+(denomination[5]*count[5])+(denomination[6]*count[6])+(denomination[7]*count[7])+(denomination[8]*count[8])+(denomination[9]*count[9]);
	double convert = (total/100)*1.62;
	
	//Loop and final cout statements to return final values
	for (int i=0; i<10; i++){
		if (denomination[i] >= 100){
			cout << "You have " << count[i] << " " << denomination[i]/100 << "-pound coins.\n";
		}
		else{
			cout << "You have " << count[i] << " " << denomination[i] << "-penny coins.\n";
		}
	}

	cout << "The value of all your coins is " << total << " British pence.\n";
	cout << "In U.S. dollars, you have $" << convert << ".\n";
}