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

int n, m, x, y, a[100100], st[100100][17];
int lg[100100];

void precalc(){
	lg[1] = 0;
	for(int i=2; i<=100100; i++) lg[i] = lg[i / 2] + 1;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	precalc();
	// for(int i=0; i<100100; i++) cout<<i << " " <<lg[i]<<endl;
	// return 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) st[i][0] = a[i];

	for(int j = 1; j < 18; j++){
		for(int i=0; i + (1 << j) < n && i < n; i++){
			st[i][j] = max(st[i][j - 1], st[i + (1 << j) + 1][j - 1]);
		}
	}

	cout<<"l, r";
	cin>>x>>y;

	int k = lg[x - y + 1];
	cout<<max(st[x][k], st[y - k + 1][k]);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}