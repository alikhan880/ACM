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
map<int, int> cn;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &m);
	// printf("%d %d\n",n, m );
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

	int mn = 100000;

	for(int i=0; i<n; i++){
		int cnt = 0;
		for(int j=0; j<m; j++){
			if(a[i][j] == '.') ++cnt;
		}
		cn[i] = cnt;
	}



	for(int i=0; i<n; i++) mn = min(mn, cn[i]);
	printf("%d\n", mn);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}