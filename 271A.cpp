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

int n;
// char a[5];

bool check(int x){
	int x1 = x/1000;
	int x2 = x/100%10;
	int x3 = x/10%10;
	int x4 = x%10;
	// cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
	if(x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x2 != x4 && x3 != x4) return true;
	return false;
}


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%d", &n);
	// n = a;
	for(int i=n+1; i<=10000; i++){
		if(check(i)){
			printf("%d\n", i);
			return 0;
		}
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}