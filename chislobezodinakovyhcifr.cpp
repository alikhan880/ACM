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

int n;
vi v;

bool check(int x){
	vi t;
	set<int> q;
	while(x > 0){
		int temp = x % 10;
		t.pb(temp);
		q.insert(temp);
		// cout<<x<<" "<<temp<<endl;
		x /= 10;
	}

	if(sz(t) == 1) return true;
	if(sz(t) != sz(q)) return false;
	else return true;
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;                         
	int cnt = 1;
	while(sz(v) <= n){
		if(check(cnt)){
			v.pb(cnt);
		}
		cnt++;
	}

	cout<<v[n - 1];

	return 0;
}