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

vi gv[500100];
int up[500100][20];
int tin[500100], tout[500100];
int timer, l;
bool used[500100];

void dfs(int v, int p){
	used[v] = true;
	tin[v] = ++timer;
	up[v][0] = p;
	
	for(int i=1; i<=l; i++){
		up[v][i] = up[up[v][i-1]][i-1];
	}
	
	for(int i=0; i<sz(gv[v]); i++){
		int to = gv[v][i];
		if(!used[to]) dfs(to, v);
	}
	
	tout[v] = ++timer;
}

bool upper(int a, int b){
	return tin[a] <= tin[b] && tout[a] >= tout[b];
}

int lca(int a, int b){

	if(upper(a, b)) return a;
	if(upper(b, a)) return b;
	for(int i=l; i>=0; i--){
		if(!upper(up[a][i], b)){
			a = up[a][i];
		}
	}
	if(a == 0) return 1;
	return up[a][0];
}

vector<pii> qrs;

int main(){

	// freopen("lca.in", "r", stdin);
	// freopen("lca.out", "w", stdout);
	int k;
	scanf("%d", &k);
	int n = 1;

	while(k--){
		int x, y;
		string s;
		char c[10];
		scanf("%s %d %d", c, &x, &y);
		s = c;
		if(s == "ADD"){
			n++;
			gv[x].pb(y);
			gv[y].pb(x);
			
		}
		else qrs.pb(mp(x, y));
	}

	while((1 << l) <= n) l++;

	for(int i=0; i<500001; i++){
		for(int j=0; j<20; j++){
			up[i][j] = 0;
		}
	}

	dfs(1, 1);

	for(int i=0; i<sz(qrs); i++){
		printf("%d\n", lca(qrs[i].second, qrs[i].first));
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}