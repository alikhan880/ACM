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

int n, a[1100], b[1100];
bool used[500500];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i]>>b[i];
	}      

	int day = a[0], lastX = b[0];

	for(int i = 1; i < n; i++){
		if(a[i] > day) day = a[i];
		else if(a[i] < day){
			while(a[i] <= day) a[i] += b[i];
			day = a[i];
		}
		else{
			day = a[i] + b[i];
		}
	}


	cout<<day;


	return 0;
}