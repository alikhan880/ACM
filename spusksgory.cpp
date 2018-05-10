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

int n, a[110][110], dp[110][110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cin>>a[i][j];
		}
	}


	dp[0][0] = a[0][0];
	dp[1][0] = dp[0][0] + a[1][0];
	dp[1][1] = dp[0][0] + a[1][1];
	for(int i=2; i<n; i++){
		for(int j=0; j<=i; j++){
			if(j == 0){
				dp[i][j] = dp[i-1][j] + a[i][j];
			}
			else if(j == i){
				dp[i][j] = dp[i-1][j-1] + a[i][j];
			}
			else{
				dp[i][j] = max(dp[i-1][j-1] + a[i][j], dp[i-1][j] + a[i][j]);
			}
		}
	}

	int ans = -1000;
	for(int i=0; i<n; i++){
		ans = max(ans, dp[n-1][i]);
	}

	cout<<ans;
	// for(int i=0; i<n; i++)
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}