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

int k, l, m, n, d;
bool used[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);

	int cnt = 0;

	for(int i = k; i <= d; i+=k){
		if(!used[i]){
			cnt++;
			used[i] = true;
		}
	}
	for(int i = l; i <= d; i+=l){
		if(!used[i]){
			cnt++;
			used[i] = true;
		}
	}
	for(int i = m; i <= d; i+=m){
		if(!used[i]){
			cnt++;
			used[i] = true;
		}
	}
	for(int i = n; i <= d; i+=n){
		if(!used[i]){
			cnt++;
			used[i] = true;
		}
	}

	printf("%d\n", cnt);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}