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

string s;
int ans;

bool check(string str){
	return str[0] == str[4] && str[1] == str[3];
}

string getString(int h, int s){
	string ret = "";
	if(h < 10){
		ret += '0';
		ret += (h + '0');
	}
	else{
		ret += (h/10%10 + '0');
		ret += (h%10) + '0';
	}

	ret += ':';

	if(s < 10){
		ret += '0';
		ret += (s + '0');
	}
	else{
		ret += (s/10%10 + '0');
		ret += (s%10) + '0';
	}

	return ret;
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;



	while(!check(s)){
		int hour = (s[0] - '0') * 10 + (s[1] - '0');
		int minute = (s[3] - '0') * 10 + (s[4] - '0');

		minute++;
		if(minute > 59){
			hour++;
			minute = 0;
		}
		// else minute++;

		if(hour > 23 && minute == 0) hour = 0;

		s = getString(hour, minute);
		// cout<<s<<endl;
		ans++;

	}

  cout<<ans;


	return 0;
}
