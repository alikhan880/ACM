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

int n, a[110];
bool marked[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	sort(a + 1, a + n + 1);
	int ans = a[2] - a[1] + a[n] - a[n - 1];
	marked[1] = marked[2] = marked[n - 1] = marked[n] = true;
	for(int i=3; i < n - 1; i++){
		if(marked[i]) continue;
		int x = a[i] - a[i - 1];
		int y = a[i + 1] - a[i];
		if(x > y){
			ans += y;
			marked[i + 1] = marked[i] = true;
		}
		else{
			ans += x;
			marked[i] = marked[i - 1] = true;
		}
	}		
	cout<<ans;

                           


	return 0;
}