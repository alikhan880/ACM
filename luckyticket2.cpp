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

string s, l, r;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;
	for(int i=0; i < sz(s)/2+1; i++) l+=s[i];
	for(int i=sz(s)/2 + 1; i < sz(s); i++) r+=s[i];
	cout<<l<<" "<<r<<endl;
	while(sz(l) > 1 || sz(r) > 1){
		int suml = 0, sumr = 0;
		if(sz(l) > 1){
			for(int i=0; i<sz(l); i++){
				suml += (l[i] - '0');
			}

			l = "";
			while(suml > 0){
				int x = suml/10;
				suml /= 10;
				l += (char)(x + '0');
			}
			if(l == "") l = "0";
		}
		if(sz(r) > 1){
			for(int i=0; i<sz(r); i++){
				sumr += (r[i] - '0');
			}

			r = "";
			while(sumr > 0){
				int x = sumr/10;
				sumr /= 10;
				r += (char)(x + '0');
			}
		}

	}	
	cout<<l<<" "<<r;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}