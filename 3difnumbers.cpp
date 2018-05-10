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

int t;
ll a[3];
const int m = (int)1e9 + 7;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		for(int i=0; i < 3; i++) scanf("%lld", &a[i]);
		sort(a, a + 3);
		ll ans = (a[0] % m) * ((a[1] - 1) % m) % m * ((a[2] - 2) % m) % m;
		cout<<ans<<endl;
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}