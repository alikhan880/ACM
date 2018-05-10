#include <iostream>

using namespace std;

string num;

int main(){

	
	cin>>num;
	int c = 0;

	for(int i=0; i<num.size(); i++){
		if(num[i] == '0' || num[i] == '6' || num[i] == '9') c++;
		if(num[i] == '8') c+=2;
	}

	cout<<c;
	return 0;
}