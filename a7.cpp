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


string s1, s2;
// map<char, bool> used;
vi v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s1>>s2;
	if(s1 == s2){
		cout<<-1;
		return 0;
	}
	else{
		int a = sz(s1);
		int b = sz(s2);
		cout<<max(a, b);
	}





	// cnt += v[v.size() - 1];
	// cout<<v[v.size() - 2];
	// cout<<v.size();
}