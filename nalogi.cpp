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

#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n;
double a[110], b[110], ans[110];

bool cmp(pair<int, double> a, pair<int, double> b){
	if(a.second < b.second) return false;
	if(a.second == b.second){
		if(a.first > b.first) return false;
	}
	return true;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%lf", &a[i]);
	for(int i=0; i<n; i++) scanf("%lf", &b[i]);

	for(int i=0; i<n; i++) ans[i] = a[i] * b[i] / 100;

	vector<pair<int, double> > v;
	
	for(int i=0; i<n; i++) v.pb(mp(i+1, ans[i]));

	sort(v.begin(), v.end(), cmp);

	printf("%d\n", v[0].first);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}