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

string s;
int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s>>n;

	if(n == 1){
		printf("Yes\n");
		return 0;
	}

	if(s == "Home"){
		printf("Yes\n");
		return 0;
	}

	if(s == "School"){
		if(n % 2 == 0){
			printf("No\n");
			return 0;
		}
		else{
			printf("Yes\n");
			return 0;
		}
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}