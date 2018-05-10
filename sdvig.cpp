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

int n, a[100100], it, mini = (int)1e9;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i] < mini){
			mini = a[i];
			it = i;
		}
	}

	for(int i=it; i < n; i++) cout<<a[i]<<" ";
	for(int i=0; i < it; i++) cout<<a[i]<<" ";


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}