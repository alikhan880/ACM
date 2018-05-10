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
vector<pii> v;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		v.pb(mp(x, y));
	}
	sort(v.begin(), v.end());
	if(n == 2){
		printf("%d\n", v[0].second);
		return 0;
	}


	for(int i=0; i<n; i++){
		printf("%d %d\n", v[i].first, v[i].second);
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}