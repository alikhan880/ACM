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
#include <iomanip>

#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n;
double h;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>h;
	double s = h/2.0;
	double ps = s / n;
	// cout<<s<<" "<<ps;

	for(int i=1; i<n; i++){
		cout<<fixed<<setprecision(12)<<h * sqrt(ps * i/s)<<" ";
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}