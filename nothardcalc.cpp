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

ll n, k;
vector<ll> v;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>k;
	while(n > 0){
		v.pb(n % k);
		n /= k;
	}
	reverse(v.begin(), v.end());
	// cout<<sz(v);
	ll pr = 1, sm = 0;
	for(int i=0; i<sz(v); i++){
		pr *= v[i];
		sm += v[i];
	} 

	cout<<pr - sm;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}