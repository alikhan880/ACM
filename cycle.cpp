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
// char a[6000][6000];
vi v[6000];
int main(){

	// freopen(".in", "r", stdin);
	scanf("%d", &n);
	// freopen(".out", "w", stdout);
	for(int i=1; i<=n; i++){
		// scanf("%s", a[i]);
		string s;
		cin>>s;
		for(int j=0; j<=n; j++){
			if(s[j] == '1') v[i].pb(j+1);
		}
	}

	for(int i=1; i<=n; i++){
		cout<<i<<" ";
		for(int j=0; j<v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}

		cout<<endl;
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}