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
bool used[3];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		v.pb(x);
	}

	used[0] = used[1] = 0;
	used[2] = 1;

	for(int i = 0; i < n; i++){
		int x = v[i];
		if((x == 1 && used[0] == 1) || (x == 2 && used[1] == 1) || (x == 3 && used[2] == 1)){
			cout<<"NO";
			return 0;
		}
		if(x == 1){
			if(used[1]){
				used[1] = 0;
				used[2] = 1;
			}
			else if(used[2]){
				used[2] = 0;
				used[1] = 1;
			}
		}
		if(x == 2){
			if(used[0]){
				used[0] = 0;
				used[2] = 1;
			}
			else if(used[2]){
				used[2] = 0;
				used[0] = 1;
			}
		}
		if(x == 3){
			if(used[0]){
				used[0] = 0;
				used[1] = 1;
			}
			else if(used[1]){
				used[1] = 0;
				used[0] = 1;
			}
		}

	}

	cout<<"YES";



	return 0;
}