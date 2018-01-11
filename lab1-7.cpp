#include "std_lib_facilities_4.h"
int main(){
	double a;
	double total;	//measured in cm
	string unit;
	string unit_min;
	string unit_max;
	double smallest;
	double largest;
	double smallest_cm;
	double largest_cm;
	
	double sum_values;
	double num_values = 0;
	
	cin >> a;
	cout << "Units? cm, m, in, or ft: ";
	cin >> unit;
	if (unit == "cm"){
		total = a;
	}
	else if (unit == "m"){
		total = a*100;
	}
	else if (unit == "in"){
		total = a*2.54;
	}
	else if (unit == "ft"){
		total = (a*12)*2.54;
	}
	else{
		return 0;
	}
	smallest_cm = total;
	largest_cm = total;
	smallest = a;
	largest = a;
	unit_min = unit;
	unit_max = unit;
	num_values++;
	cout << smallest << unit_min << " The smallest so far.\n";
	cout << largest << unit_max << " The largest so far.\n";
	cout << num_values << " value has been entered.\n"
	
	bool change = 0;
	while (change == 0){
		//double a;
		//double smallest;
		//double largest;
		//double b;
		//cin >> a;
		//smallest = a;
		//largest = a;
		if (cin >> a){
			cout << "Units? cm, m, in, or ft: ";
			cin >> unit;
			if (unit == "cm"){
				total = a;
			}
			else if (unit == "m"){
				total = a*100;
			}
			else if (unit == "in"){
				total = a*2.54;
			}
			else if (unit == "ft"){
				total = (a*12)*2.54;
			}
			else{
				return 0;
			}
			if (total < smallest_cm){
				smallest_cm = total;
				smallest = a;
				unit_min = unit;
				cout << smallest << unit_min << " The smallest so far.\n";
				cout << largest << unit_max << " The largest so far.\n";
				//cout << "The smaller value is " << a << "\n" << "The larger value is " << b << "\n";
				//if ((b - a) < 0.01){
					//cout << "The numbers are almost equal.\n";
				//}
			}
			else if (total > largest_cm){
				largest_cm = total;
				largest = a;
				unit_max = unit;
				cout << smallest << unit_min << " The smallest so far.\n";
				cout << largest << unit_max << " The largest so far.\n";
				//cout << "The smaller value is " << b << "\n" << "The larger value is " << a << "\n";
				//if ((a - b) < 0.01){
					//cout << "The numbers are almost equal.\n";
				//}
			}
			else{
				cout << smallest << unit_min << " The smallest so far.\n";
				cout << largest << unit_max << " The largest so far.\n";
			}
		}
		else{
			return 0;
		}
	}
}