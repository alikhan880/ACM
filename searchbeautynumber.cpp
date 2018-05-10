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

int n, m;
map<int, bool> used1, used2;
vector<int> v;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		used1[x] = true;
	}

	for(int i = 0; i < m; i++){
		int x;
		cin>>x;
		used2[x] = true;
	}

	for(int i = 1; i < 10; i++){
		if(used1[i] && used2[i]){
			v.pb(i);
		}
		for(int j = 1; j < 10; j++){
			if(used1[i] && used2[j] || used1[j] && used2[i]){
				v.pb(i * 10 + j);
			}
			// if(used1[j] && used2[i]){
				// v.pb(j * 10 + i);
			// }
		}
	}

	sort(v.begin(), v.end());

	cout<<v[0];


	return 0;
}