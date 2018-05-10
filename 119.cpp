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

vi v[110];
int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	for(int i=0; i<n; i++){
		int x, y, z;
		cin>>x>>y>>z;
		v[i].pb(x);
		v[i].pb(y);
		v[i].pb(z);
	}

	sort(v, v+n);

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}