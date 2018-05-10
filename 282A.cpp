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

int n, cnt;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		if(str == "++X" || str == "X++" || str == "+X+") cnt++;
		else cnt--;
	}

	cout<<cnt;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}