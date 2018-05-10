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

int n, a[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	int mini = (int)1e9;
	int idx;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i] < mini) mini = a[i], idx = i;
	}

	for(int i = idx; i < n; i++) cout<<a[i]<<" ";
	for(int i = 0; i < idx; i++) cout<<a[i]<<" ";

                           


	return 0;
}