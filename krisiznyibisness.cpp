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

int n, s, a[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &s);

	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	sort(a, a+n);

	int cnt = 0, sum = 0;

	for(int i=0; i<n; i++){
		if(sum + a[i] <= s){
			sum += a[i];
			cnt++;
		}
		else break;
	}

	printf("%d\n", cnt);
	
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}