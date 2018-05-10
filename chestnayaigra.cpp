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

int n;
set<int> s;
map<int, int> m;
int numbs[110];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		s.insert(x);
		m[x]++;
	}   


	
	if(sz(s) % 2 == 0){
		cout<<"YES"<<endl;
		for(set<int>::iterator it = s.begin(); it != s.end(); it++){
			cout<<*it<<" ";
		}
	}   
	else{
		cout<<"NO"<<endl;
	}


	return 0;
}