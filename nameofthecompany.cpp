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

string s1, s2;
vector<char> oleg, igor;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s1>>s2;

	for(int i=0; i<sz(s1); i++){
		oleg.pb(s1[i]);
		igor.pb(s2[i]);
	}

	sort(oleg.begin(), oleg.end());
	sort(igor.rbegin(), igor.rend());
	// cout<<sz(oleg)<<sz(igor);
	int h = 0, itoleg = 0, itigor = 0;
	while(h < sz(s1)){
		if(h % 2 == 0){
			cout<<oleg[itoleg++];
		}
		else
			cout<<igor[itigor++];
		h++;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}