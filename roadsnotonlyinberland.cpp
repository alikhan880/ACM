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


int n;
int cnt;
vi v[1100];
int color[1100], par[1100];
vector<pii> cycles;
vi compomnenty[1100];
void dfs(int s, int pr){
	color[s] = 1;
	for(int i = 0; i<sz(v[s]); i++){
		int to = v[s][i];
		if(to == pr) continue;
		if(color[to] == 0){
			par[to] = s;
			dfs(to, s);
		}
		else if(color[to] == 1){
			int cycle_start = to;
			int cycle_end = s;
			cycles.pb(mp(max(cycle_start, cycle_end), min(cycle_start, cycle_end)));
		}
	}
	color[s] = 2;
	compomnenty[cnt].pb(s);
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;


	for(int i=0; i<n-1; i++){
		int x, y;
		cin>>x>>y;
		x--; y--;
		v[x].pb(y);
		v[y].pb(x);
	}

	for(int i=0; i<n; i++){
		if(!color[i]){
			dfs(i, -1);
			cnt++;
		}
	}

	if(cnt == 1){
		cout<<0;
		return 0;
	}
	cout<<cnt-1<<endl;

	// sort(cycles.begin(), cycles.end());

	vector<pii>::iterator it = cycles.begin();

	for(int i=1; i<cnt; i++){
		cout<<it->first+1<<" "<<it->second+1<<" "<<compomnenty[0][0]+1<<" "<<compomnenty[i][0]+1<<endl;
		it++;
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}