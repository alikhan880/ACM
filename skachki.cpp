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

int n, k;
bool used[110];
vi gv[110];

void dfs(int v){
	used[v] = true;
	for(int i=0; i<sz(gv[v]); i++){
		int to = gv[v][i];
		if(!used[to]) dfs(to);
	}
}
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>k;
	while(true){
		int x, y;
		cin>>x;
		if(x == 0) break;
		cin>>y;
		gv[x].pb(y);
	}

	dfs(k);

	for(int i=1; i <= n; i++){
		if(!used[i]){
			cout<<"No";
			return 0;
		}
	}

	cout<<"Yes";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}