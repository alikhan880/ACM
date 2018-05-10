#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	if(n%400==0 || (n%4==0 && n%100 != 0)){
		if(n<10) cout<<"12/09/000"<<n;
		if(n>=10 && n<100) cout<<"12/09/00"<<n;
		if(n>=100 && n<1000) cout<<"12/09/0"<<n;
		if(n>1000) cout<<"12/09/"<<n;
	}
	else{
		if(n<10) cout<<"13/09/000"<<n;
		if(n>=10 && n<100) cout<<"13/09/00"<<n;
		if(n>=100 && n<1000) cout<<"13/09/0"<<n;
		if(n>1000) cout<<"13/09/"<<n;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}