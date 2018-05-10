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

ll n, k, x, a[1001000];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld %lld %lld", &n, &k, &x);
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
	if(k == 0){
		sort(a, a+n);
		printf("%lld %lld\n", a[n-1], a[0]);
		return 0;
	}
	if(k % 2 == 0){
		int i = 10;
		while(i--){
			sort(a, a+n);
			for(int i=0; i<n; i++){
				if(i%2==0) a[i] = a[i]^x;
			}
			sort(a, a+n);
		}
		printf("%lld %lld\n", a[n-1], a[0]);

	}
	else{
		int i = 5;
		while(i--){
			sort(a, a+n);
			for(int i=0; i<n; i++){
				if(i%2==0) a[i] = a[i]^x;
			}
			sort(a, a+n);
		}
		printf("%lld %lld\n", a[n-1], a[0]);
		return 0;
	}




	// fclose(stdin);
	// fclose(stdout);
	return 0;
}