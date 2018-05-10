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

vi a, b;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	for(int i=0; i<6; i++){
		int x;
		cin>>x;
		if(i < 3) a.pb(x);
		else b.pb(x);
	}
	int cnt = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i] == b[j]) cnt++;
		}
	}
	// cout<<cnt<<endl;
	if(cnt == 2){
		cout<<4;
		return 0;
	}
	cout<<6;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}