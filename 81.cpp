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

int n;
vi v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.pb(x);
	}

	sort(v.begin(), v.end());

	cout<<v[0]<<" "<<v[n-1];


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}