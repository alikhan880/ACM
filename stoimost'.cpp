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

int a[8][8], dp[8][8];

int main(){

	freopen("king2.in", "r", stdin);
	freopen("king2.out", "w", stdout);
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin>>a[i][j];
		}
	}
	dp[7][0] = 0;
	for(int i=6; i>=0; i--){
		dp[i][0] = dp[i+1][0] + a[i][0];
	} 
	for(int i=1; i<8; i++){
		dp[7][i] = dp[7][i-1] + a[7][i];
	}

	for(int i=6; i>=0; i--){
		for(int j=1; j<8; j++){
			dp[i][j] = min(dp[i+1][j] + a[i][j], min(dp[i][j-1] + a[i][j], dp[i+1][j-1] + a[i][j]));
		}
	}


	cout<<dp[0][7];
	fclose(stdin);
	fclose(stdout);
	return 0;
}