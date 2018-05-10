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

int n, m, p, q;
vi gv[100100];
bool used[100100];
int col[100100];
vi ans;
bool check = false;
void dfs(int st, int fin, int clr){
	used[st] = true;
	col[st] = clr;
	if(st == fin){
		check = true;
		return;
	}
	for(int i=0; i<gv[st].size(); i++){
		int to = gv[st][i];
		if(!used[to]) dfs(to, fin, clr);
	}
	ans.pb(st);	
}
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d %d %d", &n, &m, &p, &q);
	for(int i=0; i<m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		gv[a].pb(b);
	}
	int j = 0;
	dfs(p, q, ++j);

	// cout<<sz(ans);
	for(int i=0; i<sz(ans); i++) cout<<ans[i]<<" ";



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}