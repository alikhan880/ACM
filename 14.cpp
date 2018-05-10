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

using namespace std;

int a, b;
int NOD(int x, int y){
	if(x!=0) return NOD(y%x, x);
	else return y;
}
int NOK(int x, int y){
	return (x/NOD(x,y))*y;
}
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d %d", &a, &b);

	
	int res = NOK(a, b);

	printf("%d\n", res);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}