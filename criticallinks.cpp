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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int t, fup[10100], tin[10100], n;

vi v[10100];
vector <pii> bridges;

bool used[10100];
int timer;

bool comp(pii a, pii b){
	if(a.first > b.first) return false;
	if(a.first == b.first){
		if(a.second > b.second) return false;
	}
	return true;
}

void dfs(int s, int pr){
	used[s] = true;

	fup[s] = tin[s] = ++timer;

	for(int i=0; i<sz(v[s]); i++){
		int to = v[s][i];
		if(to == pr) continue;
		if(used[to]) fup[s] = min(fup[s], tin[to]);
		else{
			dfs(to, s);
			fup[s] = min(fup[s], fup[to]);
			if(fup[to] > tin[s]){
				if(to < s) bridges.pb(mp(to, s));
				else bridges.pb(mp(s, to));
			}
		}
	}
}


int main(){

	// freopen("input.txt", "r", stdin);
	// freopen(".out", "w", stdout);
	
	scanf("%d", &t);

	for(int i=0; i<t; i++){
		for(int j=0; j<n; j++) v[j].clear(), fup[j] = 0, tin[j] = 0, used[j] = false;
		bridges.clear();
		timer = 0;
		scanf("%d", &n);

		for(int j=0; j<n; j++){
			int x, y;
			scanf("%d (%d)", &x, &y);
			for(int k=0; k<y; k++){
				int r;
				scanf("%d", &r);
				v[x].pb(r);
			} 
		}

		for(int j=0; j<n; j++){
			if(!used[j]) dfs(j, -1);
		}

		printf("Case %d:\n", i+1);
		printf("%d critical links\n", sz(bridges));
		sort(bridges.begin(), bridges.end(), comp);
		for(vector<pii>::iterator it = bridges.begin(); it!=bridges.end(); it++){
			printf("%d - %d\n", it->first, it->second);
		}

		

	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}