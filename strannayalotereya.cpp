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
vector<vector<char> > v;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>s;
	for(int i = 0; i < sz(s); i++){
		for(int j = i + 1; j < sz(s); j++){
			vector<char> t;
			for(int k = 0; k < sz(s); k++){
				if(k != i && k != j){
					t.pb(s[k]);
				}
			}
			v.pb(t);
		}
	}


	sort(v.rbegin(), v.rend());

	// for(int i = 0; i < sz(v); i++){
	// 	for(int j = 0; j < sz(v[i]); j++){
	// 		cout<<v[i][j];
	// 	}
	// 	cout<<endl;
	// }
	    
	for(int i = 0; i < sz(v[0]); i++) cout<<v[0][i];                      


	return 0;
}