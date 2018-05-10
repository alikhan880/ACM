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
int maxi, mini, cnt;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;
	maxi = mini = cnt = 1;

	for(int i=0; i<sz(s); i++){
		if(s[i] == '1') cnt++;
		else cnt--;
		maxi = max(cnt, maxi);
		mini = min(cnt, mini);
	}


	printf("%d\n", maxi + (1-mini));

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}