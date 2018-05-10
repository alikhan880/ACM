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
#define mp make_pair
using namespace std;


ll a[100100], t[4*100100];

inline void build(ll v, ll tl, ll tr){
	if(tl == tr) t[v] = a[tl];
	else{
		ll mid = (tl + tr) / 2;
		build(2 * v, tl, mid);
		build(2 * v + 1, mid + 1, tr);
		t[v] = max(t[2 * v], t[2 * v + 1]);
	}
}

inline ll getMax(ll v, ll tl, ll tr, ll l, ll r){
	if(tl > r || tr < l) return 0;
	if(l <= tl && tr <= r) return t[v];

	ll mid = (tl + tr) / 2;
	ll ans1 = getMax(2 * v, tl, mid, l, r);
	ll ans2 = getMax(2 * v + 1, mid + 1, tr, l, r);

	return max(ans1, ans2);
}

int n, m, x, y;
vector<long long> xA, yA;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
	build(1, 0, n-1);

	scanf("%d %d %d", &m, &x, &y);
	xA.pb(x);
	yA.pb(y);

	for(int i = 1; i < m; i++){
		ll xT = (xA[i-1] + 7) % (n - 1);
		ll yT = (yA[i-1] + 11) % n;
		xA.pb(xT);
		yA.pb(yT);
	}

	// for(int i=0; i<m; i++){
		// cout<<xA[i]<<" "<<yA[i]<<endl;
	// }

	ll sum = 0;

	for(int i=0; i<m; i++){
		sum += getMax(1, 0, n-1, min(xA[i], yA[i]), max(xA[i], yA[i]));
		// cout<<getMax(1, 0, n-1, min(xA[i], yA[i]), max(xA[i], yA[i]))<<endl;
	}

	// cout<<sum;
	printf("%lld", sum);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}