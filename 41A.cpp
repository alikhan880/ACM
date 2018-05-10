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

string s, t;

int main(){

	cin>>s>>t;
	for(int i = 0, j = t.size()-1; i<s.size() && j >= 0; i++, j--){
		if(s[i] != t[j]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}