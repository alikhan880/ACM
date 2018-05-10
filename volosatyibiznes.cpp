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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n, a[110], dp[110];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	int maxi = 0, sum = 0;

	for(int i=n-1; i>=0; i--){
		maxi = max(maxi, a[i]);
		// printf("%d\n", maxi);
		sum += maxi;
	}

	printf("%d\n", sum);



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}