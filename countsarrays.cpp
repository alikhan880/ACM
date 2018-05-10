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

int t, n, a[100100], dp[100100][2];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k=0; k<t; k++){
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			dp[i][0] = 0;
			dp[i][1] = 1;
			scanf("%d", &a[i]);
		}
		for(int i = 1; i < n; i++){
			if(a[i] >= a[i - 1]){
				dp[i][1] += dp[i - 1][1];
			}
			else{
				dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
			}
		}
		// for(int i=0; i<n; i++){
			// cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
		// }
		ll ans = 0;
		for(int i=0; i<n; i++) ans += dp[i][1];
		cout<<ans<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}