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

int n, a[1100], dp[1100], used[1100];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &a[i]);

	dp[0] = 0; dp[1] = a[1];
	int last = 0;
	for(int i=2; i<=n; i++){
		int x = dp[i - 1] + a[i];
		int y = dp[i - 2] + a[i];
		dp[i] = max(x, y);
		if(x > y){
			used[i - 1] = 1;
			if(i - 1 < last){
				used[last] = 0;
				last = i - 1;
			}
			else last = i - 1;
		}
		else{
			used[i - 2] = 1;
			if(i - 2 < last){
				used[last] = 0;
				last = i - 2;
			}
			else last = i - 2;
		}
	}
	used[n] = 1;
	printf("%d\n", dp[n]);
	for(int i=1; i<=n; i++){
		if(used[i]) printf("%d ", i);
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}