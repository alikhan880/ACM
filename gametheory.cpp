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

int n, m, a[110][110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	                  
	cin>>n>>m;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}        

	int nij = -1111;
	int verh = 1111;

	for(int i = 0; i < n; i++){
		int tempN = 1111;
		for(int j = 0; j < m; j++){
			tempN = min(tempN, a[i][j]);
		}
		nij = max(tempN, nij);
	}

	for(int i = 0; i < m; i++){
		int tempV = -1111;		
		for(int j = 0; j < n; j++){
			tempV = max(tempV, a[j][i]);
		}
		verh = min(tempV, verh);
	}

	cout<<nij<<" "<<verh;




	return 0;
}