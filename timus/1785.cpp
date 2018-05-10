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
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

string get_name(int x){
	if(x < 5) return "few";
	else if(x < 10) return "several";
	else if(x < 20) return "pack";
	else if(x < 50) return "lots";
	else if(x < 100) return "horde";
	else if(x < 250) return "throng";
	else if(x < 500) return "swarm";
	else if(x < 1000) return "zounds";
	else return "legion";
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int n;
	cin>>n;
	cout<<get_name(n);



	return 0;
}