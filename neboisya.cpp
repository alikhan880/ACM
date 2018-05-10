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
map<string, int> me[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int k;
		cin>>k;
		while(k--){
			string v;
			cin>>v;
			me[i][v]++;
		}
	}

	for(int i=1; i<=m; i++){
		// cout<<sz(me[i])<<endl;
		if(sz(me[i]) == 1){
			cout<<"YES";
			return 0;
		}
		for(map<string, int>::iterator it = me[i].begin(); it != me[i].end(); it++){
			// cout<<it->first<<" ";
			if(it->second > 1){
				cout<<"YES";
				return 0;
			}
		}
		// cout<<endl;
	}

	cout<<"NO";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}