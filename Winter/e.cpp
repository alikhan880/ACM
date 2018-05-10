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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n;
vi v[1010];
int used[1010];
int cycle = 0;
bool ccl = false;
vector<vi> comp;
vector<vi> cycles;
vi compt;
void dfs(int ver, int p){
	used[ver] = 1;
	// comp.pb(mp(c1111))
	compt.pb(ver);
	for(int i=0; i<v[ver].size(); i++){
		int to = v[ver][i];
		if(used[to] == 0) dfs(to, ver);
		else if(used[to] == 1 && to != p){
			cycle++;
			ccl = true; 
			
		}
	}
	used[ver] = 2;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	for(int i=0; i<n-1; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		v[a-1].pb(b-1);
		v[b-1].pb(a-1);
	}

	int cnt = 0;
	for(int i=0; i<n; i++){
		if(used[i] == 0){
			compt.clear();
			dfs(i, -1);
			comp.pb(compt);
			if(ccl) cycles.pb(compt);
			ccl = false;
			// cnt++;
		}
	}

	printf("%d\n", cycle);
	// printf("%d\n", cycles.size());
	for(int i=1; i<comp.size(); i++){
		cout<<comp[i-1][0]+1<<" "<<comp[i-1][comp[i-1].size()-1]+1<<" "<<comp[i-1][0]+1<<" "<<comp[i][0]+1<<endl;
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}