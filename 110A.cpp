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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

char a[20];
string n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%s", &a);
	n = a;
	int cnt = 0;

	for(int i=0; i<n.size(); i++) if(n[i] == '7' || n[i] == '4') cnt++;

	if(cnt == 4 || cnt == 7) printf("YES\n");
	else printf("NO\n");

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}