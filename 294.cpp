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

int n1, p1, c1, n2, p2, c2;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n1>>p1>>c1>>n2>>p2>>c2;
	int sum = n1*p1/100*c1 + n2*p2/100*c2;
	n1 -= n1*p1/100;
	n2 -= n2*p2/100;
	if(n1>n2) sum+=(n1-n2)*c1;
	else if(n1<n2) sum+=(n2-n1)*c2;

	cout<<sum;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}