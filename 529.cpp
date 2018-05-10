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

double x, x2, y, y2;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lf %lf %lf %lf", &x, &y, &x2, &y2);
	// cin>>x>>y>>x2>>y2;

	double res = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));

	printf("%lf\n", res); 
	// cin>>x1>>y1>>x2>>y2;



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}