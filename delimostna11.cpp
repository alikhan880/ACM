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

string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;
	int sum1 = 0, sum2 = 0;

	for(int i=0; i<sz(s); i++){
		if(i % 2 == 1) sum1 += s[i] - '0';
		else sum2 += s[i] - '0';
	}

	int ans = sum1 - sum2;

	if(abs(ans) % 11 == 0) printf("YES\n");
	else printf("NO\n");


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}