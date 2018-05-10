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

string s;
int n;
vector<pii> v;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s>>n;
	if(n == 0){
		cout<<0;
		return 0;
	}
	for(int k = 0; k < n; k++){
		string t;
		cin>>t;
		int cnt = 0;
		for(int i = 0; i < sz(t); i++){
			if(s[i] != t[i]) cnt++;
		}
		v.pb(mp(cnt, k + 1));
	}

	sort(v.begin(), v.end());

	int cnt = 1;
	int min = v[0].first;
	for(int i = 1; i < sz(v); i++) if(v[i].first == min) cnt++;

	cout<<cnt<<endl;
	for(int i = 0; i < sz(v); i++) if(v[i].first == min) cout<<v[i].second<<" ";	                          


	return 0;
}