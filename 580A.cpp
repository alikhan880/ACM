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

ll n, a[100100], b[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];

	b[0] = 1;
	for(int i=1; i<n; i++){
		if(a[i] >= a[i-1]) b[i] = b[i-1] + 1;
		else b[i] = 1;
	}

	sort(b, b+n);

	cout<<b[n-1];
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}