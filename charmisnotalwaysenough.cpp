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

int t, n, m;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k=0; k < t; k++){
		scanf("%d %d", &n, &m);
		int ans = 0;
		for(int i = 0; i < n; i++){
			int x;
			scanf("%d", &x);
			if(x % m != 0){
				ans += m - x % m;
			}
		}
		printf("%d\n", ans);
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}