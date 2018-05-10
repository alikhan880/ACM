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

int a, b, c;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>a>>b>>c;
	if(a != 0) cout<<a;
	if(b != 0){
		if(a == 0 && b != 1 && b != -1) cout<<b<<'x';
		else if(b == 1 && a != 0) cout<<"+x";
		else if(b == -1) cout<<"-x"; 
		else{
			if(b == 1) cout<<'+'<<'x';
			else if(b == -1) cout<<'-'<<'x';
			if(b > 0) cout<<'+'<<b<<'x';
			else cout<<b<<'x';
		}
	}
	if(c != 0){
		if(a == 0 && b == 0) cout<<c<<'y';
		else if((b != 0 && a == 0) || (b == 0 && a != 0)){
			if(c == 1) cout<<'+'<<'y';
			else if(c == -1) cout<<'-'<<'y';
			else if(c > 0) cout<<'+'<<c<<'y';
			else cout<<c<<'y';
		}
		else{
			if(c == 1) cout<<'+'<<'y';
			else if(c == -1) cout<<'-'<<'y';
			else if(c > 0) cout<<'+'<<c<<'y';
			else cout<<c<<'y';
		}

	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}