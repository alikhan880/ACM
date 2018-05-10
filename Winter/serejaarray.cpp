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

int n, m, a[100100], t;
int temp;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &m);

	for(int i=1; i<=n; i++) scanf("%d", &a[i]);

	for(int i=0; i<m; i++){
		scanf("%d", &t);

		if(t == 1){
			int x, v;
			scanf("%d %d", &v, &x);
			a[v] = x - temp;
		}

		else if(t == 2){
			int y;
			scanf("%d", &y);
			temp += y;
		}

		else if(t == 3){
			int q;
			scanf("%d", &q);
			printf("%d\n", a[q]+temp);
		}
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}