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


int n, p, q;
bool used[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	cin>>p;

	for(int i=0; i<p; i++){
		int x;
		cin>>x;
		used[x] = true;
	}

	cin>>q;

	for(int i=0; i<q; i++){
		int x;
		cin>>x;
		used[x] = true;
	}

	for(int i=1; i<=n; i++){
		if(!used[i]){
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}