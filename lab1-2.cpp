#include "std_lib_facilities_4.h"
int main(){
	bool change = 0;
	while (change == 0){
		int a;
		int b;
		if (cin >> a >> b){
			if (a < b){
				cout << "The smaller value is " << a << "\n" << "The larger value is " << b << "\n";
			}
			else if (a > b){
				cout << "The smaller value is " << b << "\n" << "The larger value is " << a << "\n";
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}
	}
}