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

int n, m, k;
bool used[1000100];
int leftx[300300], rightx[300300];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n>>m>>k;
	for(int i=0; i<m; i++){
		int x;
		scanf("%d", &x);
		used[x] = true;
	}

	for(int i=0; i<k; i++){
		scanf("%d %d", &leftx[i], &rightx[i]);
	}
	int idx = 1;
	for(int i=0; i<k; i++){
		if(used[idx]){
			printf("%d\n", idx);
			return 0;
		}
		if(leftx[i] == idx){
			idx = rightx[i];
		}
		else if(rightx[i] == idx){
			idx = leftx[i];
		}
	}

	printf("%d\n", idx);


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}