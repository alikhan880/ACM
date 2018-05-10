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

int t, a[150], b[150];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int k = 2;
	a[0] = 1;
	b[0] = 1;
	for(int i=1; i<=121; i++){
		a[i] = a[i-1]+k;
		k++;
		b[i] = b[i-1] + a[i];
	}
	// for(int i=1; i<=120; i++){

	// }

	for(int i=0; i<121; i++) cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0; i<121; i++) cout<<b[i]<<" ";
	
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dp[n+1];
		dp[0] = 1;
		int ans = -1;
		for(int i=121; i>=0; i--){
			for(int j=n; j>=0; j--){
				if(dp[j]){
					if(j + b[i] <= n){
						dp[j + b[i]] = 1;
						ans = max(ans, j + b[i]);
					}
				}
			}
		}
		cout<<ans<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}