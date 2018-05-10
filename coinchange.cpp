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

int t, n, k, coins[110], cnt[110], dp[1100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int cs = 0; cs < t; cs++){
		scanf("%d %d", &n, &k);
		for(int i=0; i<n; i++) coins[i] = 0, cnt[i] = 0;
		for(int i=0; i<=k; i++) dp[i] = 0;
		for(int i=0; i<2*n; i++){
			if(i < n) scanf("%d", &coins[i]);
			else scanf("%d", &cnt[i - n]);		
		}

		dp[0] = 1;
		for(int i=0; i<n; i++){
			for(int j = k; j >= 0; j--){
				for(int r = 1; r <= cnt[i]; r++){
					if(coins[i] * r <= j){
						dp[j] += dp[j - coins[i] * r];
					}
					dp[j] %= (int)(1e8 + 7);
				}
			}
		}

		printf("Case %d: %d\n", cs + 1, dp[k]);
		
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}