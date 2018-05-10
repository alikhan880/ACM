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

bool used[6];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	rep(i, 0, 5){
		int x, y;
		cin>>x>>y;
		if(x * x + y * y <= 100) used[1] = 1;
		else if((x - 25) * (x - 25) + y * y <= 100) used[2] = 1;
		else if((x - 50) * (x - 50) + y * y <= 100) used[3] = 1;
		else if((x - 75) * (x - 75) + y * y <= 100) used[4] = 1;
		else if((x - 100) * (x - 100) + y * y <= 100)used[5] = 1;
	}
	int cnt = 0;
	rep(i, 1, 6) if(used[i]) cnt++;
	cout<<cnt;

                           


	return 0;
}