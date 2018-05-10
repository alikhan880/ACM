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

vector<pair<string, string> > ans;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	string a, b;
	cin>>a>>b;
	ans.pb(mp(a, b));
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int last = sz(ans) - 1;
		string x, y;
		cin>>x>>y;
		if(x == ans[last].first) ans.pb(mp(y, ans[last].second));
		else ans.pb(mp(y, ans[last].first));

	}

	for(int i=0; i<sz(ans); i++){
		// printf("%s %s\n", );
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}