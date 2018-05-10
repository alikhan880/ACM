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

int n;
int a[2000];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n;
	a[0] = 1;
	a[1] = 1;
	for(int i=2; i<2000; i++){
		a[i] = a[i-1] + a[i-2];
		if(a[i] == n){
			cout<<1<<endl<<i+1;
			return 0;
		}
	}
	cout<<0;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}