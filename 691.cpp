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

bool tekser(char x){
	if(x == 'A' || x == 'B' || x == 'C' || x == 'E' || x == 'H' || x == 'K' || x == 'M' || x == 'O' || x == 'P' || x == 'T' || x == 'X' || x == 'Y'){
		return true;
	}
	return false;
}

bool tekser2(char x){
	if(x < 48 || x > 57) return false;
	return true;
}

string s;
int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		if(s.size() != 6) cout<<"No"<<endl;
		else if(tekser(s[0]) && tekser2(s[1]) && tekser2(s[2]) && tekser2(s[3]) && tekser(s[4]) && tekser(s[5])) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}