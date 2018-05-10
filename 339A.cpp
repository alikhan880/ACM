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

char s[110];
string str;
vi v;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%s", s);

	str = s;
	for(int i=0; i<str.size(); i++) if(str[i] != '+') v.pb(str[i] - 48);
	sort(v.begin(), v.end());
	for(int i=0; i<v.size()-1; i++) printf("%d+", v[i]);
	printf("%d", v[v.size()-1]);
	



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}