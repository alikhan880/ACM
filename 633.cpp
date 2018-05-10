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

string teamName, a[10];

int main(){

	// freopen("INPUT.TXT ", "r", stdin);
	// freopen("OUTPUT.TXT ", "w", stdout);
	getline(cin, teamName);

	cin>>a[0]>>a[1]>>a[2];

	sort(a, a+3);

	cout<<teamName<<": "<<a[0]<<", "<<a[1]<<", "<<a[2];	


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}