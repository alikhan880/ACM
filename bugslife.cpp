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

int t, n, m;
vi gv[2200];
int cl[2200];
bool used[2200];
bool check = false;
void dfs(int v, int col){
	used[v] = 1;
	cl[v] = col;
	for(int i=0; i < sz(gv[v]); i++){
		int to = gv[v][i];
		if(used[to]){
			if(cl[to] == cl[v]){
				check = true;
				return;
			}
		}
		if(!used[to]){
			dfs(to, col^1);
		}

	}
}

void solve(int cs){
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) gv[i].clear(), cl[i] = -1, used[i] = false;
	check = false;
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		x--; y--;
		gv[x].pb(y);
		gv[y].pb(x);
	}

	for(int i=0; i<n; i++) if(!used[i]) dfs(i, 0);

	// for(int i=0; i<n; i++){
	// 	cout<<i + 1<<"	Color:"<<cl[i]<<endl;
	// }
	if(check){
		printf("Scenario #%d:\n", cs);
		printf("Suspicious bugs found!\n");
	}
	else{
		printf("Scenario #%d:\n", cs);
		printf("No suspicious bugs found!\n");
	}
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int cs = 0; cs < t; cs++){
		solve(cs + 1);
	}	


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}