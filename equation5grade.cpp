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
	if(s[0] == 'x'){
		int x = s[4] - '0';
		int y = s[2] - '0';
		if(s[1] == '+'){
			cout<<x - y;
		}
		else{
			cout<<x + y;	
		}
	}
	else if(s[2] == 'x'){
		int x = s[4] - '0';
		int y = s[0] - '0';
		if(s[1] == '+') cout<<x - y;
		else cout<<y - x;
	}
	else{
		int x = s[0] - '0';
		int y = s[2] - '0';
		if(s[1] == '+') cout<<x + y;
		else cout<<x - y;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}