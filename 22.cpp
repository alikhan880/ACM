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
using namespace std;

ll n;
vll v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	while(n>=1){
		int r = n%2;
		v.pb(r);
		n/=2;
	}

	int cnt = 0;
	for(int i=0; i<v.size(); i++) if(v[i] == 1) cnt++;

	cout<<cnt;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}