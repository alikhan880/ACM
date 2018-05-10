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

int n;
double ans;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	double lastx = 0, lasty = 0;
	for(int i=0; i<n; i++){
		double x, y;
		scanf("%lf %lf", &x, &y);
		double rast = sqrt(pow((x - lastx), 2) + pow((y - lasty), 2));
		ans += rast;
		lastx = x;
		lasty = y;		
	}
	ans += sqrt(pow(lastx, 2) + pow(lasty, 2));
	printf("%.3lf", ans);



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}