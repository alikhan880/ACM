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

int n, k, a[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int c = 0;
	cin>>n>>k;
	for(int i=0; i<n; i++) cin>>a[i];

	for(int i=0; i<n; i++){
		if(a[i] >= a[k-1] && a[i] > 0) c++;
	}


	cout<<c;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}