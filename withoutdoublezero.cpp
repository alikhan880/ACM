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

int n, k, dp[20], dp0[20];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &k);
	dp[1] = k - 1;
	dp0[1] = 0;

	for(int i=2; i<=n; i++) dp[i] = (dp[i-1] + dp0[i-1]) * (k-1), dp0[i] = dp[i-1];

	printf("%d\n", dp[n] + dp0[n]);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}