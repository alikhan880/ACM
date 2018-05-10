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

int n;
int a[11] = {1, 6, 28, 120, 496, 2016, 8128, 32640, 130816};
int main(){
	// ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	for(int i = 8; i >= 0; i--){
		if(n % a[i] == 0){
			cout<<a[i];
			return 0;
		}
		// else{
			// cout<<a[i]<<endl;
		// }
	}

	// cout<<3 % 1;

	return 0;
}