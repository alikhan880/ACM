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

int t, n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k = 0; k < t; k++){
		scanf("%d", &n);
		vi v;
		for(int i=0; i<n; i++){
			int x;
			scanf("%d", &x);
			v.pb(x);
		}
		sort(v.begin(), v.end());
		printf("%d\n", v[0] + v[1]);
	}

                           


	return 0;
}