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

int p, y;
vector<bool> prime(500501, true);



void go(){
	prime[0] = prime[1] = false;
	for(int i = 2; i <= 500500; i++){
		if(prime[i]){
			if(i * 1ll * i <= n){
				for(int j = i * i; j <= 500500; j += i){
					prime[j] = false;
				}
			}
		}
	}
}




int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>p>>y;




	return 0;
}