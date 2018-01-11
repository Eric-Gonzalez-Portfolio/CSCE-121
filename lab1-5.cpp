#include "std_lib_facilities_4.h"
int main(){
	bool change = 0;
	while (change == 0){
		double a;
		double b;
		if (cin >> a >> b){
			if (a < b){
				cout << "The smaller value is " << a << "\n" << "The larger value is " << b << "\n";
				if ((b - a) < 0.01){
					cout << "The numbers are almost equal.\n";
				}
			}
			else if (a > b){
				cout << "The smaller value is " << b << "\n" << "The larger value is " << a << "\n";
				if ((a - b) < 0.01){
					cout << "The numbers are almost equal.\n";
				}
			}
			else{
				cout << "The numbers are equal.";
			}
		}
		else{
			return 0;
		}
	}
}