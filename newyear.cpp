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

vi v(3);
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	for(int i=0; i<3; i++) scanf("%d", &v[i]);

	sort(v.begin(), v.end());
	
	printf("%d\n", v[1] - v[0] + v[2] - v[1]);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}