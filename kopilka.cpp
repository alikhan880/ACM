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

int e, f, n, cost[550], weight[550], dp[10100], dp2[10100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d %d", &e, &f, &n);
	int r = abs(f - e);

	for(int i=0; i<n; i++) scanf("%d %d", &cost[i], &weight[i]);

	dp[0] = 0;
	for(int i=0; i < n; i++){
		int w = weight[i];
		int c = cost[i];

		dp[w] = max(dp[w], c);
			
		for(int k=1; k<=r; k++){
			if(dp[k] && k + w <= r){
				dp[k + w] = max(dp[k] + c, dp[k + w]);
			} 
		}
	}

	for(int i=0; i<=r; i++) dp2[i] = (int)1e8;
	dp2[0] = 0;
	for(int i=0; i<n; i++){
		int w = weight[i];
		int c = cost[i];
		dp2[w] = min(dp2[w], c);		
		for(int k = 1; k<=r; k++){
			if(dp2[k] && k + w <= r){
				dp2[k + w] = min(dp2[k] + c, dp2[k + w]);
			}
		}
	}

	// for(int i=0; i<=r; i++) cout<<dp2[i]<<" ";
		// cout<<endl;
	if(dp2[r] == (int)1e8 || dp[r] == 0){
		printf("This is impossible.\n");
		return 0;
	}
	printf("%d %d\n", dp2[r] ,dp[r]);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}