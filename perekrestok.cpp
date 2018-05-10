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

int a[5][5];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
			cin>>a[i][j];

	if(a[0][3] == 1){
		if(a[0][0] == 1 || a[0][1] == 1 || a[0][2] == 1){
			cout<<"YES";
			return 0;
		}
		if(a[1][0] == 1 || a[2][1] == 1 || a[3][2] == 1){
			cout<<"YES";
			return 0;
		}
	}
	else if(a[1][3] == 1){
		if(a[1][0] == 1 || a[1][1] == 1 || a[1][2] == 1){
			cout<<"YES";
			return 0;
		}
		if(a[0][2] == 1 || a[2][0] == 1 || a[3][1] == 1){
			cout<<"YES";
			return 0;
		}
	}
	else if(a[2][3] == 1){
		if(a[2][0] == 1 || a[2][1] == 1 || a[2][2] == 1){
			cout<<"YES";
			return 0;
		}
		if(a[0][1] == 1 || a[1][2] == 1 || a[3][0] == 1){
			cout<<"YES";
			return 0;
		}
	}
	else if(a[3][3] == 1){
		if(a[3][0] == 1 || a[3][1] == 1 || a[3][2] == 1){
			cout<<"YES";
			return 0;
		} 
		if(a[0][0] == 1 || a[1][1] == 1 || a[2][2] == 1){
			cout<<"YES";
			return 0;
		}
	}

	cout<<"NO";

                           


	return 0;
}