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
vi gv[100100], grv[100100], nv[100100];
bool used[100100];
vi order;
int col[100100];
int rt[100100];


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

	freopen("firesafe.in", "r", stdin);
	freopen("firesafe.out", "w", stdout);
	scanf("%d\n%d", &n, &m);
	for(int i=0; i<m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		a--; b--;
		gv[a].pb(b);
		grv[b].pb(a);
	
	}

	for(int i=0; i<n; i++){
		if(!used[i]) dfs(i);
	}

	reverse(order.begin(), order.end());

	for(int i=0; i<sz(order); i++){
		if(col[order[i]] == 0){
			clr++;
			paint(order[i], clr);
			rt[clr] = order[i];
		}
	}

	for(int i=0; i<n; i++){
		int from = i;
		for(int j=0; j<gv[i].size(); j++){
			int to = gv[i][j];
			if(col[from] != col[to]){
				nv[col[from]].pb(col[to]);
			}
		}
	}


	vi ans;
	for(int i=1; i<=clr; i++){
		if(nv[i].empty()){
			ans.pb(rt[i]);
		}
	}
	cout<<sz(ans)<<endl;
	for(int i=0; i<sz(ans); i++){
		cout<<ans[i]+1<<" ";
	}

		

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}