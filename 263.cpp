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

int n, s, e, clr, crl;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>s>>e;
	clr = abs(e - s) - 1;
	crl = n - clr - 2;
	// for(int i=n+s; i>e-1; i--) crl++;
	// cout<<crl<<endl;
	cout<<min(clr, crl);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}