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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


int n, s, f, a[110][110];
vi v[110];
bool used[110];
int main(){

	freopen("bfs.in", "r", stdin);
	freopen("bfs.out", "w", stdout);
	cin>>n>>s>>f;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j] == 1) v[i].pb(j);
		}
	}

	queue<pair<int, int> > q;
	q.push(mp(s, 0));
	// q.pop();
	int res = 0;
	while(!q.empty()){
		pii p = q.front();
		// cout<<p.first<<" "<<p.second<<endl;
		used[p.first] = true;
		if(p.first == f){
			res = p.second;
			break;
		}
		for(int i=0; i<v[p.first].size(); i++){
			if(!used[v[p.first][i]])
			q.push(mp(v[p.first][i], p.second + 1));
		}
		q.pop();
	}

	cout<<res;
	fclose(stdin);
	fclose(stdout);
	return 0;
}