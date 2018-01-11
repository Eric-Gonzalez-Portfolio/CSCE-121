//Eric E. Gonzalez
//CSCE 121-502
//Due: October 21,2014
//hw6pr3.cpp

#include "std_lib_facilities_4.h"

vector<int> binary_vect;

//Account for input of 0
bool print_zero(int n){
	if (n==0)
		return true;
	else
		return false;
}

//Print decimal value as binary and fill vector
void print_binary(int n){
	if (n > 0){
		print_binary(n/2);
		if (n%2==0){
			cout << 0;
			binary_vect.push_back(0);
		}
		else{
			cout << 1;
			binary_vect.push_back(1);
		}
	}
}

//Run and display values
main()
try
{
	int i;
	cout<<"Enter a number to convert to binary: ";
	while (cin >> i){
		binary_vect.clear();
		if (i >= 0){
			cout<<"That is ";
			
			if (print_zero(i)==true){
				cout << 0;
				binary_vect.push_back(0);
			}
			else
				print_binary(i);
			
			int a = 0;
			int b = binary_vect.size() - 1;
			
			/*Check if vector has even or odd number of digits and check
			whether they are the same as a and b converge toward center digit*/
			
			//Even vector
			if (binary_vect.size()%2 == 0){
				while (binary_vect[a] == binary_vect[b]){
					//Palindrome if all digits match
					if (a==b-1){
						cout << " which is a palindrome.";
						break;
					}
					a=a+1;
					b=b-1;
				}
				//Not a palindrome if any digits differ
				if (binary_vect[a] != binary_vect[b])
					cout << " which is not a palindrome.";
			}
			//Odd vector
			else{
				while (binary_vect[a] == binary_vect[b]){
					//Palindrome if all digits match
					if (a==b){
						cout << " which is a palindrome.";
						break;
					}
					a=a+1;
					b=b-1;
				}
				//Not a palindrome if any digits differ
				if (binary_vect[a] != binary_vect[b])
					cout << " which is not a palindrome.";
			}
			cout << endl;
		}
		else
			cout << "Negative number--try again\n";
		cout<<"Enter a number to convert to binary: ";
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