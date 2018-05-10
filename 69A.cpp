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

int n, sum = 0, a[110][110], b[3];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
		
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
			b[i] += a[j][i];
		}
	}	 
		// printf("HELLO\n");

	if(b[0] == 0 && b[1] == 0 && b[2] == 0) printf("YES\n");
	else printf("NO\n");
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}