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

int t, n, a[100100], dp[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		dp[i] = 0;
		scanf("%d", &a[i]);
	}

	for(int i=0; i < n; i++){
		dp[i] = 1;
		for(int j=0; j < i; j++){
			if(a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	int ans = dp[0];
	for(int i=0; i<n; i++) ans = max(ans, dp[i]);
	cout<<ans;
	
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}