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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n, mx, sum;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		sum = sum - a + b;
		mx = max(mx, sum);
	}

	printf("%d\n", mx);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}