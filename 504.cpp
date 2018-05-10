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

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int n;
char c[] = {'G', 'C', 'V'};

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	// cout<<c[0];
	cin>>n;

	for(int i=0; i<n; i++){
		swap(c[2], c[1]);
		swap(c[0], c[1]);
	}

	for(int i=0; i<3; i++){
		cout<<c[i];
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}