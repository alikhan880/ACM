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

int n;
map<string, int> m;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;
	cin>>n;
	int sum = 0;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		sum += m[s];

	}
	cout<<sum;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}