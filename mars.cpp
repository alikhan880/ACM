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

int n;
double p[110], q[110], dp[110];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i < n; i++){
		cin>>p[i];
		q[i] = 1 - p[i];
	}	
	dp[0] = p[i] + q[i];
	for(int i = 1; i < n; i++) dp[i] = dp[i - 1] * p[i] + (1 - dp[i - 1]) * q[i];

                       


	return 0;
}