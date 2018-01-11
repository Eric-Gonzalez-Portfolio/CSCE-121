//Eric E. GOnzalez
//CSCE-121-502
//Due: September 14, 2014
//hw1pr3.cpp

#include "std_lib_facilities_4.h"
int main()
{
	int pen_1 = 1;
	int pen_2 = 2;
	int pen_5 = 5;
	int pen_10 = 10;
	int pen_20 = 20;
	int pen_25 = 25;
	int pen_50 = 50;
	int pnd_1 = 100;
	int pnd_2 = 200;
	int pnd_5 = 500;
	
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
	
	
	cout << "How many 1-penny coins do you have?\n";
	cin >> count_1;
	
	cout << "How many 2-penny coins do you have?\n";
	cin >> count_2;
	
	cout << "How many 5-penny coins do you have?\n";
	cin >> count_5;
	
	cout << "How many 10-penny coins do you have?\n";
	cin >> count_10;
	
	cout << "How many 20-penny coins do you have?\n";
	cin >> count_20;
	
	cout << "How many 25-penny coins do you have?\n";
	cin >> count_25;
	
	cout << "How many 50-penny coins do you have?\n";
	cin >> count_50;
	
	cout << "How many 1-pound coins do you have?\n";
	cin >> count_100;
	
	cout << "How many 2-pound coins do you have?\n";
	cin >> count_200;
	
	cout << "How many 5-pound coins do you have?\n";
	cin >> count_500;
	
	double total = (pen_1*count_1)+(pen_2*count_2)+(pen_5*count_5)+(pen_10*count_10)+(pen_20*count_20)+(pen_25*count_25)+(pen_50*count_50)+(pnd_1*count_100)+(pnd_2*count_200)+(pnd_5*count_500);
	
	double convert = (total/100)*1.62;
	
	cout << "You have " << count_1 << " 1-penny coins.\n";
	cout << "You have " << count_2 << " 2-penny coins.\n";
	cout << "You have " << count_5 << " 5-penny coins.\n";
	cout << "You have " << count_10 << " 10-penny coins.\n";
	cout << "You have " << count_20 << " 20-penny coins.\n";
	cout << "You have " << count_25 << " 25-penny coins.\n";
	cout << "You have " << count_50 << " 50-penny coins.\n";
	cout << "You have " << count_100 << " 1-pound coins.\n";
	cout << "You have " << count_200 << " 2-pound coins.\n";
	cout << "You have " << count_500 << " 5-pound coins.\n";
	cout << "The value of all your coins is " << total << " British pence.\n";
	cout << "In U.S. dollars, you have $" << convert << ".\n";
}