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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


int n, m;
vi v[10100], v1;
bool used[10100];

void dfs(int x){
	used[x] = true;
	v1.pb(x);
	for(int i=0; i<v[x].size(); i++){
		if(!used[v[x][i]]){
			dfs(v[x][i]);
		}
	}
}


int main(){

	freopen("connect2.in", "r", stdin);
	freopen("connect2.out", "w", stdout);
	cin>>n>>m;
	int cnt = 0;
	for(int i=0; i<m; i++){
		int u, t;
		cin>>u>>t;
		v[u].pb(t);
		v[t].pb(u);
	}


	for(int i=1; i<=n; i++){
		v1.clear();
		if(!used[i]){
			dfs(i);
		}
		// for(int j = 0; j < v1.size(); j++){
		// 	cout<<v1[i]<<" ";
		// }

		// cout<<endl;
		if(!v1.empty()){
			cnt++;
		}
		// v1.clear();
	}


	cout<<cnt;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}