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
#define vll vector<long long>
#define mp make_pair
using namespace std;

int check(string t1, string t2){
	int sz = t1.size();

	for(int i=0; i<sz; i++){
		if(t1[i] > t2[i]) return 1;
		else if(t2[i] > t1[i]) return -1;
	}

	return 0;
}

string str1, str2;
char s[110], s2[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%s %s", s, s2);
	str1 = s;
	str2 = s2;
	int sz = str1.size();

	for(int i=0; i<sz; i++){
		if(str1[i] < 97) str1[i]+=32;
		if(str2[i] < 97) str2[i]+=32;
	}

	// int sum = 0;

	// for(int i=0; i<sz; i++) sum = sum + str1[i] - str2[i];
	printf("%d", check(str1, str2));
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}