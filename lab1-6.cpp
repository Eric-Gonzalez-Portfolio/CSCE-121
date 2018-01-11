#include "std_lib_facilities_4.h"
int main(){
	double a;
	double smallest;
	double largest;
	cin >> a;
	smallest = a;
	largest = a;
	bool change = 0;
	
	cout << smallest << " The smallest so far.\n";
	cout << largest << " The largest so far.\n";
	
	while (change == 0){

		if (cin >> a){
			if (a < smallest){
				smallest = a;
				cout << smallest << " The smallest so far.\n";
				cout << largest << " The largest so far.\n";

			}
			else if (a > largest){
				largest = a;
				cout << smallest << " The smallest so far.\n";
				cout << largest << " The largest so far.\n";

			}
			else{
				cout << smallest << " The smallest so far.\n";
				cout << largest << " The largest so far.\n";
			}
		}
		else{
			return 0;
		}
	}
}