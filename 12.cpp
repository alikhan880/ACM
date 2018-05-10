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

int n, x, y, x2, y2, x3, y3, x4, y4, x5, y5, c;

bool check(int nx, int ny, int nx1, int ny1, int nx2, int ny2, int nx3, int ny3, int nx4, int ny4){
	int minX = min(nx1, min(nx2, min(nx3, nx4)));
	int maxX = max(nx1, max(nx2, max(nx3, nx4)));
	int minY = min(ny1, min(ny2, min(ny3, ny4)));
	int maxY = max(ny2, max(ny2, max(ny3, ny4)));

	if(nx < minX || nx > maxX || ny < minY || ny > maxY) return false;
	return true;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d %d %d %d %d %d %d %d %d", &x, &y, &x2, &y2, &x3, &y3, &x4, &y4, &x5, &y5);
		if(check(x, y, x2, y2, x3, y3, x4, y4, x5, y5)) c++;	
	}

	printf("%d\n", c);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}