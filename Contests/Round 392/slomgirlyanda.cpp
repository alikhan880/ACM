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


string s;
int r, b, y, g;
// map<char, int> m;
int main(){
	cin>>s;
	// freopen(".in", "r", stdin);
	int n = s.size();
	// freopen(".out", "w", stdout);
	int cntv = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == '!') cntv++;
	}

	if(cntv == 0){
		printf("%d %d %d %d", 0, 0, 0, 0);
		return 0;
	} 

	char a[4];

	for(int i=0; i<n; i++){
		if(s[i] != '!'){
			a[i%4] = s[i];
		}
	}


	for(int i=0; i<n; i++){
		if(s[i] != a[i%4]){
			if(a[i%4] == 'R') r++;
			else if(a[i%4] == 'G') g++;
			else if(a[i%4] == 'B') b++;
			else if(a[i%4] == 'Y') y++;

		}
	}

	cout<<r<<" "<<b<<" "<<y<<" "<<g;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}