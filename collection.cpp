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
map<int, int> cnt;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	                          
	cin>>n;
	for(int i=0; i < n; i++){
		int x;
		cin>>x;
		cnt[x]++;
	}

	int ans = 0;

	for(map<int, int>::iterator it = cnt.begin(); it != cnt.end(); it++){
		int val = it -> second;
		if(val >= 2) ans += val - 1;
	}

	cout<<ans;

	return 0;
}