#include "std_lib_facilities_4.h"
int main(){
	double a;
	double total;	//measured in m
	string unit;
	string unit_min;
	string unit_max;
	double smallest = 0;
	double largest = 0;
	double smallest_m = 0;
	double largest_m = 0;
	
	double sum_values;			//in meters
	double num_values;
	vector<double> Inputs;
	
	bool change = 0;
	while (change == 0){
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
			if(Inputs.size() == 0)
			{
				smallest_m = total;
				largest_m = total;
			}
			if (total < smallest_m){
				smallest_m = total;
				smallest = a;
				unit_min = unit;
			}
			else if (total > largest_m){
				largest_m = total;
				largest = a;
				unit_max = unit;
			}
			num_values++;
			sum_values += total;
			Inputs.push_back(total);
			sort (Inputs.begin(), Inputs.end());
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
		else{
			return 0;
		}
	}
}