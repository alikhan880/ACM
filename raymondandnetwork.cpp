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

int n, m, q;
vi v[200200];
int tin[200200], fup[200200];
bool used[200200];
int timer = 0;
map<pair<int, int>, bool> bridge;
void dfs(int st, int fin, int pr){
	used[st] = true;
	tin[st] = fup[st] = timer++;
	if(st == fin) return;
	for(int i=0; i<sz(v[st]); i++){
		int to = v[st][i];
		if(to == pr) continue;
		if(used[to]) fup[st] = min(fup[st], tin[to]);
		else{
			dfs(to, fin, st);
			fup[st] = min(fup[st], fup[to]);
			if(fup[to] > tin[st]){
				bridge[mp(to, st)] = true;
				bridge[mp(st, to)] = true;
			}
		}
	}
}

int used2[200200];
int cnt = 0;
int dfs2(int st, int fin, int pr, int cnt){
	if(st == fin) return cnt;
	used2[st] = true;
	for(int i=0; i<sz(v[st]); i++){
		int to = v[st][i];
		if(to == pr) continue;
		if(bridge[mp(to, st)] || bridge[mp(st, to)]) cnt++;
		if(!used2[to]) dfs2(to, fin, st, cnt);
	}
	// return cnt;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d %d", &n, &m, &q);
	for(int i=0; i<m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].pb(b);
		v[b].pb(a);
	}

	dfs(1, n, 0);
	for(int i=0; i<q; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		cnt = 0;
		for(int j=0; j<=b; j++) used2[j] = false; 
		cout<<dfs2(a, b, 0, cnt)<<endl;
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}