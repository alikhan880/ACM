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

int n, a[110];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		int x;
		scanf("%d", &x);
		a[x] = i;
	}

	for(int i=1; i<=n; i++) printf("%d ", a[i]);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}