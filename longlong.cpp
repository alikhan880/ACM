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
char s1[70], s2[70];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%s %s", s1, s2);
	a = s1;
	b = s2;
	int cnt = 0;
	for(int i=0; i<sz(a); i++) if(a[i] == '0') cnt++;
	for(int i=0; i<sz(b); i++) if(b[i] == '0') cnt++;

	if(cnt <= 18) printf("NO\n");
	else printf("YES\n");

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}