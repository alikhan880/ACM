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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
using namespace std;

ll n, k;

vector<vector<ll> > myvector(110);

vector<vector<ll> > binpow(vector<vector<ll> > v, int t) {
	
	if(t == 1) {
		return v;
	}

	vector<vector<ll> > nv(n);
	vector<vector<ll> > ans(n);

	nv = binpow(v, t/2);

	for(int i = 0; i < n; i++) {
		
		for(int j = 0; j < n; j++) {
			ll cur = 0;
			for(int l = 0; l < n; l++) {
				ll m = nv[i][l] * nv[l][j];
				cur += m;
			}
			ans[i][j] = cur;
		}
	}

	if(t & 1) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				ll cur = 0;
				for(int l = 0; l < n; l++) {
					ll m = ans[i][l] * v[l][j];
					cur += m;
				}
				nv[i][j] = cur;
			}
			
		}

		return nv;	
	}

	return ans;
}

int main() {

	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		for(int j = 1; j <= n; j++) {
			ll to;
			cin >> to;
			myvector[i].pb(to);
		}
	}

	ll to = 0;

	vector<vector<ll> > nv = binpow(myvector, k);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			to = max(to, nv[i][j]);
		}
	}


	cout << to;
	return 0;
}