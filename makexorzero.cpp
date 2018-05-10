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

int t, n, cnt1, cnt0;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k = 0; k < t; k++){
		cnt1 = cnt0 = 0;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			int x;
			scanf("%d", &x);
			if(x == 1) cnt1++;
			else cnt0++;
		}
		if(cnt1 % 2 == 1){
			cout<<cnt1<<endl;
			continue;
		}
		else{
			cout<<cnt0<<endl;
			continue;
		}

	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}