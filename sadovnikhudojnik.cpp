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

ll n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	scanf("%lld", &n);

	ll res = 1;
	for(int i=1; i<n; i++) res *= 2;

	res *= 3;

	// cout<<res;
	printf("%lld\n", res);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}