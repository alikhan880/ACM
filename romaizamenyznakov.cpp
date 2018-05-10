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

int n, k;
vi neg, pos;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &k);

	for(int i=0; i<n; i++){
		int x;
		scanf("%d", &x);
		if(x < 0) neg.pb(x);
		else pos.pb(x);
	}

	sort(neg.rbegin(), neg.rend());
	sort(pos.begin(), pos.end());
	// for(int i=0; i<sz(pos); i++) printf("%d ", pos[i]);
	for(int i=0; i<sz(neg); i++){
		neg[i] *= -1;
		k--;
		printf("sad\n");
		if(k == 0) break;
	}
	if(k > 0){
		for(int i=0; i<sz(pos); i++){
			pos[i] *= -1;
			k--;
			if(k == 0) break;
		}
	}

	int sum = 0;
	for(int i=0; i<sz(neg); i++) sum += neg[i];
	for(int i=0; i<sz(pos); i++) sum += pos[i];
	printf("%d\n", sum);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}