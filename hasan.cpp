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

double x, y, z;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>x>>y>>z;
	if(x == 1){
		cout<<min(y, z);
		return 0;
	}
	if(x == 2){
		cout<<y + z;
		return 0;
	}
	double time = 1 / y +  1 / z;
	cout<<round(x / time);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}