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

int n, m, k, cnt;

int main(){

	scanf("%d %d %d", &n, &m, &k);

	int t = n + m;
	int ans;
	if(t % k == 0) ans = t / k;
	else ans = t / k + 1;
	if(2 * ans <= m) cout<<ans;
	else puts("0");
	return 0;
}