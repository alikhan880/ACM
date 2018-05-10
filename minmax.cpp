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

int t, n, a[50500];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// cin>>t;
	scanf("%d", &t);
	for(int k=0; k<t; k++){
		// cin>>n;
		scanf("%d", &n);
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		sort(a, a + n);
		ll mult = n - 1;
		// cout<<a[0] * 1ll * mult;
		printf("%lld\n", a[0] * 1ll * mult);
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}