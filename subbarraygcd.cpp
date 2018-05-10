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

int t, n, a[100100];

int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	scanf("%d", &t);
	for(int k=0; k < t; k++){
		scanf("%d", &n);
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		int ans = 0;
		for(int i=0; i<n; i++) ans = gcd(ans, a[i]);
		if(ans != 1){
			cout<<-1<<endl;
			continue;
		}
		cout<<n<<endl;

		// for(int i=0; i<n; i++) cout<<dp[i]<<" ";
		// cout<<endl;
		
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}