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


int n, m, a[60];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i=0; i<m; i++) scanf("%d", &a[i]);

	sort(a, a+m);

	int mini = (int) 1e9;
	// bool check = false;
	for(int i=0; i<=m-n; i++){
		// cout<<i+n-1<<" "<<i<<endl;
		mini = min(mini, a[i+n-1] - a[i]);
		// check = true;
	}
	// if(mini = 1000100) printf("%d\n", a[n-1] - a[m-1]);
	// else printf("%d\n", mini);
	printf("%d\n", mini);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}