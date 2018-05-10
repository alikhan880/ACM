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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n, a[1100], d[1100];
int main(){

	freopen("lis.in", "r", stdin);
	freopen("lis.out", "w", stdout);
	cin>>n;

	for(int i=0; i<n; i++) cin>>a[i];


	for(int i=0; i<n; i++){
		d[i] = 1;
		for(int j=0; j<i; j++){
			if(a[j]<a[i]){
				d[i] = max(d[i], 1+d[j]);
			}
		}
	}

	int ans = d[0];

	for(int i=0; i<n; i++){
		ans = max(ans, d[i]);
	}

	cout<<ans;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}