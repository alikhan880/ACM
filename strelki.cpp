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
	int cnt = 0;

	for(int i = 4; i<sz(s); i++){
		if(s[i-4] == '>' && s[i-3] == '>' && s[i-2] == '-' && s[i-1] == '-' && s[i] == '>'){
			// printf("%d %d\n", i-4+1, i+1);
			cnt++;
		}
		if(s[i-4] == '<' && s[i-3] == '-' && s[i-2] == '-' && s[i-1] == '<' && s[i] == '<'){
			cnt++;
			// printf("%d %d\n", i-4+1, i+1);
		}
	}

	printf("%d\n", cnt);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}