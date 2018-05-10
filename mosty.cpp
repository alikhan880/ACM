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
#define sz(a) a.size()
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n, m;

vi v[20200];


int in[20200];
bool used[20200];
int fup[20200];
int timer = 0;
map<pii, int> pairs;
vector<pii> v1;
set<int> st;

void dfs(int s, int pr){
	used[s] = true;
	fup[s] = in[s] = ++timer;

	for(int i=0; i<v[s].size(); i++){
		int to = v[s][i];
		if(to == pr) continue;
		if(used[to]){
			fup[s] = min(fup[s], in[to]);
		}

		else{
			dfs(to, s);
			fup[s] = min(fup[s], fup[to]);
			if(fup[to] > in[s])	v1.pb(mp(s, to));
			
		}
	}
}

int main(){

	freopen("bridges.in", "r", stdin);
	freopen("bridges.out", "w", stdout);
	
	// cin>>n>>m;
	scanf("%d%d", &n, &m);

	for(int i=1; i<=m; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		v[x].pb(y);
		v[y].pb(x);

		pairs[mp(x, y)] = i;
		pairs[mp(y, x)] = i;
	}

	for(int i=1; i<=n; i++){
		if(!used[i]) dfs(i, -1);
	}

	for(int i=0; i<v1.size(); i++) st.insert(pairs[mp(v1[i].first, v1[i].second)]);

	cout<<st.size()<<endl;

	for(set<int>::iterator it = st.begin(); it != st.end(); it++){
		cout<<*it<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}