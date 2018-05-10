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
#include <cstring>

#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

string s;

int main(){

	cin>>s;

	for(int i=0; i<sz(s)-2; i++){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			s[i] = ' ';
			s[i+1] = ' ';
			s[i+2] = ' ';
		}
	}
	vector<string> v;
	for(int i=0; i<sz(s); i++){
		while(s[i] == 32 && i<sz(s)) i++;
		string t = "";
		while(s[i] != 32 && i<sz(s)){
			t+=s[i];
			i++;
		}
		// cout<<t<<endl;
		v.pb(t);
	}

	for(int i=0; i<sz(v); i++) cout<<v[i]<<" ";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}