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

ll dp[400];
ll n, v, k;
bool check = false;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld %lld %lld", &n, &v, &k);
	dp[1] = v;
	for(int i=2; i<=n; i++){
		if(v - (i-1) * k > 0){
			dp[i] = dp[i - 1] + (v - (i - 1) * k);
		}
		else{
			check = true;
			// cout<<"HESLL";
			dp[i] = dp[i - 1];
		}
	}

	if(!check){
		printf("YES %lld\n", dp[n]);
	}
	else
		printf("NO %lld\n", dp[n]);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}