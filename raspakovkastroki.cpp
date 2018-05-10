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

vector<pair<int, char> > v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	string s;
	cin>>s;
	v.clear();
	for(int i=0; i<sz(s); i++){
		string t = "";
		while(s[i] >= '0' && s[i] <= '9'){
			t += s[i];
			i++;
		}
		if(t != ""){
			if(sz(t) == 1){
				v.pb(mp(t[0] - '0', s[i]));
			}
			else if(sz(t) > 1){
				int k = (t[0] - '0') * 10 + (t[1] - '0');
				v.pb(mp(k, s[i]));
			}
		}
		else{
			v.pb(mp(1, s[i]));
		}
	}
	int it = 0;
	for(int i=0; i<sz(v); i++){
		for(int j=0; j<v[i].first; j++){
			cout<<v[i].second;
			it++;
			if(it == 40){
				it = 0;
				cout<<endl;
			}
		}
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}