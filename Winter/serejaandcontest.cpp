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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

ll n, k, a[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld %lld", &n, &k);
	// for(int i=1; i<=n; i++) scanf("%lld", &a[i]);
	int temp = 0, t = 0;
	vi v;
	for(int i=1; i<=n; i++){
		ll x;
		scanf("%lld", &x);
		if(temp + (i - n) * x * (i - t - 1) < k){
			t++;
			v.pb(i);
		}
		else temp = temp + x * (i - t - 1);
	}
	
	for(int i=0; i<v.size(); i++) printf("%d\n", v[i]);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}