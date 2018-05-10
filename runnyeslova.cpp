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


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	string s;
	cin>>s;
	if(s[0] >= 'a' && s[0] <= 'z'){
		cout<<"No";
		return 0;
	}
	vector<string> v;
	int i = 0;
	while(i < sz(s)){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			string t = "";
			t += s[i];
			i++;
			while(s[i] >= 'a' && s[i] <= 'z' && i < sz(s)){
				t += s[i];
				i++;
			}
			v.pb(t);
		}
	}
	for(int i=0; i<sz(v); i++){
		if(sz(v[i]) < 2 || sz(v[i]) > 4){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}