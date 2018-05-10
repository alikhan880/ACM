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

int nstates, nvertex, alphabet_sz, nfstates, f_state[1000]; 
vector<pair<int, char> > gv[1000];
set<char> alphabet;
set<set<int> > ans;
map<set<int>, bool> used;
vector<pair<pair<set<int>, set<int> >, char> > edges;

void modify(){
	set<int> t;
	t.insert(1);
	ans.insert(t);
	queue<set<int> > q;
	used[t] = true;
	q.push(t);
	while(!q.empty()){
		set<int> fr = q.front();
		q.pop();
		used[fr] = true;
		for(set<char>::iterator cit = alphabet.begin(); cit != alphabet.end(); cit++){
			set<int> temp;
			for(set<int>::iterator it = fr.begin(); it != fr.end(); it++){
				for(int i=0; i < sz(gv[*it]); i++){
					int to = gv[*it][i].first;
					char c = gv[*it][i].second;
					if(c == *cit){
						temp.insert(to);
					}
				}
			}
			edges.pb(mp(mp(fr, temp), *cit));
			if(used[temp]) ans.insert(temp);
			else q.push(temp), ans.insert(temp);
		}
	}
	cout<<"DFA VERTICES"<<endl;
	for(set<set<int> >::iterator it = ans.begin(); it != ans.end(); it++){
		for(set<int>::iterator itj = it->begin(); itj != it->end(); itj++){
			cout<<*itj<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

}

void init_graph(){
	
	printf("Enter the size of an alphabet\n");
	scanf("%d", &alphabet_sz);
	for(int i=0; i < alphabet_sz; i++){
		char c;
		scanf("\n%c", &c);
		alphabet.insert(c);
	}
	
	printf("Enter the number of states\n");
	scanf("%d", &nstates);
	printf("Enter the number of edges\n");
	scanf("%d", &nvertex);
	printf("Enter list of edges(from, to, edge_name)\n");
	for(int i=0; i < nvertex; i++){
		int u, v;
		char c;
		cin>>u>>v>>c;
		gv[u].pb(mp(v, c));
	}

	printf("Enter the number of final states\n");
	scanf("%d", &nfstates);
	printf("Enter the final states\n");
	for(int i=0; i < nfstates; i++){
		int x; scanf("%d", &x);
		f_state[x] = 1;
	}

}

void print_edges(){
	cout<<"DFA EDGES"<<endl;
	for(int i=0; i < sz(edges); i++){
		set<int> fr = edges[i].first.first;
		set<int> to = edges[i].first.second;
		cout<<"From vertex: ";
		for(set<int>::iterator it = fr.begin(); it != fr.end(); it++){
			cout<<*it<<" ";
		}
		cout<<" To vertex: ";
		for(set<int>::iterator it = to.begin(); it != to.end(); it++){
			cout<<*it<<" ";
		}
		cout<<" By edge: "<<edges[i].second<<endl;
	}
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	init_graph();
	modify();
	print_edges();
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}