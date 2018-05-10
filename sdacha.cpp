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
#define MAX (int)1e9
using namespace std;

int n, a[2200], dp[1000100], k;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	scanf("%d", &k);
	sort(a, a + n);
	dp[0] = 0;
	for(int j = 1; j <= k; j++){
		dp[j] = MAX;
		for(int i=0; i < n; i++){
			if(j - a[i] >= 0)
		    	dp[j] = min(dp[j], 1 + dp[j - a[i]]);
	    	
	    }
	}
	
	//for(int i=0; i<= k; i++) cout<<dp[i]<<" ";
	if(dp[k] == MAX) cout<<-1;
	else cout<<dp[k];
                           


	return 0;
}