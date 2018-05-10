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
#define mp make_pair
using namespace std;

int w;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>w;

	for(int i=1; i<100; i++){
		for(int j=1; j<100; j++){
			if(2*i+2*j==w){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}