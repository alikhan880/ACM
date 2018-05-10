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

int t, n, k, dp[1100][1100], a[1100], ans;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int cs = 0; cs < t; cs++){
		ans = (int)-1e9;
		scanf("%d %d", &n, &k);
		for(int i=0; i<=n; i++){
			a[i] = 0;
			for(int j=0; j<=1024; j++)
				dp[i][j] = 0;
		}
		for(int i=1; i<=n; i++) scanf("%d", &a[i]);
		// for(int i=0; i < n; i++) printf("%d ", a[i]);
			// printf("\n");
		dp[0][0] = 1;

		for(int i=1; i <= n; i++){
			for(int j=0; j < 1024; j++){
				dp[i][j] = dp[i - 1][j] | dp[i - 1][j ^ a[i]];
			}
		}

		for(int i=0; i<1024; i++){
			// cout<<dp[n][i]  * (i ^ k) << " ";
			ans = max(ans, dp[n][i]  * (i ^ k));
		}
		printf("%d\n", ans);
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}