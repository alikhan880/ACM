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
map<char, bool> used;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;

	if(s[0] != 'a'){
		printf("NO\n");
		return 0;
	}
	used['a'] = true;

	for(int i=1; i<sz(s); i++){
		if(!used[s[i]]){
			if(!used[s[i]-1]){
				printf("NO\n");
				return 0;
			}
			else{
				used[s[i]] = true;
			}
		}
	}

	printf("YES\n");



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}