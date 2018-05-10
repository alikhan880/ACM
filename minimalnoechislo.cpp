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

string a, b;
multiset<char> s;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>a>>b;
	for(int i=0; i<sz(a); i++) s.insert(a[i]);
	for(int i=0; i<sz(b); i++) s.insert(b[i]);

	for(multiset<char>::iterator it = s.begin(); it != s.end(); it++) cout<<*it;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}