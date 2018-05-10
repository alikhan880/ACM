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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair


using namespace std;

int n, a[100100];
// map<int,bool> used;
int cnt2, cnt3, cnt5, cnt7, cnt11, cnt13;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	int cnt = 0, nch = 0;

	for(int i = 0; i < n; i++){
		// int k; 
		scanf("%d", &a[i]);
	}


	vi v;

	for(int i=0; i<n; i++){
		if(a[i] > 3 && a[i] % 3 == 0) cnt3++;
	}

	for(int i=0; i<n; i++){
		if(a[i] > 2 && a[i] % 2 == 0) cnt2++;
	}

	for(int i=0; i<n; i++){
		if(a[i] > 5 && a[i] % 5 == 0) cnt5++;
	}

	for(int i=0; i<n; i++){
		if(a[i] > 7 && a[i] % 7 == 0) cnt7++;
	}

	for(int i=0; i<n; i++){
		if(a[i] > 11 && a[i] % 11 == 0) cnt11++;
	}

	for(int i=0; i<n; i++){
		if(a[i] > 13 && a[i] % 13 == 0) cnt13++;
	}

	int cnt23 = 0, cnt25 = 0, cnt27 = 0, cnt211 = 0, cnt213 = 0, cnt35 = 0, cnt37 = 0, cnt311 = 0, cnt313 = 0, cnt57 = 0,
	cnt511 = 0, cnt513 = 0, cnt711 = 0, cnt713 = 0, cnt1113 = 0;
	for(int i=0; i<n; i++)if(a[i] % 2 == 0 && a[i] % 3 == 0) cnt23++;
	for(int i=0; i<n; i++)if(a[i] % 2 == 0 && a[i] % 5 == 0) cnt25++;
	for(int i=0; i<n; i++)if(a[i] % 2 == 0 && a[i] % 7 == 0) cnt27++;
	for(int i=0; i<n; i++)if(a[i] % 2 == 0 && a[i] % 11 == 0) cnt211++;
	for(int i=0; i<n; i++)if(a[i] % 2 == 0 && a[i] % 13 == 0) cnt213++;
	for(int i=0; i<n; i++)if(a[i] % 3 == 0 && a[i] % 5 == 0) cnt35++;
	for(int i=0; i<n; i++)if(a[i] % 3 == 0 && a[i] % 7 == 0) cnt37++;
	for(int i=0; i<n; i++)if(a[i] % 3 == 0 && a[i] % 11 == 0) cnt311++;
	for(int i=0; i<n; i++)if(a[i] % 3 == 0 && a[i] % 13 == 0) cnt313++;
	for(int i=0; i<n; i++)if(a[i] % 5 == 0 && a[i] % 7 == 0) cnt57++;
	for(int i=0; i<n; i++)if(a[i] % 5 == 0 && a[i] % 11 == 0) cnt511++;
	for(int i=0; i<n; i++)if(a[i] % 5 == 0 && a[i] % 13 == 0) cnt513++;
	for(int i=0; i<n; i++)if(a[i] % 7 == 0 && a[i] % 11 == 0) cnt711++;
	for(int i=0; i<n; i++)if(a[i] % 7 == 0 && a[i] % 13 == 0) cnt713++;
	for(int i=0; i<n; i++)if(a[i] % 11 == 0 && a[i] % 13 == 0) cnt1113++;

	v.pb(cnt2+1);
	v.pb(cnt3+1);
	v.pb(cnt5+1);
	v.pb(cnt7+1);
	v.pb(cnt11+1);
	v.pb(cnt13+1);
	v.pb(cnt23+2);
	v.pb(cnt25+2);
	v.pb(cnt27+2);
	v.pb(cnt211+2);
	v.pb(cnt213+2);
	v.pb(cnt35+2);
	v.pb(cnt37+2);
	v.pb(cnt311+2);
	v.pb(cnt313+2);
	v.pb(cnt57+2);
	v.pb(cnt511+2);
	v.pb(cnt513+2);
	v.pb(cnt711+2);
	v.pb(cnt713+2);
	v.pb(cnt1113+2);

	sort(v.begin(), v.end());

	printf("%d\n", v[v.size() - 1]);
	

	// for(int i=0; i<nch; i++) cout<<a[i]<<" ";
	// cout<<endl;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}