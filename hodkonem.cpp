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

int n, m, b[80][80];


int main(){

	freopen("knight.in", "r", stdin);
	freopen("knight.out", "w", stdout);
	scanf("%d%d", &n, &m);


	b[0][0] = 1;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i == n - 1 && j == m-1) continue;
			if(!b[i][j]) continue;
			if(i + 2 < n && j + 1 < m){
				b[i+2][j + 1] += b[i][j];
			}
			if(i + 1 < n && j + 2 < m){
				b[i + 1][j + 2] += b[i][j];
			}
		}
	}


	cout<<b[n-1][m-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
