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
#define MOD (int)1e9;

using namespace std;

int k, p, dp[1000100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>k>>p;
	if(k == 2 && p == 1){
		cout<<0;
		return 0;
	}
	dp[2] = dp[3] = 1;
	for(int i=3; i <= k; i++){
		if(i % 2 == 0) dp[i] = dp[i - 1] % p + dp[i / 2] % p;
		else dp[i] = dp[i - 1];
	}
	cout<<dp[k] % p;
	return 0;
}