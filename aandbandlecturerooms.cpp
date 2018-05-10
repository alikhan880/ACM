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

int n, m, l = 17;
vi v[100100];
int timer;
// int tin[100100], tout[100100];
int tin[100100], tout[100100];
// vector<vector<int> > up;
int up[100100][17];

void dfs(int s, int p){
	tin[s] = ++timer;
	up[s][0] = p;
	// cout<<s<<" "<<tin[s]<<" "<<tout[s]<<endl;

	for(int i=1; i<=l; i++) up[s][i] = up[up[s][i-1]][i-1];

	for(int i=0; i<sz(v[s]); i++){
		int to = v[s][i];
		if(to != p){
			dfs(to, s);
		}
	}
	tout[s] = ++timer;
	// cout<<s<<" "<<tout[s]<<endl;

}

bool upper(int a, int b){
	return tin[a] <= tin[b] && tout[b] <= tout[a];
}

int lca(int a, int b){
	if(upper(a, b)) return a;
	if(upper(b, a)) return b;
	for(int i=l; i>=0; i--){
		if(!upper(up[a][i], b)){
			a = up[a][i];
		}
	}
	return up[a][0];
}

int main(){

	scanf("%d", &n);
	for(int i=0; i<n-1; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		v[x].pb(y);
		v[y].pb(x);
	}

	dfs(1, -1);
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		int res = lca(x, y);
		printf("%d\n", res);
	}


	return 0;
}