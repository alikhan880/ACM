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
vi v;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.pb(x);
	}

	for(int i=0; i<n; i++){
		if(v[i]<=437){
			cout<<"Crash "<<i+1;
			return 0;
		}
	}

	cout<<"No crash";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}