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

int n, m, b[110][110];
char a[110][110];

bool check(char x, int i, int j){
	if(x == '.') return true;
	if(x == 'R') if(b[i][j] >= 4) return true;
	if(x == 'G') if(b[i][j] == 2 || b[i][j] == 3 || b[i][j] == 6 || b[i][j] == 7) return true;
	if(x == 'B') if(b[i][j] == 1 || b[i][j] == 3 || b[i][j] == 5 || b[i][j] == 7) return true;
	return false;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>a[i][j];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>b[i][j];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!check(a[i][j], i, j)){
				cout<<"NO";
				return 0;
			}
		}
	}

	cout<<"YES";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}