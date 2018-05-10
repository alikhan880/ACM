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

int t, n, m, fup[10100], tin[10100], timer;
bool used[10100];
vi gv[10100];
set<int> s;

void dfs(int v, int p = -1){
	used[v] = true;
	tin[v] = fup[v] = timer++;
	int children = 0;
	for(int i=0; i<sz(gv[v]); i++){
		int to = gv[v][i];
		if(to == p) continue;
		if(used[to]) fup[v] = min(fup[v], tin[to]);
		else{
			dfs(to, v);
			fup[v] = min(fup[v], fup[to]);
			if(fup[to] >= tin[v] && p != -1) s.insert(v);
			children++;
		}
		if(p == -1 && children > 1){
			s.insert(v);
		}
	}
}
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k=0; k<t; k++){
		s.clear();
		for(int i=0; i<n; i++) used[i] = false, tin[i] = 0, gv[i].clear(), fup[i] = 0;
		scanf("%d %d", &n, &m);
		while(m--){
			int a, b;
			scanf("%d %d", &a, &b);
			a--; b--;
			gv[a].pb(b);
			gv[b].pb(a);
		}
		for(int i=0; i<n; i++){
			if(!used[i]) dfs(i);
		}

		printf("Case %d: %d\n", k + 1, sz(s));

	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}