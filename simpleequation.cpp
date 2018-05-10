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

int t, n, a, b, c;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>t;
	for(int cs = 0; cs < t; cs++){
		ll ans = 0;
		cin>>n>>a>>b>>c;
		for(int i=0; i<=a; i++){
			for(int j=0; j<=b; j++){
				if(i + j > n) continue;
				int x = n - (i + j);
				ans += min(c, x) + 1;
			}
		}
		cout<<ans<<endl;
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}