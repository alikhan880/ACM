#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

string s;
int n;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s>>n;
	if(n > 0){
		string temp = "";
		for(int i = 0; i < n; i++){
			temp += s;
		}
		if(sz(temp) > 1023){
			for(int i = 0; i < 1024; i++){
				cout<<temp[i];
			}
		}
		else{
			cout<<temp;
		}
		return 0;
	}            
	if(sz(s) % abs(n) != 0){
		cout<<"NO SOLUTION";
		return 0;
	}
	int minsize = sz(s) / abs(n);

	string str1 = "";
	for(int i = 0; i < minsize; i++) str1 += s[i];
	
	string str2 = "";
	for(int i = sz(s) - minsize; i < sz(s); i++) str2 += s[i];

	if(str2 == str1){
		cout<<str1;
	}             
	else{
		cout<<"NO SOLUTION";
	}

	return 0;


	return 0;
}