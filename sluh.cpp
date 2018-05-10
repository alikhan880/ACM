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
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n, m;
vi c, g[100100], comp;
map<int, int> ceny;
vector<vi> comps;

bool used[100100];

void dfs(int v){
	used[v] = 1;
	comp.pb(v);
	for(int i = 0; i < sz(g[v]); i++){
		int to = g[v][i];
		if(!used[to]) dfs(to);
	}
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		c.pb(x);
		ceny[i] = x;
	}
	for(int i = 0; i < m; i++){
		int x, y;
		cin>>x>>y;
		x--, y--;
		g[x].pb(y);
		g[y].pb(x);
	}	           

	for(int i = 0; i < n; i++){
		if(!used[i]){
			comp.clear();
			dfs(i);
			comps.pb(comp);
		}
	}


	ll ans = 0;

	for(int i = 0; i < sz(comps); i++){
		int mini = (int)1e9;
		for(int j = 0; j < sz(comps[i]); j++){
			int t = comps[i][j];
			mini = min(mini, ceny[t]);
		}
		ans += mini;
	}


	cout<<ans;


	return 0;
}