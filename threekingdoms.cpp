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

struct{
	int x;
	int y;
	char c;
	pii dam_range;
} cell;


int t, n, m;
cell board[60][60];

pii dam_ran(char c){
    if(c == 'A') return mp(1, 2);
    if(c == 'B') return mp(3, 2);
    if(c == 'C') return mp(0, 3);
    if(c == 'D') return mp(2, 4);
    if(c == 'E') return mp(1, 5);
	
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>t;
	for(int cs = 0; cs < t; cs++){
		cin>>n>>m;
		int stx, sty, endx, endy;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				char c;
				cin>>c;
				cell[i][j]->x = i;
				cell[i][j]->y = j;
				cell[i][j]->c = c;
				if(c == '$'){
					stx = i;
					sty = j;
					continue;
				}
				if(c == '!'){
					endx = i;
					endy = j;
					continue;
				}
				if(c == '#' || c == '.') continue;
				cell[i][j] = dam_ran(c);		
			
			}
		}

		queue<cell> q;
		q.push(cell[stx][sty]);
		while(!q.empty()){
			
		
		}
	
	}                           


	return 0;
}