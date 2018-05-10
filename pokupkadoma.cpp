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

int n, m, k;
vector<pair<int, int> > v, v2;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m>>k;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(x <= k && x > 0) v.pb(mp(i, x));
	}

	sort(v.begin(), v.end());

	vi ans;
	for(int i=0; i<sz(v); i++){
		ans.pb((abs(v[i].first - m + 1) * 10));
	}

	sort(ans.begin(), ans.end());
	cout<<ans[0];
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}