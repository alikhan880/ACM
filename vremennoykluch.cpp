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

int n;

int main(){
	scanf("%d", &n);
	int m = n;
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int ans = 0;

	while(n > 0){
		ans += n % 2;
		n /= 2;
	}

	printf("%d\n", m + ans);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}