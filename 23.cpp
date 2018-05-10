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


int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	int cnt = 0;
	for(int i=1; i<=n; i++) if(n%i==0) cnt+=i;

	cout<<cnt;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}