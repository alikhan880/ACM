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


int n, a[200];
map<int, int> cnt;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);    
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		cnt[a[i]]++;
	}

	int ans = sz(cnt);

	if(cnt[0] > 0){
		ans--;
	}

	cout<<ans;



	return 0;
}