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

int n, a[32];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	a[0] = 0; 
	a[1] = 1;
	cin>>n;

	for(int i=2; i<=n; i++){
		a[i] = a[i-1] + a[i-2];
	}

	cout<<a[n];


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}