//Eric E. Gonzalez
//CSCE-121-502
//Due: September 28, 2014
//hw3pr4.cpp

#include "std_lib_facilities_4.h"

//Approximate square root
double my_sqrt_1(double n){
	double x = 1;
	for (int i=0; i < 10; i++){
		x = (x+(n/x))/2;
	}
	return x;
}

//Calculate square root more accurately
double my_sqrt_2(double n){
	double result = 1;
	if (n > 8.0/5.0){
		while(n > 8.0/5.0){
			n = n/4.0;
			result = result*2.0;
		}
	}
	else if (n < 2.0/5.0){
		while(n < 2.0/5.0){
			n = n*4.0;
			result = result/2.0;
		}
	}
	return result*my_sqrt_1(n);
}

int main(){
	cout << setw(20) << "n" << setw(20) << "sqrt(n)" << setw(20) << "my_sqrt_2(n)" << setw(20) << "relative error %" << "\n";
	for(auto k : {-100, -10, -1, 0, 1, 10, 100}){
		double n = M_PI * pow(10.0, k);
		double relative_error_per_cent = 100*((my_sqrt_2(n)-sqrt(n))/sqrt(n));
		//cout goes here
		cout << setw(20) << n << setw(20) << sqrt(n) << setw(20) << my_sqrt_2(n) << setw(20) << relative_error_per_cent << "\n";
	}
	return 0;
}