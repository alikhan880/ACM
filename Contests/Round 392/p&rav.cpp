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

int n, a[1000100];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n;
	int maxi = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		maxi = max(maxi, a[i]);
	}

	int res = 0;

	for(int i=0; i<n; i++){
		res = res + (maxi - a[i]);
	}

	cout<<res;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}