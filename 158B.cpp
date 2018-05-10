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

int n, m;
int c1, c2, c3, c4;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &m);
		if(m == 1) c1++;
		else if(m == 2) c2++;
		else if(m == 3) c3++;
		else if(m == 4) c4++;
	}

	int ans = c4;
	int x = min(c1, c3);
	ans += x;
	c1 -= x; c3 -= x;
	ans += c3;
	ans += c2/2;
	if(c2 % 2 == 1){
		ans += (c1 + 2) / 4;
		if((c1 + 2) % 4 != 0) ans++;
	}
	else{
		ans += c1 / 4;
		if(c1 % 4 != 0) ans++;
	}

	printf("%d\n", ans);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}