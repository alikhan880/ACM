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

int a[2200];
int n;
vi v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		a[i+n] = a[i];
	}

	// for(int i=0; i<2*n; i++){
	// 	cout<<a[i]<<" ";
	// }
	for(int i=1; i<2*n-1; i++){
		v.pb(a[i-1] + a[i] + a[i+1]);
	}
	sort(v.begin(), v.end());

	cout<<v[v.size() - 1];
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}