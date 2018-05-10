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

typedef vi lnum;
const int base = (int)1e9;
int n;
lnum dp[1100][2];

lnum add(lnum a, lnum b){
	int carry = 0;
	for(int i=0; i < max(sz(a), sz(b)) || carry; i++){
		if(i == sz(a)){
			a.pb(0);
		}
		a[i] += carry + (i < sz(b) ? b[i] : 0);
		carry = a[i] >= base;
		if(carry) a[i] -= base;
	}
	return a;
}

void print(lnum a){
	printf("%d", a.empty() ? 0 : a.back());
	for(int i = sz(a) - 2; i >= 0; i--){
		printf("%09d", a[i]);
	}
}

lnum read(string s){
	lnum a;
	for(int i=sz(s); i > 0; i-=9){
		if(i < 9){
			a.pb(atoi(s.substr(0, i).c_str()));
		}
		else
			a.pb(atoi(s.substr(i - 9, 9).c_str()));
	}
	return a;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	string a, b;
	cin>>a>>b;
	print(add(read(a), read(b)));
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}