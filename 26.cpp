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
using namespace std;

double x, y, r, x2, y2, r2;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>x>>y>>r>>x2>>y2>>r2;

	double rast = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));

	if(r+r2>=rast && rast+r2>=r && rast+r>=r2) cout<<"YES";
	else cout<<"NO";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}