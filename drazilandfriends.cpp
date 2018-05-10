#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n, m, b[110], g[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	cin>>n>>m;
	int x;
	cin>>x;
	for(int i=0; i<x; i++){
		int t;
		cin>>t;
		b[t] = 1;
	}

	cin>>x;
	for(int i=0; i<x; i++){
		int t;
		cin>>t;
		g[t] = 1;
	}

	for(int i=0; i < n * m * 2 + 1; i++){
		int r = i % n;
		int l = i % m;
		if(b[r] || g[l]) b[r] = g[l] = 1;
	}

	int cnt1 = 0, cnt2 = 0;
	for(int i=0; i < n; i++) if(b[i] == 1) cnt1++;
	for(int i=0; i < m; i++) if(g[i] == 1) cnt2++;

    if(cnt1 + cnt2 == m + n) cout<<"Yes";
    else cout<<"No";                       


	return 0;
}