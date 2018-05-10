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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

ll power[40];
string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int n;

void de(){
	power[0] = 1;
	for(ll i=1; i<31; i++){
		power[i] = power[i-1] * 2;
	}
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	de();
	scanf("%d", &n);
	for(int i=1; i<31; i++){
		if(5 * power[i] > n){
			printf("%s\n", names[n/power[i]-1].c_str());
			break;
		}
		else n-=(5*power[i]);
	}




	// fclose(stdin);
	// fclose(stdout);
	return 0;
}