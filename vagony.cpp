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

int n, a[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				ans++;
			}
		}
	}

	cout<<ans;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}