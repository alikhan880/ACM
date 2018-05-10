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

int k, n, w;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%d%d%d", &k, &n, &w);

	int sum = 0;

	for(int i = 1; i <= w; i++) sum += i * k;

	if(sum > n)	printf("%d\n", abs(n - sum));
	else printf("%d\n", 0);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}