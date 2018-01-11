//Eric E. Gonzalez
//CSCE-121-502
//Due: October 07, 2014
//hw4pr4.cpp

#include "std_lib_facilities_4.h"

double a;
double b;
double c;

double quad_pos;
double quad_neg;
double residual_1;
double residual_2;


int main(){
	try{
		
		//Receive input, establish new variables, and check for special conditions
		cin >> a >> b >> c;
		
		double d_0 = max(abs(a), abs(b));
		double d = max(d, abs(c));
		double new_a = a/d;
		double new_b = b/d;
		double new_c = c/d;
		
		if(new_a==0){
			cout << "Check\n";
			cout << -new_c/new_b << endl;
			cout << new_b*(-new_c/new_b)+new_c << endl;
		}
		else{
			if(d==abs(b)){
				//abs(b)*sqrt(1-4*(new_a)*(new_c));
				quad_pos = (-b + (abs(b)*sqrt(1-4*(new_a)*(new_c))))/(2*a);
				quad_neg = (-b - (abs(b)*sqrt(1-4*(new_a)*(new_c))))/(2*a);
				residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;				//ax^2+bx+c
				residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
				
			}
			else if(d==abs(a) && a>0){
				//sqrt(a)*sqrt((new_b)*b-4*c);
				quad_pos = (-b + (sqrt(a)*sqrt((new_b)*b-4*c)))/(2*a);
				quad_neg = (-b - (sqrt(a)*sqrt((new_b)*b-4*c)))/(2*a);
				residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;				//ax^2+bx+c
				residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
			}
			else if(d==abs(a) && a<0){
				//sqrt(-a)*sqrt(-(new_b)*b+4*c);
				quad_pos = (-b + (sqrt(-a)*sqrt(-(new_b)*b+4*c)))/(2*a);
				quad_neg = (-b - (sqrt(-a)*sqrt(-(new_b)*b+4*c)))/(2*a);
				residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;				//ax^2+bx+c
				residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
			}
			else if(d==abs(c) && c>0){
				//sqrt(c)*sqrt((new_b)*b-4*a);
				quad_pos = (-b + (sqrt(c)*sqrt((new_b)*b-4*a)))/(2*a);
				quad_neg = (-b - (sqrt(c)*sqrt((new_b)*b-4*a)))/(2*a);
				residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;				//ax^2+bx+c
				residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
			}
			else if(d==abs(c) && c<0){
				//sqrt(-c)*sqrt(-(new_b)*b+4*a);
				quad_pos = (-b + (sqrt(-c)*sqrt(-(new_b)*b+4*a)))/(2*a);
				quad_neg = (-b - (sqrt(-c)*sqrt(-(new_b)*b+4*a)))/(2*a);
				residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;				//ax^2+bx+c
				residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
			}
			else{
				quad_pos = (-b + sqrt(b*b - 4*a*c))/(2*a);
				quad_neg = (-b - sqrt(b*b - 4*a*c))/(2*a);
				residual_1 = a*pow(quad_pos,2) + b*quad_pos + c;		//ax^2+bx+c
				residual_2 = a*pow(quad_neg,2) + b*quad_neg + c;
			}
			cout << "Here are the roots: \n";
			cout << quad_pos << endl;
			cout << quad_neg << endl;
			cout << "Residual values: \n";
			cout << residual_1 << endl;
			cout << residual_2 << endl;
		}
		
		return 0;
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
