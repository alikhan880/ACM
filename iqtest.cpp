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

// int a[110];
int n;
vi v1, v2;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int x;
		scanf("%d", &x);
		if(x % 2 == 0) v1.pb(i+1);
		else v2.pb(i+1);
	}

	if(sz(v1) > sz(v2)) printf("%d\n", v2[0]);
	else printf("%d\n", v1[0]);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}