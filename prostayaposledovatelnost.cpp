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

int dp[1010], n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	dp[0] = dp[1] = 1;

	for(int i=1; i<=n/2; i++){
		dp[2 * i] = dp[i] + dp[i-1];
		dp[2 * i + 1] = dp[i] - dp[i-1];
	}

	printf("%d\n", dp[n]);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}