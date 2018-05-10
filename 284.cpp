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

int n, m;
int a[1100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	cin>>m;
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		for(int i=x; i<=y; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}