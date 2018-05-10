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

int n, a[100100], k;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		int x; 
		scanf("%d", &x);
		a[x-1]--;
	}

	for(int i=0; i<n; i++){
		if(a[i] < 0) printf("yes\n");
		else printf("no\n");
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}