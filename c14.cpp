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

ll a, b, k;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>k>>a>>b;
	int cnt = 0;
	cnt += a/k;
	int aa = a/k;
	a = a%k;
	cnt += b/k;
	int bb = b/k;
	b=b%k;

	if(a!=0 && bb ==0) printf("-1\n");
	else if(b!=0 && aa == 0) printf("-1\n");
	else{
		cout<<cnt;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}