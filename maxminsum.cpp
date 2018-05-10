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

int maxi = (int)-1e9, mini = (int)1e9;
int main(){

	// freopen("input.txt", "r", stdin);
	// freopen(".out", "w", stdout);
	int i=1, a;
	FILE *input = fopen("input.txt", "r");
	while(fscanf(input, "%d", &a) != EOF){
		if(i % 2 == 0) maxi = max(a, maxi);
		else mini = min(mini, a);
		i++;
	}

	cout<<maxi + mini;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}