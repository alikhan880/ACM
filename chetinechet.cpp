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
		
	int a[3];
	for(int i=0; i<3; i++) cin>>a[i];
	bool check1 = false, check2 = false;

	for(int i=0; i<3; i++){
		if(a[i] % 2 == 0) check1 = true;
		else check2 = true;
	} 

	if(check1 && check2) cout<<"YES";
	else cout<<"NO";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}