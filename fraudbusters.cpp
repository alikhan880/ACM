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
vector<string> v;
int n;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("fraud.in", "r", stdin);
	freopen("fraud.out", "w", stdout);
	                          
	cin>>s>>n;

	for(int i = 0; i < n; i++){
		string t;
		cin>>t;
		v.pb(t);
	}

	vector<string> ans;

	for(int k = 0; k < sz(v); k++){
		bool check = false;
		string temp = v[k];
		for(int i = 0; i < sz(temp); i++){
			if(temp[i] != s[i] && s[i] != '*'){
				check = true;
			}
		}
		if(!check) ans.pb(temp);
	}


	cout<<sz(ans)<<endl;

	for(int i = 0; i < sz(ans); i++) cout<<ans[i]<<endl;



	return 0;
}