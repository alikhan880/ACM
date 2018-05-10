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

int n, a[110], dp[110];

int main(){

	freopen("ladder.in", "r", stdin);
	freopen("ladder.out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	dp[0] = 0;
	dp[1] = a[1];
	for(int i=2; i<=n; i++){
		dp[i] = max(dp[i-2] + a[i], dp[i-1] + a[i]);
	}

	cout<<dp[n];


	fclose(stdin);
	fclose(stdout);
	return 0;
}