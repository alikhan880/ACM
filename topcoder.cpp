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

int n;
vector<pair<double, string> > ans;

bool comp(pair<double, string> p1, pair<double, string> p2){
	if(p1.first > p2.first) return true;
	return false;
}
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	int ansx = 0;
	while(n--){
		int x;
		cin>>x;
		ansx += x;
		while(x--){
			double q;
			string name;
			cin>>q>>name;
			ans.pb(mp(q, name));
		}
	}

	sort(ans.begin(), ans.end(), comp);

	cout<<ansx<<endl;
	for(int i=0; i<sz(ans); i++) printf("%04.2f %s\n", ans[i].first, ans[i].second.c_str());


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}