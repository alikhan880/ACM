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

int n, a[110][110], b[110][110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];

	for(int k=0; k < n; k++)
		for(int i=0; i < n; i++)
			for(int j=0; j < n; j++)
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);


	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}