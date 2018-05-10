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

ll n, costs[100100], m, color[100100];
vi gv[100100], grv[100100], topsort;
bool used[100100];
int clr;
pair<ll, ll> c_cost[100100];
void dfs(int v){
	used[v] = 1;
	for(int i=0; i<sz(gv[v]); i++){
		int to = gv[v][i];
		if(!used[to])
			dfs(to);
	}
	topsort.pb(v);
}

void paint(int v, int clr){
	color[v] = clr;
	for(int i=0; i < sz(grv[v]); i++){
		int to = grv[v][i];
		if(color[to] == 0){
			paint(to, clr);
		}
	}
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld", &n);
	for(int i=1; i<=n; i++) scanf("%lld", &costs[i]);
	scanf("%lld", &m);
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		gv[x].pb(y);
		grv[y].pb(x);
	}

	for(int i=1; i<=n; i++) if(!used[i]) dfs(i);

	reverse(topsort.begin(), topsort.end());
	
	for(int i=0; i<sz(topsort); i++){
		// cout<
		int to = topsort[i];
		if(color[to] == 0){
			paint(to, ++clr);
		}
	}


	for(int i=1; i<=clr; i++) c_cost[i].first = (int)(1e9 + 7);

	for(int i=1; i<=n; i++){
		int to = color[i];
		if(c_cost[to].first > costs[i]){
			c_cost[to].first = costs[i];
			c_cost[to].second = 1;
		}
		else if(c_cost[to].first == costs[i]) c_cost[to].second++;
	}

	ll min_val = 0, ways = 1ll;
	for(int i=1; i<=clr; i++){
		min_val += c_cost[i].first;
		ways *= c_cost[i].second;
		ways %= (int)(1e9 + 7);
	}

	printf("%lld %lld\n", min_val, ways);

	// for(int i=1; i<=n; i++) cout<<color[i]<<" ";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}