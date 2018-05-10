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

int n;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	int cnt = 0;

	for(int i=0; i<n; i++){
		int p, q;
		scanf("%d%d", &p, &q);
		if(q - p > 1) cnt++;
	}

	printf("%d\n", cnt);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}