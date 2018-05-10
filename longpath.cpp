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

int n, m;
vi v[100100];
bool used[100100];
vi topsort;
int child[100100];

void dfs(int s){
	used[s] = true;
	for(int i=0; i<sz(v[s]); i++){
		int to = v[s][i];
		if(!used[to]) dfs(to);
	}
	topsort.pb(s);
}

int main(){

	freopen("longpath.in", "r", stdin);
	freopen("longpath.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		x--; y--;
		v[x].pb(y);
	}

	for(int i=0; i<n; i++){
		if(!used[i]) dfs(i);
	}

	
	for(int i=0; i<sz(topsort); i++){
		int ver = topsort[i];
		
		for(int j=0; j<sz(v[ver]); j++){
			int to = v[ver][j];
			child[ver] = max(child[ver], child[to]);
		}
		if(v[ver].size() > 0) child[ver]++;
	}

	int maxi = -200000;
	for(int i=0; i<n; i++) maxi = max(maxi, child[i]);
	cout<<maxi;
	
	return 0;
}