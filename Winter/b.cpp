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
int a[9], d[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>s;

	for(int i=1; i<s.size(); i++){
		if(a[s[i] - 48] == 0 && s[i] != s[0]) d[i] = a[i-1] + 1;
		else if(a[s[i] - 48] != 0 && s[i] != s[0]) d[i] = a[s[i] - 48] + 1;
		else if(a[s[i] - 48] >= 0 && s[i] == s[0]) d[i] = a[s[i] - 48] + 1; 
	}

	for(int i=0; i<9; i++) cout<<a[i]<<" ";
	cout<<endl;
	cout<<d[s.size()-1];

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}