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

int a[30], b[30], c[30];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int n;
	cin>>n;
	if(n == 0){
		cout<<1;
		return 0;
	}
	a[0] = b[0] = c[0] = 1;
	for(int i=1; i<n; i++){
		a[i] = a[i-1] + b[i-1] + c[i-1];
		b[i] = b[i - 1] + c[i - 1];
		c[i] = a[i];
	}

	int ans = a[n - 1] + b[n - 1] + c[n - 1];
	cout<<ans;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}