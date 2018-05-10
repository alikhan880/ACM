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

int fib[1010];
int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	fib[0] = fib[1] = 1;

	for(int i=2; i<=n; i++) fib[i] = (fib[i-1] + fib[i-2])%10;


	printf("%d\n", fib[n]);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}