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

int dp[1200], n;
char b[1200];

int main(){

	// freopen("lepus.in", "r", stdin);
	// freopen("lepus.out", "w", stdout);
	// scanf("%d", &n);
	cin>>n;
	for(int i=0; i<n; i++) cin>>b[i];
	for(int i=1; i<n; i++) dp[i] = -1;
	dp[0] = 0;
	
	for(int i=1; i<n; i++){
		if(b[i] == 'w') continue;
		if(i < 3){
			dp[i] = dp[i - 1];
		}
		else if(i < 5){
			dp[i] = max(dp[i - 1], dp[i - 3]);
		}
		else dp[i] = max(max(dp[i - 1], dp[i - 3]), dp[i - 5]);

		if(b[i] == '"') dp[i]++;
	}

	printf("%d\n", dp[n - 1]);



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}