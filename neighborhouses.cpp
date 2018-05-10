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

int t, n,a[1100], dp[1100][2], dp2[1100][2];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int cs = 0; cs < t; cs++){
		scanf("%d", &n);
		for(int i=0; i<=n; i++){
			a[i] = 0;
			dp[i][0] = dp[i][1] = 0;
			dp2[i][0] = dp2[i][1] = 0;
		}

		for(int i=0; i<n; i++) scanf("%d", &a[i]);

		dp[0][0] = dp[1][1] = 0;
		dp[0][1] = dp[1][0] = a[0];
		for(int i = 2; i < n; i++){
			dp[i][0] = max(dp[i-1][1], dp[i-1][0]);
			dp[i][1] = dp[i - 1][0] + a[i];
		}
		int res = 0;
		res = max(res, dp[n-1][0]);


		dp2[0][1] = dp2[1][0] = dp2[0][0] = 0;
		dp2[1][1] = a[1];

		for(int i=2; i < n; i++){
			dp2[i][0] = max(dp2[i-1][1], dp2[i-1][0]);
			dp2[i][1] = dp2[i-1][0] + a[i];
		}

		int ans = max(res, max(dp2[n - 1][1], dp2[n - 1][0]));

		printf("Case %d: %d\n", cs + 1, ans);
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}