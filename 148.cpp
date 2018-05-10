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

ll NOD(ll x, ll y){
	if(x!=0) return NOD(y%x, x);
	else return y;
}

ll a, b;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>a>>b;
	cout<<NOD(a,b);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}