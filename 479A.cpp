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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int a, b, c, maxi = 0;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>a>>b>>c;
	maxi = a + b + c;
	maxi = max(maxi, a * b * c);
	maxi = max(maxi, a * (b + c));
	maxi = max(maxi, (a + b) * c);

	cout<<maxi;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}