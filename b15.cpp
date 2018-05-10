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

int n, m;
vector<pii> shakh, prog;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	int maxlw = 0, minrw = (int)1e9;
	for(int i=0; i<n; i++){
		int a, b;
		cin>>a>>b;
		maxlw = max(maxlw, a);
		minrw = min(minrw, b);
		shakh.pb(mp(a,b));
	}
	cin>>m;
	for(int i=0; i<m; i++){
		int a, b;
		cin>>a>>b;
		prog.pb(mp(a,b));
	}

	// cout<<maxlw<<" "<<minrw<<endl;
	int ans = 0;
	for(int i=0; i<sz(prog); i++){
		int l = prog[i].first;
		int r = prog[i].second;
		ans = max(ans, max(0, l - minrw));
		ans = max(ans, max(0, maxlw - r));

	}

	cout<<ans;
	// cout<<minrw<<" "<<maxlw;

	// cout<<abs(shakh[sz(shakh) - 1].second - prog[sz(prog) - 1].first);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}