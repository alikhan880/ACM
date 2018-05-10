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

using namespace std;

int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	if(n/100000+n/10000%10+n/1000%10==n/100%10+n/10%10+n%10) printf("%s\n", "YES");
	else printf("%s\n", "NO");


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}