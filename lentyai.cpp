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

int n, l = 0, r = 31;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	while(n--){
		int x, y;
		scanf("%d %d", &x, &y);
		l = max(l, x);
		r = min(r, y);
	}

	if(l > r){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}