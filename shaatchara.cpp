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

int t, n, a[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k=0; k < t; k++){
		scanf("%d", &n);
		for(int i=0; i < n; i++) scanf("%d", &a[i]);
		ll z = a[0];
		for(int i=1; i < n; i++) z = z ^ a[i];
		ll ans = 0;
		for(int i=0; i<n; i++){
			if(a[i] >= (z ^ a[i])) ans++;
		}
		if(z == 0) printf("Case %d: 0\n", k + 1);
		else printf("Case %d: %lld\n", k + 1, ans);
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}