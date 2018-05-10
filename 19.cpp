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

using namespace std;

bool used[10][10];

string lad, kon, ferz;

int kaitar(char c){
	if(c == 'A') return 1;
	if(c == 'B') return 2;
	if(c == 'C') return 3;
	if(c == 'D') return 4;
	if(c == 'E') return 5;
	if(c == 'F') return 6;
	if(c == 'G') return 7;
	if(c == 'H') return 8;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>ferz>>lad>>kon;
	int xF, yF, xL, yL, xK, yK;
	xF = ferz[1] - 48;
	yF = kaitar(ferz[0]);
	xL = lad[1] - 48;
	yL = kaitar(lad[0]);
	xK = kon[1] - 48;
	yK = kaitar(kon[0]);
	used[xF][yF] = true;
	used[xL][yL] = true;
	used[xK][yK] = true;

	used[xK+1][yK-2] = true;
	used[xK+1][yK+2] = true;
	used[xK-1][yK-2] = true;
	used[xK-1][yK+2] = true;
	used[xK+2][yK-1] = true;
	used[xK+2][yK+1] = true;
	used[xK-2][yK-1] = true;
	used[xK-2][yK+1] = true;


	for(int i=1; i<=8; i++){
		used[xL][i] = true;
		used[i][yL] = true;
		used[xF][i] = true;
		used[i][yF] = true;
	}

	int x = xF, y = yF;

	while(x>0 && x<=8 && y>0 && y<=8){
		used[x++][y++] = true;
	}


	x = xF, y = yF;

	while(x>0 && x<=8 && y>0 && y<=8){
		used[x--][y--] = true;
	}


	x = xF, y = yF;

	while(x>0 && x<=8 && y>0 && y<=8){
		used[x++][y--] = true;
	}


	x = xF, y = yF;

	while(x>0 && x<=8 && y>0 && y<=8){
		used[x--][y++] = true;
	}

	
	int cnt = 0;

	for(int i=1; i<9; i++) for(int j = 1; j<9; j++) if(used[i][j]) cnt++;

	cout<<cnt - 3;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}