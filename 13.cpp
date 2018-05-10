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

using namespace std;

string a, b;
int cb, ck;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>a>>b;

	for(int i=0; i<4; i++) if(a[i] == b[i]) cb++;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(a[i] == b[j] && i!=j) ck++;
		}
	}
	cout<<cb<<" "<<ck;

	// cout<<a<<b;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}