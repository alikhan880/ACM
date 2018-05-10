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

ll n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld", &n);
	ll ans = 0;
	for(ll i = 0; i <= n; i++){
		for(ll j=i; j <= n; j++){
			ans += i + j;
		}
	}

	cout<<ans;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}