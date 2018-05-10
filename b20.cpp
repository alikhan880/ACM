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
// #define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

typedef vector<int> lnum;
const int base = 1000 * 1000 * 1000;

// char s[60];
// string s;

ll n, l ,r;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// cin>>s;
	scanf("%lld %lld %lld", &n, &l, &r);

	queue<ll> q;
	q.push(n);
	vector<ll> v;
	while(!q.empty()){
		ll front = q.front();
		q.pop();	
		if(front == 1 || front == 0){
			v.pb(front);
			continue;
		}
		q.push(front/2);
		q.push(front%2);
		q.push(front/2);
	}
	for(int i=0; i<sz(v); i++) cout<<v[i]<<" ";
	// int cnt = 0;
	// for(int i=l, i<=rl i++){

	
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}