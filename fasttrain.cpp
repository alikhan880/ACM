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
vector<pair<string, pii> > v;
vector<pair<string, int> >ans;
int convert(string x){
	int f11 = ((x[0] - '0') * 10 + (x[1] - '0')) * 60 + ((x[3] - '0') * 10 + (x[4] - '0'));
	return f11;
}



bool comp(pair<string, int> a, pair<string, int> b){
	if(a.second > b.second) return false;
	return true;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d\n", &n);
	for(int i=0; i<n; i++){
		// cout<<i<<endl;
		string s, x, y;
		getline(cin, s);
		// cout<<s<<endl;
		string t = "";
		int it = 0;
		// while(it < sz(s)){
		while(s[it] != '"') it++;
		if(s[it] == '"'){
			t += s[it];
			it++;
			while(s[it] != '"'){
				t += s[it];
				it++;
			}
			t += s[it];
			it += 2;
		}
		while(s[it] != ' '){
			x += s[it];
			it++;
		}
		it++;
		while(it < sz(s) && s[it] != ' '){
			y += s[it];
			it++;
		}
		// }
		// cin>>x>>y;
		v.pb(mp(t, mp(convert(x), convert(y))));
	}

	for(int i=0; i<sz(v); i++){
		// if(abs(v[i].second.first - v[i].second.second) != 0)
			if(v[i].second.first < v[i].second.second)
				ans.pb(mp(v[i].first, abs(v[i].second.first - v[i].second.second)));
			else if(v[i].second.first >= v[i].second.second)
				ans.pb(mp(v[i].first, 1440 - abs(v[i].second.first - v[i].second.second)));
	}
	sort(ans.begin(), ans.end(), comp);

	string ansx = ans[0].first;
	double hr = (double)ans[0].second/60.0;
	int anss = (int)round(650.0 / hr);
	printf("The fastest train is %s.\nIt's speed is %d km/h, approximately.\n", ansx.c_str(), anss);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}