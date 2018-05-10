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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n;
char a[60];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	scanf("%s", a);

	string s = a;

	int cnt = 0;

	for(int i=0; i<s.size()-1; i++){
		if(s[i] == s[i+1]) cnt++;
	}

	printf("%d\n", cnt);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}