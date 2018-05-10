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

int n, m, a[100100], add;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=0; i<m; i++){
		char c; int x;
		cin>>c>>x;
		if(c == 'R'){
			int idx = x + add;
			if(idx > n) idx -= n;
			else if(idx < 1) idx += n;
			cout<<a[idx]<<endl;
		}
		else if(c == 'A'){
			add -= x;
			if(add < 1) add += n; 
		}
		else if(c == 'C'){
			add += x;
			if(add > n) add -= n;
		}
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}