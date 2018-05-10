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


int n, xs, ys, xf, yf;
queue<pair<pii, int> > q;
bool used[30][30];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>xs>>ys>>xf>>yf;

	q.push(mp(mp(xs, ys), 0));

	while(!q.empty()){
		pair<pii, int> t = q.front();
		q.pop();
		int tx = t.first.first;
		int ty = t.first.second;
		int cnt = t.second;
		used[tx][ty] = 1;
		if(tx == xf && ty == yf){
			cout<<cnt;
			return 0;
		}

		if(tx + 2 <= n && ty + 1 <= n && !used[tx + 2][ty + 1]) q.push(mp(mp(tx + 2, ty + 1), cnt + 1));
		if(tx + 2 <= n && ty - 1 >= 1 && !used[tx + 2][ty - 1]) q.push(mp(mp(tx + 2, ty - 1), cnt + 1));
		if(tx - 2 >= 1 && ty + 1 <= n && !used[tx - 2][ty + 1]) q.push(mp(mp(tx - 2, ty + 1), cnt + 1));
		if(tx - 2 >= 1 && ty - 1 >= 1 && !used[tx - 2][ty - 1]) q.push(mp(mp(tx - 2, ty - 1), cnt + 1));
		
		if(tx + 1 <= n && ty + 2 <= n && !used[tx + 1][ty + 2]) q.push(mp(mp(tx + 1, ty + 2), cnt + 1));
		if(tx + 1 <= n && ty - 2 >= 1 && !used[tx + 1][ty - 2]) q.push(mp(mp(tx + 1, ty - 2), cnt + 1));
		if(tx - 1 >= 1 && ty + 2 <= n && !used[tx - 1][ty + 2]) q.push(mp(mp(tx - 1, ty + 2), cnt + 1));
		if(tx - 1 >= 1 && ty - 2 >= 1 && !used[tx - 1][ty - 2]) q.push(mp(mp(tx - 1, ty - 2), cnt + 1));


	}                 


	return 0;
}