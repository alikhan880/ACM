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

ll n;
vll v;
ll cnt[100100];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld", &n);
	for(int i=0; i<n; i++){
		ll x;
		scanf("%lld", &x);
		// v.pb(x);
		cnt[x + 30000]++;
	}

	for(int i = 30000; i >= -30000; i--){
		if(cnt[i + 30000] > 0){
			for(int j=0; j < cnt[i + 30000]; j++)
				v.pb(i);
		}
	}
	n = sz(v);
	// for(int i=0; i<n; i++) cout<<v[i]<<" ";
	// sort(v.rbegin(), v.rend());
	// for(int i=0; i < n; i++) cout<<v[i]<<" ";
	ll ans1 = v[0] * v[1] * v[2];
	ll ans2 = v[0] * v[1] * v[n - 1];
	ll ans3 = v[n - 1] * v[n - 2] * v[n - 3];
	ll ans4 = v[n - 1] * v[n - 2] * v[0];
	ll ans = max(ans1, max(ans2, max(ans3, ans4)));
	printf("%lld\n", ans);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}