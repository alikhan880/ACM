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

int k, n, m, d;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>k>>n>>m>>d;

	for(int i=1; i<10000; i++){
		if(i / k + i / n + i / m + d == i && i % k == 0 && i % n == 0 && i % m == 0){
			cout<<i;
			return 0;
		}
	}

	cout<<-1;


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}