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

map<char, bool> used;
int cnt = 0;
char a[110];
string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%s", a);
	s = a;
	for(int i=0; i < s.size(); i++){
		if(!used[s[i]]){
			used[s[i]] = true;
			cnt++;
		}
	}
	// printf("%d\n", cnt);
	if(cnt % 2 != 0) printf("IGNORE HIM!\n");
	else printf("CHAT WITH HER!\n");

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}