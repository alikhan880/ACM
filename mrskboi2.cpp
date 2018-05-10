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

bool check(int x, int y){
	if(a[x][y] == '*') return false;
	else{
		if(x > 0 && x < n-1 && y > 0 && y < m-1){
			if(a[x-1][y] == '.' && a[x+1][y] == '.' && a[x][y-1] == '.' && a[x][y+1] == '.') return true;
		}
		else if(x == 0 && y == 0){
			if(a[x+1][y] == '.' && a[x][y+1] == '.') return true;
		}
		else if(x == n-1 && y == 0){
			if(a[x-1][y] == '.' && a[x][y+1] == '.') return true;
		}
		else if(x == 0 && y == m-1){
			if(a[x][y-1] == '.' && a[x+1][y] == '.') return true;
		}
		else if(x == n-1 && y == m-1){
			if(a[x][y-1] == '.' && a[x-1][y] == '.') return true;
		}
		else if(x == 0 && y > 0 && y < m-1){
			if(a[x+1][y] == '.' && a[x][y-1] == '.' && a[x][y+1] == '.') return true;
		}
		else if(x == n-1 && y > 0 && y < m-1){
			if(a[x-1][y] == '.' && a[x][y-1] == '.' && a[x][y+1] == '.') return true;
		}
		else if(y == 0 && x > 0 && x < n-1){
			if(a[x][y+1] == '.' && a[x+1][y] == '.' && a[x-1][y] == '.') return true;
		}
		else if(y == m-1 && x > 0 && x < n-1){
			if(a[x][y-1] == '.' && a[x+1][y] == '.' && a[x-1][y] == '.') return true;
		}
	}
	return false;
}

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
			if(check(i, j)) ans++;
		}
	}

	cout<<ans;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}