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

int n, a[110];
vi v[110];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int x; 
			scanf("%d", &x);
			if(x == 1){
				v[i].pb(j);
			}
		}
	}

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}


	int cnt = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<sz(v[i]); j++){
			if(a[i] != a[v[i][j]]) cnt++;
		}
	}

	printf("%d\n", cnt/2);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}