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


char a[110];
string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%s", a);

	s = a;

	const string temp  = "hello";

	int j = 0;

	for(int i = 0; i < s.size(); i++){
		if(j < 5 && s[i] == temp[j]) j++;
		if(j == 5){
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}