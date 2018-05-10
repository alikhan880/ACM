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
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n, t, a[110], ans;
int c_t = 86400;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	                          
	cin>>n>>t;
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}

	for(int i=0; i < n; i++){
		if(c_t - a[i] >= t){
			cout<<i + 1;
			return 0;
		}
		else{
			t -= c_t - a[i];
		}
	}

	return 0;
}