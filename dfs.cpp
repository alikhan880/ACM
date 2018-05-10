#include <iostream>

#using namespace std;

int g[100][100];
bool used[100];


void dfs(int v){
	used[v] = 1;
	for(int i = 0; i < )
}

int main(){


	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int x, y;
		cin>>x>>y;
		g[x][y] = 1;
		g[y][x] = 1;
	}



	return 0;
}