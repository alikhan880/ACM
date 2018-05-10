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

typedef vi lnum;
const int base = (int)1e9;

lnum dp[1100];

string to_String(int num){
	string ans = "";
	while(num > 0){
		int x = num % 10;
		char c = x + '0';
		ans += c;
		num /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

lnum read(string s){
	lnum ans;
	for(int i = sz(s); i > 0; i -= 9){
		if(i < 9)
			ans.pb(atoi(s.substr(0, i).c_str()));
		else
			ans.pb(atoi(s.substr(i - 9, 9).c_str()));
	}
	return ans;
}

lnum mult(lnum a, lnum b){
	lnum c(sz(a) + sz(b));
	for(int i=0; i < sz(a); i++){
		for(int j=0, carry = 0; j < sz(b) || carry; j++){
			ll cur = c[i + j] + a[i] * 1ll * (j < sz(b) ? b[j] : 0) + carry;
			c[i + j] = (int)(cur % base);
			carry = (int)(cur / base);
		}
	}
	while(sz(c) > 1 && c.back() == 0) c.pop_back();
	return c;
}

void print(lnum a){
	printf("%d", a.empty() ? 0 : a.back());
	for(int i = sz(a) - 2; i >= 0;  i--){
		printf("%09d", a[i]);
	}
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	


	int n;
	cin>>n;

	lnum ans = read("1");
	for(int i=1; i <= n; i++){
		if(i == 1){
			ans = mult(ans,read("8")); 
		}
		else if(i <= 9) ans = mult(ans, read("9"));
		else ans = mult(ans, read("10"));
	}

   	print(ans);
	

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}