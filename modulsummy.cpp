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
vector<pii> neg, pos;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(x < 0) neg.pb(mp(x, i+1));
		else pos.pb(mp(x, i+1));
	}

	int ansp = 0, ansn = 0;
	for(int i=0; i<sz(neg); i++){
		ansn += abs(neg[i].first);
	}
	// cout<<ansn<<endl;
	for(int i=0; i<sz(pos); i++){
		ansp += pos[i].first;
	}

	if(ansn > ansp){
		cout<<sz(neg)<<endl;
		for(int i=0; i<sz(neg); i++) cout<<neg[i].second<<" ";
	}
	else{
		cout<<sz(pos)<<endl;
		for(int i=0; i<sz(pos); i++) cout<<pos[i].second<<" ";
	}



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}