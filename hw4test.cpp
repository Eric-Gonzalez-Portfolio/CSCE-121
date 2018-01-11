#include "std_lib_facilities_4.h"

double a;
double b;
double c;

int main(){
	try{
		cin >> a >> b >> c;
		double quad_pos = (-b + sqrt(b*b - 4*a*c))/(2*a);
		double quad_neg = (-b - sqrt(b*b - 4*a*c))/(2*a);
		double residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;		//ax^2+bx+c
		double residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
		cout << "Here is your number: ";
		cout << quad_pos << endl;
		cout << quad_neg << endl;
		cout << residual_1 << endl;
		cout << residual_2 << endl;
	}
	
	catch(exception& e)
	{
		cerr<<"error: "<<e.what()<<'\n';
		keep_window_open();
		return 1;   // 1 indicates failure
	}
	
	catch(...)
	{
		cerr<<"Oops: Unknown exception\n";
		keep_window_open();
		return 2;  // 2 indicates failure
	}
}
