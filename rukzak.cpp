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

int s, n, a[400], dp[10100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &s, &n);

	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	sort(a, a + n);
	reverse(a, a + n);

	dp[0] = 1;
	for(int j=0; j<n; j++){
		for(int i=s; i>=0; i--){
			if(dp[i]){
				if(i + a[j] <= s){
					dp[i + a[j]] = 1;
				}
			}
		}
	}

	for(int i=s; i>=0; i--){
		if(dp[i]){
			cout<<i;
			return 0;
		}
	}



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}