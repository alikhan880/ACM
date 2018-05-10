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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n, l, a[100], b[100], c[100], d[100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>l;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}


	for(int i=0; i<n; i++){
		cin>>b[i];
	}

	a[n] = l;
	b[n] = l;

	for(int i=0; i<n; i++){
		c[i] = a[i + 1]  - a[i];
		d[i] = b[i + 1]  - b[i];

	}


	c[n-1] += a[0];
	d[n-1] += b[0];
	bool ok = false;
	for(int i=0; i<n; i++){
		ok = true;
		for(int j=0; j<n; j++){
			int x = (i+j) % n;
			// cout<<x<<" "<<j<<endl;
			if(c[x] != d[j]){
				ok = false;
				break;
			}
		}
		if(ok) break;
	}


	if(ok) cout<<"YES";
	else cout<<"NO";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}