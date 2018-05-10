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


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a, a + 3);

	for(int i=0; i<3; i++) cout<<a[i]<<" ";


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}