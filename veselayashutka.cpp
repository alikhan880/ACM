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

#define fori(i, n) for(int i=0; i<n; i++)
#define sz(a) ((int)(a.size()))
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


map<char, int> map1, map2;

char c[110];
string s1, s2, s3;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%s", c);
	s1 = c;
	scanf("%s", c);
	s2 = c;
	scanf("%s", c);
	s3 = c;

	for(int i=0; i<sz(s1); i++) map1[s1[i]]++;
	for(int i=0; i<sz(s2); i++) map1[s2[i]]++;
	for(int i=0; i<sz(s3); i++) map2[s3[i]]++;

	for(char i = 'A'; i<='Z'; i++){
		if(map1[i] != map2[i]){
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}