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

int n, a[300300];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n-1; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		x--; y--;
		int idx;
		if(a[x] > a[y]) idx = y;
		else idx = x;
		a[idx]++;
	}
	sort(a, a + n);
	printf("%d\n", a[n-1]);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}