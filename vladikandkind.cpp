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

ll a, b;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld %lld", &a, &b);
	ll chet = a / 2;
	ll nechet = (b - 1) / 2;
	int ans1 = 1, ans2 = 2;
	int hod1 = 0, hod2 = 0;
	for(int i=0; i < chet; i++){
		if(ans1 > a) break;
		hod1++;
		ans1 += 2;
	}

	for(int i=0; i < nechet; i++){
		if(ans2 > b) break;
		hod2++;
		ans2 += 2;
	}

	if(hod1 > hod2){
		cout<<"Vladik";
	}
	else
		cout<<"Valera";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}