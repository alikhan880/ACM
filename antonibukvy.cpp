#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

string s;
set<char> ans;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	getline(cin, s);
	for(int i= 0; i < sz(s); i++){
		if(s[i] >= 97 && s[i] <= 122){
			ans.insert(s[i]);
		}
	}                 

	printf("%d\n", sz(ans));





	return 0;
}