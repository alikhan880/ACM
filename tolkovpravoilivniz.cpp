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

int n, m, a[80][80], b[80][80];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d%d", &n, &m);

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &a[i][j]);

	b[0][0] = 1;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i == n - 1 && j == m-1) continue;
			if(!b[i][j]) continue;
			int to = a[i][j];	
			if(i + to < n){
				b[i+to][j] += b[i][j];
			}
			if(j + to < m){
				b[i][j+to] += b[i][j];
			}
		}
	}

	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<m; j++){
	// 		cout<<b[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	cout<<b[n-1][m-1];
	// fclose(stdout);
	return 0;
}
