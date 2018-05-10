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

char c[120120];
int t;
string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &t);
	for(int k=0; k<t; k++){
		scanf("%s", c);
		s = c;
		int cnt0 = 0, cnt1 = 0;
		for(int i=0; i<sz(s); i++){
			if(s[i] == '1') cnt1++;
			else cnt0++;
		}
		printf("Case %d: ", k+1);
		if(s[0] == '0' || s[sz(s) - 1] == '1'){
			printf("no\n");
			continue;
		}
		if(2 * cnt1 == cnt0) printf("yes\n");
		else printf("no\n");
		memset(&s[0], '\0', sizeof(s));
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}