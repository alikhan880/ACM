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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n;
int a[100100], b[100100];

int main(){

	// freopen("area.in", "r", stdin);
	// freopen("area.out", "w", stdout);
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i]>>b[i];
	}

	double sum = 0;
	a[n] = a[0];
	b[n] = b[0];
	for(int i=0; i<n; i++){
		sum = sum + (a[i+1] - a[i]) * (b[i+1] + b[i]);
	}

	cout<<abs(sum/2.0);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}