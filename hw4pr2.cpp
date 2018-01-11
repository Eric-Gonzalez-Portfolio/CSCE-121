//Eric E. Gonzalez
//CSCE-121-502
//Due: October 07, 2014
//hw4pr2.cpp

#include "std_lib_facilities_4.h"

double a;
double b;
double c;

int main(){
	try{
		
		//Receive input and check for special conditions
		cin >> a >> b >> c;
		
		if(a==0 && b==0 && c==0){
			cout << "X can be any number (real or complex)\n";
		}
		else if(a==0 && b==0 && c!=0){
			cout << "Equation is inconsistent\n";
		}
		else if(a==0){
			cout << -c/b << endl;
			cout << b*(-c/b)+c << endl;
		}
		else if(a!=0 && b==0 && c==0){
			cout << "0\n";
			cout << "0\n";
		}
		
		
		else{
			double quad_pos = (-b + sqrt(b*b - 4*a*c))/(2*a);		//Quadratic Formula
			double quad_neg = (-b - sqrt(b*b - 4*a*c))/(2*a);
			double residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;		//ax^2+bx+c
			double residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
			cout << "Here are the roots: \n";
			cout << quad_pos << endl;
			cout << quad_neg << endl;
			cout << "Residual values: \n";
			cout << residual_1 << endl;
			cout << residual_2 << endl;
			return 0;
		}
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
