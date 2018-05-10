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

string s1, s2;
map<char, int> m;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	cin>>s1>>s2;
	for(int i=0; i<sz(s1); i++) m[tolower(s1[i])]++;
	for(int i=0; i<sz(s2); i++) m[tolower(s2[i])]++;

	for(map<char, int>::iterator it = m.begin(); it != m.end(); it++){
		if(it->second % 2 != 0){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}