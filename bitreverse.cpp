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

int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	vi v;
	while(n > 0){
		v.pb(n%2);
		n /= 2;
	}

	reverse(v.rbegin(), v.rend());
	// for(int i=0; i<sz(v); i++){
		// cout<<v[i]<<" ";
	// }
	// cout<<endl;
	int ans = 0;
	for(int i=0; i<sz(v); i++){
		ans += (int)(pow(2.0, i)) * v[i];
	}

	cout<<ans;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}