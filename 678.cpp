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
using namespace std;

string str;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>str;
	int x = 1, y = 0, z = 0;

	for(int i=0; i<str.size(); i++){
		if(str[i] == 'A') swap(x,y);
		else if(str[i] == 'B') swap(y,z);
		else if(str[i] == 'C') swap(x,z);
	}

	if(x == 1) cout<<"1";
	else if(y == 1) cout<<"2";
	else if(z == 1) cout<<"3";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}