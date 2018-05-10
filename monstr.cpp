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


int a, b, c, d;
map<int, bool> used;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>a>>b>>c>>d;
	for(int i=0; i<=10000; i++){
		used[b + a * i] = true;
	}

	for(int i=0; i<=10000; i++){
		if(used[d + c * i]){
			cout<<d+c*i;
			return 0;
		}
	}
	cout<<-1;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}