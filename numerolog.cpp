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
	int ans = 0;
	while(sz(s) > 1){
		int t = 0;
		for(int i=0; i<sz(s); i++){
			t+=s[i] - '0';
		}
		string temp = "";
		while(t > 0){
			temp += (char)(t%10+48);
			t/=10;
		}
		// cout<<t;
		// cout<<temp;
		ans++;
		s = temp;
		// cout<<temp;
	}

	cout<<s<<" "<<ans;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}