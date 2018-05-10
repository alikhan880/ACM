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


int n, k, t;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>k>>t;

	if(t < k){
		cout<<t;
		return 0;
	}            

	if(t > k && t < n){
		cout<<k;
		return 0;
	}

	if(t == k){
		cout<<n - t;
		return 0;
	}

	if(k == n){
		cout<<k;
		return 0;
	}

	int freq = t / k;
	cout<<n - k - freq;

	return 0;
}