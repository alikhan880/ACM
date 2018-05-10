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

int n, m, clr;
map<pii, bool> de;
vi gv[10100], grv[10100], nv[10100];
int col[10100];
vi order;
bool used[10100];

void dfs(int v){
	used[v] = true;
	for(int i=0; i<sz(gv[v]); i++){
		int to = gv[v][i];	
		if(!used[to]) dfs(to);
	}
	order.pb(v);
}

void paint(int v, int clr){
	col[v] = clr;

	for(int i=0; i<sz(grv[v]); i++){
		int to = grv[v][i];
		if(col[to] == 0) paint(to, clr);
	}
}


int main(){

	freopen("condense2.in", "r", stdin);
	freopen("condense2.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		// if(!de[mp(x, y)] && x != y){
			x--, y--;
			gv[x].pb(y);
			grv[y].pb(x);
			// de[mp(x, y)] = true;
		// }
	}

	for(int i=0; i<n; i++){
		if(!used[i]) dfs(i);
	}

	reverse(order.begin(), order.end());
	set<pii> setik;
	for(int i=0; i<sz(order); i++){
		if(col[order[i]] == 0){
			clr++;
			paint(order[i], clr);
		}
	}
	for(int i=0; i<n; i++){
		int from = i;
		for(int j=0; j<gv[i].size(); j++){
			int to = gv[i][j];
			if(col[from] != col[to] && !de[mp(from, to)]){
				// nv[col[from]].pb(col[to]);
				setik.insert(mp(col[from], col[to]));
				de[mp(from, to)] = true;
			}
		}
	}
	printf("%d\n", sz(setik));
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}