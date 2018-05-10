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

int t;
double n, r, p;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	scanf("%d", &t);
	for(int k=0; k < t; k++){
		scanf("%lf %lf %lf", &n, &r, &p);
		double ans = log2(p / n) / log2(1 + r / 100);
		int L = 0, R = 5000;
		while((double)L < ans){
			int mid = (L + R) / 2;
			if(mid > ans) R = mid;
			else L = mid + 1;
		} 

		printf("Case %d: %d\n", k + 1, L);
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}