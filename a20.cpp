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

int n, a[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	sort(a, a + n);
	int min = a[0];
	int max = a[n-1];
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i]>min && a[i]<max) cnt++;
	}
	printf("%d\n", cnt);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}