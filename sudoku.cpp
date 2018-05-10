#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n;
bool used[110][110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n * n; i++){
		for(int j=0; j < n * n; j++){
			int x;
			cin>>x;
			used[i][x] = 1;
		}
	}                

	for(int i=1; i <= n * n; i++){
		for(int j = 1; j <= n * n; j++){
			if(!used[i][j]){
				cout<<"Incorrect";
				return 0;
			}
		}
	}
	cout<<"Correct";
	return 0;
}