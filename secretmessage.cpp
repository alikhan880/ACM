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

int n, k;
string s;
map<char, bool> used;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>k;
	cin>>s;

	sort(s.begin(), s.end());
	cout<<s<<endl;
	vector<char> v;
	for(int i = 0; i < sz(s); i++){
		if(!used[s[i]]){
			used[s[i]] = true;
		}
		else{
			v.pb(s[i]);
		}
	}

	for(int i = 0 ; i < sz(v); i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;
	if(sz(v) == 0) cout<<"NO";
	else{
		cout<<(sz(v) >= k) ? "YES" : "NO";
	}

	return 0;
}