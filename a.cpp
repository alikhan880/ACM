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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int a, b;

	scanf("%d%d", &a, &b);
	if(a == 0 && b == 0){
		printf("NO\n");
		return 0;
	}
	if(abs(a-b) == 1 || abs(a-b) == 0) printf("YES\n");

	else printf("NO\n");	


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}