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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n, m;
int cnt[100[5];

char a[100][100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}


	for(int i=0; i<100; i++){
		for(int j=0; j<5; j++){
			cnt[i][j] = (int)1e9;
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] >= '1' && a[i][j] <= '9') cnt[i][0] = min(min(cnt[i][0], j), n - j);
			else if(a[i][j] >= 'a' && a[i][j] <= 'z') cnt[i][1] = min(min(cnt[i][1], j), n - j);
			else cnt[i][2] = min(min(cnt[i][2], j), n - j);
		}
	}
	int x;

	vector<pii> v[5];
	for(int i=0; i<n; i++){
		// x = min(min(cnt[i][0], cnt[i][1]), cnt[i][2]);
		v[0].pb(mp(cnt[i][0], i));
		v[1].pb(mp(cnt[i][1], i));
		v[2].pb(mp(cnt[i][2], i));
	}

	for(int i=0; i<5; i++) sort(v[i].begin(), v[i].end());

	

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}