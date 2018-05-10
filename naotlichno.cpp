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

int n, k, a[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	sort(a, a + n);

	double maxi = (double)a[n - 1];
	// cout<<maxi;
	double res = 0;
	for(int i=0; i<n; i++) res += a[i];
	int ans = n;

	while(true){
		cout<<round(res/(double)ans)<<" "<<k<<endl;
		res += maxi;
		ans++;
	}

	printf("%d\n", ans - n);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}