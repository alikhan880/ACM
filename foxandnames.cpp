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

vi gv[30], ans;
bool used[30];
int n, cl[30];
string names[110];

void dfs(int v){
	used[v] = 1;
	cl[v] = 1;
	for(int i=0; i < sz(gv[v]); i++){
		int to = gv[v][i];
		if(cl[to] == 1){
			printf("Impossible\n");
			exit(0);
		}
		if(!used[to]) dfs(to);
	}
	cl[v] = 2;
	ans.pb(v);
}

void topsort(){
	for(int i=0; i<26; i++) if(!used[i]) dfs(i);
	reverse(ans.begin(), ans.end());
}

void read(){
	scanf("%d", &n);
	for(int i=0; i<n; i++) cin>>names[i];
}

void build(){
	for(int i=1; i<n; i++){
		string s = names[i-1];
		string t = names[i];
		int k;
		bool check = true;
		for(k = 0; k < min(sz(s), sz(t)); k++){
			if(s[k] != t[k]){
				check = false;
				gv[s[k] - 'a'].pb(t[k] - 'a');
				break;
			 }
			
		}
		if(check && sz(t) < sz(s)){
			printf("Impossible\n");
			exit(0);
		}
	}
}

void print(){
	for(int i=0; i < sz(ans); i++){
		printf("%c", ans[i] + 'a');
	}
}

void solve(){
	read();
	build();
	topsort();
	print();

}

int main(){
	// read();
	// build();
	// for(int i=0; i<26; i++){
		// printf("%c :", i + 'a');
		// for(int j=0; j<sz(gv[i]); j++){
		// 	printf(" %c", gv[i][j] + 'a');
		// }
		// printf("\n");
	// }
	solve();
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}