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

int n, a[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	sort(a, a + n);

	int sums = 0, sumk = 0;
	for(int i=0; i < n/2; i++) sumk += a[i];
	for(int i=n/2; i<n; i++) sums += a[i];

	cout<<sums - sumk;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}