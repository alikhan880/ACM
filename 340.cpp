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

vi v1, v2;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int x, y, z;

	cin>>x>>y>>z;
	v1.pb(x);
	v1.pb(y);
	v1.pb(z);
	
	cin>>x>>y>>z;
	v2.pb(x);
	v2.pb(y);
	v2.pb(z);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	if((v1[0] - v2[0]) + (v1[1] - v2[1]) + (v1[2] - v2[2]) == 0) cout<<"Boxes are equal";
	else if()
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}