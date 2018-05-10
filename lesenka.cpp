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
stack<int> s;
void go(int n, int cnt){
	if(n == 0 || cnt == 0){
		return;	
	} 

	for(int i = 0; i <= n && i <= cnt; i++){
		s.push(i);
		go(i, cnt - 1);
		s.pop();
	}
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;	
	for(int i = 0; i <= n; i++){
		go(i, n);
	}

	cout<<s.top();
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}