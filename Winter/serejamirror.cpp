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

int n, m, a[110][110];
int mn = 0;
bool check = true;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &m);

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) scanf("%d", &a[i][j]);
	int rows = n;
	mn = n;
	if(n % 2 != 0) mn = n;
	else{
		while(rows > 1){
			for(int i=0; i<rows/2; i++){
				for(int j=0; j<m; j++){
					if(a[i][j] != a[rows - 1 - i][j]) check = false;
				}
			}
			if(!check || rows % 2 != 0) break;
			else{
				mn = rows/2;
				// printf("%d\n", mn);
				rows /= 2;
			}
		}
	}

	printf("%d", mn);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}