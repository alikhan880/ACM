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

int n, c, sum;

void lesenka(int k){
	sum+=k;
	if(sum>n) return;
	c++;
	lesenka(++k);
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%d", &n);

	lesenka(1);

	printf("%d\n", c);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}