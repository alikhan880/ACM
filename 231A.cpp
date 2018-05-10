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



int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int n;
	cin>>n;
	int cnt = 0;
	for(int i=0; i<n; i++){
		int x, y, z;
		cin>>x>>y>>z;
		if(x + y + z >= 2) cnt++;
	}

	cout<<cnt;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}