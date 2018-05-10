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

int t, n, k;
ll prefix_sum[1100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int cs=0; cs<t; cs++){
		for(int i=0; i<1100; i++) prefix_sum[i] = 0;
		vi v;
		scanf("%d %d", &n, &k);
		for(int i=0; i < n; i++){
			int x;
			scanf("%d", &x);
			v.pb(x);
		}
		sort(v.rbegin(), v.rend());
		prefix_sum[0] = v[0];
		for(int i=1; i < n; i++) prefix_sum[i] = prefix_sum[i - 1] + v[i];

		ll l = 0, r = (int)1e14;
		while(l < r - 1){
			int idx;
			ll mid = (l + r) >> 1;
			// cout<<mid<<endl;
			for(int i=0; i < n; i++) if(v[i] >= mid) idx = i;
			if((k - idx + 1) * mid > (prefix_sum[n - 1] - prefix_sum[idx])) r = mid;
			else l = mid + 1; 
			// cout<<prefix_sum[n - 1] - prefix_sum[idx]<<endl;
			cout<<r<<endl;
		}

		printf("Case %d: %lld\n", cs + 1, l);

	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}