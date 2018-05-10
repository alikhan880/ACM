#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int cnt, ans;
string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	while(getline(cin, s)){
		// cout<<s<<endl;
		if(s[0] == '+'){
			cnt++;
		}
		else if(s[0] == '-'){
			cnt--;
		}
		else{
			int pos = 0;
			while(s[pos]  != ':') pos++;
			ans += (sz(s) - pos - 1) * cnt;
		}
	}    


	cout<<ans;                 


	return 0;
}