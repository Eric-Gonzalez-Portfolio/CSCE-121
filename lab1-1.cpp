#include "std_lib_facilities_4.h"
int main(){
	bool change = 0;
	while (change == 0){
		int a;
		int b;
		if (cin >> a >> b){
			cout << a << "\n";
			cout << b << "\n";
		}
		else{
			return 0;
		}
	}
}