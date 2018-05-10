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

int n, cena[100100], ans[100100];


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	// for(int i=1; i<=n; i++) cena[i] = i+1;

	vector<bool> prime (n+2, true);
	prime[0] = prime[1] = false;
	for (int i=2; i<=n+1; ++i)
	if (prime[i])
		if (i * 1ll * i <= n)
			for (int j=i*i; j<=n; j+=i)
				prime[j] = false;

	if(n<3){
		printf("1\n");
	}
	else{
		printf("2\n");
	}
	for(int i=1; i<=n; i++){
		if(prime[i]){
			printf("1");
		}
		else{
			printf("2");
		}
		if(i != n+1){
			printf(" ");
		}
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}