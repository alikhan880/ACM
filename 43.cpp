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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

string s;
vi v;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int c = 0;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '0') c++;
		else if(s[i] == '1'){
			v.pb(c);
			c = 0;
		}
	}
	v.pb(c);

	sort(v.begin(), v.end());

	cout<<v[v.size() - 1];

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}