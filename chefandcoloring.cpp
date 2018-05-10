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

int t, n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	cin>>t;
	for(int k = 0; k < t; k++){
		cin>>n;
		string s;
		cin>>s;
		int cnt1 = 0, cnt2 = 0, cnt3 = 0;
		for(int i = 0; i < sz(s); i++){
			if(s[i] == 'R') cnt1++;
			else if(s[i] == 'G') cnt2++;
			else cnt3++;
		}
		int ans = min(cnt1 + cnt2, min(cnt2 + cnt3, cnt1 + cnt3));
		cout<<ans<<endl;
	}
                           


	return 0;
}