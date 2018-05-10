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

ll n, a[100100];
ll prefix_sum[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
		if(i == 0)
			prefix_sum[i] = a[i];
		else
			prefix_sum[i] = prefix_sum[i - 1] + a[i];
	}


	for(int i=0; i<n; i++) cout<<prefix_sum[i]<<" ";



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}