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

int t, l, r;
int a[100100];

bool check(int n){
	vector<char> v;
	while(n > 0){
		int x = n % 10;
		n /= 10;
		char c = x + '0';
		v.pb(c);
	}
	for(int i=0; i<sz(v); i++){
		if(v[i] != v[sz(v) - 1 - i]){
			return false;
		}
	}
	return true;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	for(int i = 1; i <= 100100; i++){
		if(check(i)){
			a[i] = i + a[i - 1];
		}
		else{
			a[i] = a[i - 1];
		}
	}

	cin>>t;
	for(int k=0; k<t; k++){
		cin>>l>>r;
		cout<<a[r] - a[l - 1]<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}