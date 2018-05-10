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

ll n;
ll rec(ll a){
	if(a < 3) return 0;
	if(a == 3) return 1;
	if(a % 2 == 0) return 2 * rec(a / 2);
	else return rec(a / 2) + rec(a / 2 + 1);
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	ll ans = rec(n);
	cout<<ans;
                           


	return 0;
}