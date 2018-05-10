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


int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	// int res = n / 10 % 10;
	if(n % 7 == 0 || n % 4 == 0 || n % 47 == 0 || n % 744 == 0 || n % 74 == 0 || n % 477 == 0) printf("YES\n");
	else printf("NO\n");


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}