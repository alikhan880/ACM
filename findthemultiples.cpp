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

ll n, s, w, q, a[100100], pref[100100];
map <ll, ll> cnt;

ll bp(ll a, ll n){
	a = a % q;
	ll res = 1;
	while(n){
		if(n & 1) res = (res * a) % q;
		a = (a * a) % q;
		n >>= 1;
	}
	return res;
}

int main(){

	freopen("F.in", "r", stdin);
	// freopen(".out", "w", stdout);
	while(true){
		cin >> n >> s >> w >> q;
		if(n == 0 && s == 0 && w == 0 && q == 0){
			break;
		}
		int g = s;
		for(int i = 1; i <= n; ++i){
			a[i] = (g / 7) % 10;
			if(g % 2 == 0){
				g = g / 2;
			}else{
				g = (g / 2) ^ w;
			}
		}
		pref[n + 1] = 0;
		cnt.clear();
		if(q == 5 || q == 2){
			ll ans = 0;
			for(int i = n; i >= 1; i--){
				if(a[i] != 0) ans += cnt[q];
				if(a[i] % q == 0){
					if(a[i] != 0) ans++;
					cnt[q]++;
				}
			}
			cout<<ans<<endl;
			continue;
		}
		for(int i = n; i >= 1; i--){
			pref[i] = (bp(10, n - i) * a[i] % q + pref[i + 1]) % q;
				
		}
		ll ans = 0;
		cnt[0] = 1;
		for(int i = n; i >= 1; i--){
			if(a[i] != 0){
				ans += cnt[pref[i]];	
			}
			cnt[pref[i]]++;

			// cout<<a[i]<<endl;
			
		}

		// cout<<pref[3]<<endl;
		cout<<ans<<endl;
	}                     
	return 0;
}