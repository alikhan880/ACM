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
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n, a[100100];


int bin_search(int arr[], int x, int l, int r){
	while(l <= r){
		int mid = (l + r) >> 1;
		if(arr[mid] == x){
			return mid;
		}
		else if(arr[mid] < x){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return l;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i = 0; i < n; i++) cin>>a[i];             

	cout<<"Search for: "<<endl;
	int x;
	cin>>x;

	cout<<bin_search(a, x, 0, n - 1);

	return 0;
}