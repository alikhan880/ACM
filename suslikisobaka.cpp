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

vector<pair<double, double> > v;
double xs, ys, xd, yd;
int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lf %lf %lf %lf %d", &xs, &ys, &xd, &yd, &n);
	// printf("%f %f %f %f\n", xs, ys, xd, yd);
	for(int i=0; i<n; i++){
		double x, y;
		scanf("%lf %lf", &x, &y);
		v.pb(mp(x, y));
	}


	for(int i=0; i<sz(v); i++){
		double fs = v[i].first;
		double sc = v[i].second;
		// printf("%lf %lf\n", fs, sc);
		double sus = sqrt(pow(abs(xs - fs), 2) + pow(abs(ys - sc), 2));
		// printf("sus %f\n", sus);
		double dog = sqrt(pow(abs(xd - fs), 2) + pow(abs(yd - sc), 2));
		// printf("dog %f\n", dog);
		
		if((int)sus*2 <= int(dog)){
			printf("%d\n", i+1);
			return 0;
		} 
	}

	printf("NO\n");
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}