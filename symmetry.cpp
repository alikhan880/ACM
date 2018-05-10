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

ll x, y, x2, y2, a, b;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &x2, &y2, &a, &b);

	if(x == x2){
		if(x < a){
			cout<<x - abs(x - a)<<" "<<b;
		}
		else if(x > a){
			cout<<x + abs(x - a)<<" "<<b;
		}
		else cout<<a<<" "<<b;
	}
	else if(y - y2 == 0){
		if(y < b){
			cout<<a<<" "<<y - abs(y - b);
		}
		else if(y > b){
			cout<<a<<" "<<y + abs(y - b);
		}
		else cout<<a<<" "<<b;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}