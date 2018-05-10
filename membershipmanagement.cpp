#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
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

int n, x, ans;
vector <int> g[100000];
map <string , int> cnt;
int used[100000];

int dfs(int v){
	used[v] = 1;
	if(g[v].size() == 0){
		ans++;
		// cout<<v<<endl;
	}
	for(int i = 0; i < g[v].size(); i++){
		int to = g[v][i];
		if(!used[to]) 
			dfs(to);
	}
}

vector<string> decode(string s){
	int len = sz(s), k = 0;
	vector<string> ans;
	while(s[k] != ':') k++;
	string temp = "";
	for(int i = 0; i < k; i++) temp += s[i];
	ans.pb(temp);
	if(!cnt[temp]){
		cnt[temp] = x++;
		// cout<<x<<" "<<temp<<endl;
	}
	int point = ++k;
	while(point < len){
		if(s[point] == '.'){
			string t = "";
			for(int i = k; i < point; i++) t+=s[i];
			ans.pb(t);
			if(!cnt[t]) {
				cnt[t] = x++;
				// cout<<x<<" "<<t<<endl;
			}
			break;
		}
		if(s[point] == ','){
			string t = "";
			for(int i = k; i < point; i++) t+=s[i];
			ans.pb(t);
			if(!cnt[t]){
				cnt[t] = x++;
				// cout<<x<<" "<<t<<endl;
			} 
			k = ++point;
		}
		else point++;

	}

	return ans;
}


int main(){

	freopen("A.in", "r", stdin);
	// freopen(".out", "w", stdout);
	while(true){
		cin>>n;
		if(n == 0) return 0;
		ans = 0;
		vector<string> v;
		cnt.clear();
		for(int i = 0; i < x; ++i){
			g[i].clear();
			used[i] = 0;
		}
		x = 0;
		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			v = decode(s);
			for(int i = 0; i < v.size(); ++i){
				//cout << v[i] << " ";
				if(i != 0){
					g[cnt[v[0]]].pb(cnt[v[i]]);
				}
			}
			//cout << endl;
		}		
		dfs(0);
		cout << ans << endl;
	}


	return 0;
}