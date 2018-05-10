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

int n, m, k;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	cin>>n>>m>>k;
	if(n >= m){
		puts("1");
		return 0;
	}
	if(n <= k){
		puts("NO");
		return 0;
	}
	cout<<(m - n - 1) / (n - k) + 2;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}