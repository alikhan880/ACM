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

vi gv[100100], grv[100100], order;
int col[100100], t, n, m;
bool used[100100];
void addEdge(int x, int y){
	if(x > 0 && y > 0){
		gv[x + n].pb(y);
		gv[y + n].pb(x);
		grv[y].pb(x + n);
		grv[x].pb(y + n);
	}
	else if(x > 0 && y < 0){
		gv[x + n].pb(abs(y) + n);
		gv[abs(y)].pb(x);
		grv[abs(y) + n].pb(x + n);
		grv[x].pb(abs(y));
	}
	else if(x < 0 && y > 0){
		gv[abs(x)].pb(y);
		gv[y + n].pb(abs(x) + n);
		grv[y].pb(abs(x));
		grv[abs(x) + n].pb(y + n);
	}
	else if(x < 0 && y < 0){
		gv[abs(x)].pb(abs(y) + n);
		gv[abs(y)].pb(abs(x) + n);
		grv[abs(y) + n].pb(abs(x));
		grv[abs(x) + n].pb(abs(y));
	}
}

void clear(){
	for(int i=1; i<=2 * n; i++){
		used[i] = 0;
		col[i] = 0;
		gv[i].clear();
		grv[i].clear();
	}
	order.clear();
}

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

void solve(int k){
	for(int i = 1; i <= 2*n; i++){
		if(!used[i]) dfs(i);
	}

	reverse(order.begin(), order.end());
	int clr = 0;
	for(int i=0; i<2*n; i++){
		int to = order[i];
		if(col[to] == 0){
			paint(to, ++clr);
		}
	}
	for(int i=1; i<=n; i++){
		if(col[i] == col[i + n]){
			printf("Case %d: No\n", k+1);
			return;
		}
	}

	vi ans;
	int it;
	for(int i=1; i<=n; i++){
		if(col[i] > col[i + n]) ans.pb(i);
	}


	sort(ans.begin(), ans.end());

	printf("Case %d: Yes\n", k + 1);
	printf("%d", sz(ans));
	for(int i=0; i<sz(ans); i++){
		printf(" %d", ans[i]);
	}
	printf("\n");
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);

	for(int k=0; k<t; k++){
		clear();
		scanf("%d %d", &m, &n);
		for(int i=0; i<m; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			addEdge(x, y);
		}

		solve(k);	
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}