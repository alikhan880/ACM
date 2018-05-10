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


int n, m, a[1100][1100];
char c[1100][1100];
int black, blue, red, green;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			a[i][j] = i * j;
			c[i][j] = 'o';
		}
	}

	for(int k=0; k<3; k++){
		if(k == 0){
			for(int i=1; i<=n; i++){
				for(int j=1; j<=m; j++){
					if(a[i][j] % 2 == 0){
						c[i][j] = 'r';
					}
				}
			}
		}
		else if(k == 1){
			for(int i=1; i<=n; i++){
				for(int j=1; j<=m; j++){
					if(a[i][j] % 3 == 0){
						c[i][j] = 'g';
					}
				}
			}
		}
		else{
			for(int i=1; i<=n; i++){
				for(int j=1; j<=m; j++){
					if(a[i][j] % 5 == 0){
						c[i][j] = 'b';
					}
				}
			}
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(c[i][j] == 'o') black++;
			else if(c[i][j] == 'r') red++;
			else if(c[i][j] == 'g') green++;
			else if(c[i][j] == 'b') blue++;
		}
	}

	printf("RED : %d\nGREEN : %d\nBLUE : %d\nBLACK : %d\n", red, green, blue, black);
	// for(int i=1; i<=n; i++){
	// 	for(int j=1; j<=m; j++){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}