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

int n, a[110];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	int sum = 0;
	for(int i=0; i<n; i++){
		scanf("%d", a + i);
		sum += a[i];	
	} 

	sort(a, a + n);
	int cnt = 0, sumN = 0;
	for(int i=n-1; i>=0; i--){
		sumN += a[i];
		sum -= a[i];
		cnt++;
		if(sumN > sum) break;
	}

	printf("%d\n", cnt);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}