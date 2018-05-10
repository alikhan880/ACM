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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

ll n, m, k, x, y;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// cin>>n>>m>>k>>x>>y;
	scanf("%lld %lld %lld %lld %lld", &n, &m, &k, &x, &y);

	ll T;

	if(n == 1) T = m;
	else T = n * m + (n - 2) * m;

	ll polnT = k / T;
	ll ostatok = k % T;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}