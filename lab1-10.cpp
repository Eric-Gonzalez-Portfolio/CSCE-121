#include "std_lib_facilities_4.h"
int main(){
	double a;
	double total;	//measured in m
	string unit;
	string unit_min;
	string unit_max;
	double smallest;
	double largest;
	double smallest_m;
	double largest_m;
	
	double sum_values;			//in meters
	double num_values;
	vector<double> Inputs;
	
	cin >> a;
	cout << "Units? cm, m, in, or ft: ";
	cin >> unit;
	if (unit == "cm"){
		total = a/100;
	}
	else if (unit == "m"){
		total = a;
	}
	else if (unit == "in"){
		total = (a*2.54)/100;
	}
	else if (unit == "ft"){
		total = ((a*12)*2.54)/100;
	}
	else{
		return 0;
	}
	smallest_m = total;
	largest_m = total;
	smallest = a;
	largest = a;
	unit_min = unit;
	unit_max = unit;
	num_values++;
	sum_values += total;
	Inputs.push_back(total);
	cout << smallest << unit_min << " The smallest so far.\n";
	cout << largest << unit_max << " The largest so far.\n";
	cout << num_values << " value has been entered.\n";
	cout << "The sum of all values entered is " << sum_values << "m\n";
	cout << "Values entered: ";
	for (int i=0; i<num_values; ++i){
		cout << Inputs[i] << "m ";
	}
	cout << "\n";
	
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
				total = a/100;
			}
			else if (unit == "m"){
				total = a;
			}
			else if (unit == "in"){
				total = (a*2.54)/100;
			}
			else if (unit == "ft"){
				total = ((a*12)*2.54)/100;
			}
			else{
				return 0;
			}
			if (total < smallest_m){
				smallest_m = total;
				smallest = a;
				unit_min = unit;
				num_values++;
				sum_values += total;
				Inputs.push_back(total);
				cout << smallest << unit_min << " The smallest so far.\n";
				cout << largest << unit_max << " The largest so far.\n";
				cout << num_values << " values have been entered.\n";
				cout << "The sum of all values entered is " << sum_values << "m\n";
				cout << "Values entered: ";
				for (int i=0; i<num_values; ++i){
					cout << Inputs[i] << "m ";
				}
				cout << "\n";
				//cout << "The smaller value is " << a << "\n" << "The larger value is " << b << "\n";
				//if ((b - a) < 0.01){
					//cout << "The numbers are almost equal.\n";
				//}
			}
			else if (total > largest_m){
				largest_m = total;
				largest = a;
				unit_max = unit;
				num_values++;
				sum_values += total;
				Inputs.push_back(total);
				cout << smallest << unit_min << " The smallest so far.\n";
				cout << largest << unit_max << " The largest so far.\n";
				cout << num_values << " values have been entered.\n";
				cout << "The sum of all values entered is " << sum_values << "m\n";
				cout << "Values entered: ";
				for (int i=0; i<num_values; ++i){
					cout << Inputs[i] << "m ";
				}
				cout << "\n";
				//cout << "The smaller value is " << b << "\n" << "The larger value is " << a << "\n";
				//if ((a - b) < 0.01){
					//cout << "The numbers are almost equal.\n";
				//}
			}
			else{
				num_values++;
				sum_values += total;
				Inputs.push_back(total);
				cout << smallest << unit_min << " The smallest so far.\n";
				cout << largest << unit_max << " The largest so far.\n";
				cout << num_values << " values have been entered.\n";
				cout << "The sum of all values entered is " << sum_values << "m\n";
				cout << "Values entered: ";
				for (int i=0; i<num_values; ++i){
					cout << Inputs[i] << "m ";
				}
				cout << "\n";
			}
		}
		else{
			return 0;
		}
	}
}