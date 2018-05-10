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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
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

	for(int i=0; i<n-3; i++){
		int x = v[i];
		int y = v[i+1];
		int z = v[i+2];
		if(x + y > z && x + z > y && z + y > x){
			printf("YES\n");
			return 0;
		}
	}
		printf("NO\n");



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}