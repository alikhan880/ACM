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

ll ts, tf, t, n;
vector<ll> v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld %lld %lld %lld", &ts, &tf, &t, &n);
	for(ll i=0; i<n; i++){
		ll x;
		scanf("%lld", &x);
		v.pb(x);
	}
	sort(v.begin(), v.end());
	if(n == 0){
		printf("%lld\n", ts);
		return 0;
	}
	if(v[0] < ts){
		if(v[0] > 1){
			printf("%lld\n", v[0]-1);
			return 0;
		}
	}
	else if(v[0] > ts){
		printf("%lld\n", v[0]-1);
		return 0;
	}
	for(ll i=0; i<sz(v)-1; i++){
		if(v[i] + t < v[i+1] && v[i] + t < tf - t){
			printf("%lld\n", v[i]+t);

			return 0;
		}
	}

	printf("%lld\n", v[0] - 1);




	// fclose(stdin);
	// fclose(stdout);
	return 0;
}