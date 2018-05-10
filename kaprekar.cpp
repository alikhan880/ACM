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

map<int, bool> used;
int cnt;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int n;
	cin>>n;
	while(!used[n]){
		used[n] = true;
		vi v(4);
		while(n > 0){
			int x = n % 10;
			n /= 10;
			// cout<<x<<endl;
			v.pb(x);
		}
		sort(v.rbegin(), v.rend());
		int f = v[3] * 1000 + v[2] * 100 + v[1] * 10 + v[0];

		int s = v[0] * 1000 + v[1] * 100 + v[2] * 10 + v[3];
		// cout<<f<<" "<<s<<endl;
		n = s - f;
		// cout<<n<<endl;
		cnt++;
	}

	cout<<n<<endl;
	cout<<cnt-1;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}