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

int n, a[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);

	if(n < 3){
		for(int i=0; i<n; i++){
			scanf("%d", a + i);
		}
		printf("%s\n", "-1");
		return 0;
	}
	else{
		for(int i=0; i<n; i++){
			scanf("%d", a + i);
		}
		for(int i=1; i<n; i++){
			if(a[i] != a[i-1]){
				swap(a[i], a[i-1]);
				bool c1 = false, c2 = false;
				for(int j=1; j<n; j++){
					if(a[j] > a[j-1]) c1 = true;
					if(a[j] < a[j-1]) c2 = true;
					if(c1 && c2){
						printf("%d %d\n", i+1, i);
						return 0;
					}
				}
				swap(a[i], a[i-1]);
			}
		}
	}

	printf("%s\n", "-1");



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}