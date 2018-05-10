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

vector<bool> prime (120120, true);
vector<char> k;
vi v;
void de(){
	prime[0] = prime[1] = false;
	for (int i=2; i<=120120; ++i)
	if (prime[i]){
		v.pb(i);
		if (i * 1ll * i <= 120120)
			for (int j=i*i; j<=120120; j+=i)
				prime[j] = false;
		}

	// for(int i=0; i<20; i++) cout<<v[i]<<" ";
		// cout<<endl;

	for(int i=0; i<sz(v); i++){
		int x = v[i];
		while(x > 0){
			char c = (x % 10) + '0';
			cout<<c<<endl;
			k.pb(c);
			x /= 10;
		}
	}
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	de();
	for(int i=0; i<20; i++) cout<<k[i];
		cout<<endl;
	int m;
	vector<char> ans;
	cin>>m;
	for(int i=0; i<m; i++){
		int x;
		cin>>x;
		--x;
		ans.pb(k[x]);
	}
	for(int i=0; i<sz(ans); i++) cout<<ans[i];
	// fclose(stdout);
	return 0;
}