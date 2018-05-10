#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <cstring>

#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

int n, k;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin>>n>>k;
	if(n <= k){
		cout<<2;
		return 0;
	}
	if(n % k == 0){
		cout<<n / k * 2;
	}
	else{
		if(2 * n % k == 0){
			cout<<2 * n / k;
		}
		else{
			cout<<2 * n / k + 1;
		}
	}

                           


	return 0;
}