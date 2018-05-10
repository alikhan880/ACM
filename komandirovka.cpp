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

int n, a[13];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<12; i++) scanf("%d", &a[i]);
	sort(a, a + 12);
	int sum = 0;
	int b[13];
	for(int i=0; i<12; i++) b[i] = a[11-i];

	for(int i=1; i<12; i++) b[i] += b[i-1];
	for(int i=0; i<12; i++){
		if(n == 0){
			printf("0\n");
			return 0;
		}
		if(b[i] >= n){
			printf("%d\n", i+1);
			return 0;
		}
	}
	printf("-1\n");

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}