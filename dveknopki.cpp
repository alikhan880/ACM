#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
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

ll n, m;
bool used[500500];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// scanf("%d %d", &n, &m);
	cin>>n>>m;
	queue<pll> q;

	q.push(mp(n, 0));

	while(!q.empty()){
		pii tmp = q.front();
		q.pop();
		ll numb = tmp.first;
		used[numb] = true;
		ll cnt = tmp.second;
		if(numb == m){
			printf("%d\n", cnt);
			return 0;
		}
		if(2 * numb < 20000 && !used[2 * numb]) q.push(mp(2 * numb, cnt + 1));
		if(numb - 1 > 0 && !used[numb - 1]) q.push(mp(numb - 1, cnt + 1));
	}



	return 0;
}
