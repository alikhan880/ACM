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
bool a[130];
int n;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	int n;
	cin>>n;
	cin>>s;

	for(int i=0; i<s.size(); i++){
		if(s[i]<91){
			a[s[i]] = true;
			a[s[i] + 32] = true;
		}
		else{
			a[s[i]] = true;
			a[s[i] - 32] = true;
		}
	}

	bool check = true;

	for(int i=65, j=97; i<91 && j<123; i++, j++){
		if(a[i] == false || a[j] == false) check = false;
	}

	if(check) cout<<"YES";
	else cout<<"NO";
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}