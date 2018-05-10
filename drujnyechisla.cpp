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


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int k;
	cin>>k;
	while(k--){
		string a, b;
		cin>>a>>b;
		set<char> s1, s2;
		for(int i=0; i<sz(a); i++) s1.insert(a[i]);
		for(int i=0; i<sz(b); i++) s2.insert(b[i]);
		if(s1 == s2)
		printf("YES\n");
		else printf("NO\n");
	}	


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}