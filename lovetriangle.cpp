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
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n, col[5500];
vi gv[5500];
bool check = false;

bool dfs(int v){
	col[v] = 1;
	for(int i = 0; i < sz(gv[v]); i++){
		int to = gv[v][i];
		if(col[to] == 0){
			if(dfs(to)) return true;
		}
		else if(col[to] == 1){
			return true;
		}
	}

	col[v] = 2;
	return false;
}



int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	                          
	cin>>n;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		gv[i+1].pb(x);
	}

	for(int i = 1; i <= n; i++){
		if(dfs(i)){
			cout<<"YES";
			return 0;
		}
	}

	cout<<"NO";


	return 0;
}