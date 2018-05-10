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

string s;
int c1, c0;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;

	for(int i=0; i<s.size(); i++){
		if(s[i] == '0'){
			c1 = 0;
			c0++;
			if(c0>=7){
				cout<<"YES";
				return 0;
			}
		}

		else if(s[i] == '1'){
			c0 = 0;
			c1++;
			if(c1>=7){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}