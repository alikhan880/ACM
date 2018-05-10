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

int n, m;
char a[110][110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &m);

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}

	int ans = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i>0){
				if(a[i-1][j] == '.') ans++;
			}
			if(i<n-1){
				if(a[i+1][j] == '.') ans++;
			}
			if(j>0){
				if(a[i][j-1] == '.') ans++;
			}
			if(j<m-1){
				if(a[i][j+1] == '.') ans++;
			}
		}
		ans += ans/4;
	}
	printf("%d\n", ans);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}