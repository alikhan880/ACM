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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

const int INF = 1000000000;

int t, n, m, s;
vi v[200200];

int main(){

	// freopen(".in", "r", stdin);
	// freopen("out.txt", "w", stdout);
	scanf("%d", &t);

	for(int k=0; k<t; k++){
		bool used[n+1];
		memset(used, false, sizeof(used));
		scanf("%d %d", &n, &m);
		for(int i=0; i<m; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			v[x].pb(y);
			v[y].pb(x);
			// used[mp(x, y)] = true;
			// used[mp(y, x)] = true;
		}

		scanf("%d", &s);



		vi d(n+1, INF);

		d[s] = 0;
		used[s] = true;
		set<pair<int, long long> > q;
		int len = 1;

		q.insert(mp(s, 0));

		while(!q.empty()){
			int st = q.begin() -> first;
			q.erase(q.begin());
			// printf("%d\n", d[st]);
			for(int i=0; i<v[st].size(); i++){
				if(!used[v[st][i]]){
					used[v[st][i]] = true;
					// used[mp(i, st)] = true;
					int to = v[st][i];

					if(d[st] + len <= d[to]){
						q.erase(mp(to, d[to]));
						d[to] = d[st] + len;
						q.insert(mp(to, d[to]));
					}
				}	
			}
		}

		for(int i=1; i<=n; i++){
			if(i!=s) printf("%d ", d[i]);
		}

		// printf("%d\n", d[2]);
		cout<<endl;

	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}