/*
	@resources:
		https://neerc.ifmo.ru/wiki/
		http://e-maxx.ru/algo/
*/
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

int nstates, nfstates, color, f_state[1000], n_f_state[1000], alphabet_sz, can_reach[1000], component[1000];
bool used[1000], marked[1000][1000];
vector<pair<int, char> > gv[1000], grv[1000], n_gv[1000];
set<char> alphabet;
queue<pii> q;
map<pair<pii, char>, bool> used_;

void init_graph(){
	printf("Enter the size of an alphabet\n");
	scanf("%d", &alphabet_sz);
	
	printf("Enter an alphabet\n");
	for(int i=0; i<alphabet_sz; i++){
		char c;
		scanf("\n%c", &c);
		alphabet.insert(c);
	}
	
	printf("Enter the number of states and final states\n");
	scanf("%d %d", &nstates, &nfstates);

	
	printf("Enter the final states\n");
	for(int i=0; i<nfstates; i++){
		int x;
		scanf("%d", &x);
		// x--;
		f_state[x] = 1;
	}

	printf("Enter the edges(from, to, name_of_edge)\n");
	for(int i=0; i<2 * nstates; i++){
		int x, y;
		char c;
		scanf("%d %d %c\n", &x, &y, &c);
		// printf("%d %d %c\n", x, y, c);
		// x--; y--;
		gv[x].pb(mp(y, c));
		grv[y].pb(mp(x, c));
	}
}

void dfs(int v){
	used[v] = true;
	for(int i=0; i < sz(gv[v]); i++){
		int to = gv[v][i].first;
		if(!used[to]) can_reach[to] = 1, dfs(to);
	}
}

void build(){
	for(int i=1; i <= nstates; i++){
		for(int j=1; j <= nstates; j++){
			if(!marked[i][j] && f_state[i] != f_state[j]){
				marked[i][j] = marked[j][i] = 1;
				q.push(mp(i, j));
			}
		}
	}

	while(!q.empty()){
		pii t = q.front();
		int x = t.first;
		int y = t.second;
		marked[x][y] = marked[y][x] = 1;
		for(set<char>::iterator it = alphabet.begin(); it != alphabet.end(); it++){
			char c = *it;

			for(int i=0; i < sz(grv[x]); i++){
				int to = grv[x][i].first;
				char z = grv[x][i].second;

				if(c == z){
					for(int j=0; j < sz(grv[y]); j++){
						if(grv[y][j].second == z){
							int v = grv[y][j].first;
							if(!marked[to][v]){
								marked[to][v] = marked[v][to] = 1;
								q.push(mp(to, v));
							} 
						}
					}
				}

			}
		}
		q.pop();
	}
}

void minimize(){
	
	for(int i=1; i <= nstates; i++) component[i] = -1;
	component[1] = 1;

	for(int i=2; i <= nstates; i++){
		if(!can_reach[i]) continue;

		if(component[i] == -1){
			component[i] = ++color;
			if(f_state[i]) n_f_state[color] = 1;

			for(int j = i + 1; j <= nstates; j++){
				if(!marked[i][j]){
					component[j] = color;
					if(f_state[j]) 
						n_f_state[color] = 1;
				}
			}
			// color++;
		}
	}
	
	for(int i=1; i <= nstates; i++){
		for(int j=0; j < sz(gv[i]); j++){
			int to = gv[i][j].first;
			char c = gv[i][j].second;
			if(!used_[mp(mp(component[i], component[to]), c)]){
				n_gv[component[i]].pb(mp(component[to], c));
				used_[mp(mp(component[i], component[to]), c)] = true;
			}
		}
	}
}

void print(){
	printf("\nNew Graph:\n");
	for(int i=1; i <= color; i++){
		for(int j=0; j < sz(n_gv[i]); j++){
			printf("From: %d To: %d Edge: %c\n", i, n_gv[i][j].first, n_gv[i][j].second);
		}
	}
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	init_graph();
	build();
	dfs(1);
	minimize();
	print();

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}