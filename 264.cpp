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

int n, a[110], c;
vi v;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] > 0) c++;
		else{
			v.pb(c);
			c = 0;
		} 
	}
	v.pb(c);

	sort(v.begin(), v.end());
	cout<<v[v.size()-1];
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}