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

int k, w;
vector<pii> v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &k, &w);

	for(int i=0; i<3; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		v.pb(mp(x, y));
	}


	for(int i=0; i<sz(v); i++){
		int x1 = v[i].first;
		int vs1 = v[i].second;
		if(x1 <= w && vs1 >= k){
			cout<<"YES";
			return 0;
		}
		for(int j=i+1; j<sz(v); j++){
			int x2 = v[j].first;
			int vs2 = v[j].second;
			if(x1 + x2 <= w){
				if(vs1 + vs2 >= k){
					cout<<"YES";
					return 0;
				}
			}
			for(int k=j+1; k<sz(v); k++){
				int x3 = v[k].first;
				int vs3 = v[k].second;
				if(x1 + x2 + x3 <= w && vs1 + vs2 + vs3 >= k){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}