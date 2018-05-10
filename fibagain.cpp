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

int n, pr = 1, nx = 1, cur = 1;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	n = n % 60;
	for(int i = 2; i <= n; i++){
		cur = ((pr % 10) + (nx % 10)) % 10;
		pr = nx;
		nx = cur;
		// cout<<cur<<" "; 
	}
	// cout<<endl;
	cout<<cur;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}