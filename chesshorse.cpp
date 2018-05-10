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

int a[300][300];
int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
int dy[] = {-2, 2, -2, 2, -1, 1, -1, 1};

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	string s;
	cin>>s;
	int y = s[0] - 'a' + 1;
	int x = s[1] - '0';

	for(int i=0; i<8; i++){
		if(x + dx[i] > 0 && x + dx[i] < 9 && y + dy[i] > 0 && y + dy[i] < 9){
			a[x + dx[i]][y + dy[i]] = 1;
		}		
	}

	for(int i=1; i <= 8; i++){
		for(int j=1; j<= 8; j++){
			if(a[i][j]){
				cout<<(char)(j + 96)<<i<<endl;
			}
		}
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}