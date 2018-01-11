//Eric E. Gonzalez
//CSCE-121-502
//Due: September 28, 2014
//hw3pr3.cpp

#include "std_lib_facilities_4.h"
int main(){
	cout << "Submit input, then press CTRL+D\n";		//Prompt for input
	vector<string> words;
	for(string temp; cin>>temp; ){
		words.push_back(temp);
	}
	
	//Count # of "Aggie" variants present in input
	int aggie_count = 0;
	for(int i=0; i<words.size(); ++i){
		if(words[i]=="Aggies" || words[i]=="Aggie" || words[i]=="aggies" || words[i]=="aggie"){
			aggie_count++;
		}
	}
	
	cout << "The word Aggie appears " << aggie_count << " time(s).\n";
	return 0;
}