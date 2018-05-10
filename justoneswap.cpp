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

ll t, n, a[100100];
set<ll> s;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld", &t);
	for(int k=0; k<t; k++){
		scanf("%lld", &n);
		s.clear();
		for(int i=0; i<100100; i++) a[i] = 0;
		for(int i=0; i < n; i++){
			ll x;
			scanf("%lld", &x);
			a[x]++;
			s.insert(x);
		}

		ll ans = n * (n - 1) / 2;

		for(set<ll>::iterator it = s.begin(); it != s.end(); it++) if(a[*it] >= 2) ans = 1 + n * (n - 1) / 2;
		for(set<ll>::iterator it = s.begin(); it != s.end(); it++){
			if(a[*it] * (a[*it] - 1) / 2 > 0) ans -= a[*it] * (a[*it] - 1) / 2;
		}

		printf("%lld\n", ans);


	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}