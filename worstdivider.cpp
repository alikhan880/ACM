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
#define repb(i,a,b) for(int i = a; i >= b; i--)
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


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	string s;
	cin>>s;
	cout<<1;
	repb(i, sz(s) - 1, 0)
		if(s[i] == '0') cout<<0;
		else break;                           


	return 0;
}