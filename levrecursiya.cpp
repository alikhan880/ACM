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
string s[1010];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		if(s[i][0] == s[i][3]) ans++;
	}
	cout<<ans;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}