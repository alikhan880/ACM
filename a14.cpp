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

int n;
string home;
vector<string> v;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	cin>>home;

	for(int i=0; i<n; i++){
		char a[10];
		scanf("%s", a);
		string from, to;
		for(int j=0; j<=2; j++) from+=a[j];
		for(int j=5; j<=7; j++) to+=a[j];
		v.pb(from);
		v.pb(to); 

	}
	// printf("%s\n", home.c_str());
	int cnt = 0;
	for(int i=0; i<sz(v); i++){
		if(home == v[i]) cnt++;
		// printf("%s\n", v[i].c_str());
	}

	if(cnt % 2 == 0) printf("home\n");
	else printf("contest\n");


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}