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

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i = 0; i <= 1000; i++)
		for(int j = 0; j <= 1000; j++){
			if(3 * i + 5 * j > n) continue;
			if(3 * i + 5 * j == n){
				cout<<j<<" "<<i;
				return 0;
			}
		}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}