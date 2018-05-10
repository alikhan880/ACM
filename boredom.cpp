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

vector<ll> v;
ll n, dp[200200], m[200200];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.pb(x);
		m[x]++;
	}
	sort(v.begin(), v.end());
	dp[0] = 0;
	dp[1] = m[1];
	for(ll i=2; i<=v[sz(v) - 1]; i++) dp[i] = max(dp[i-2] + m[i] * 1ll * i, dp[i-1]);

	cout<<dp[v[sz(v) - 1]];

	// fclose(stdin);
	// fclose(stdou		t);
	return 0;
}