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

double n, m, a;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n>>m>>a;

	ll res =(ll)(ceil(n/a) * ceil(m/a));

	cout<<res;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}