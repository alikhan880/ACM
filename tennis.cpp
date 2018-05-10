#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

ll n, k, a[2000];
map<ll, ll> cnt;
vll v;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>k;
	ll maxi;
	for(int i = 0; i < n; i++){
		ll x;
		cin>>x;
		if(i == 0){
			maxi = x;
			v.pb(x);
			continue;
		}

		if(maxi > x){
			cnt[maxi]++;
		}
		else{
			maxi = x;
			cnt[maxi] = i - 1;
		}
		v.pb(x);
	}

	for(int i = 0; i < n; i++){
		if(cnt[v[i]] >= k){
			cout<<v[i];
			return 0;
		}
	}

	sort(v.rbegin(), v.rend());

	cout<<v[0];





	return 0;
}