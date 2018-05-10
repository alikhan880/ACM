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


int n, m, q;
map<pair<string, string>, bool> antonimy, sinonimy;
vector<string> otvety;
vi otvety2;
map<string, int> chisla;
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d%d%d", &n, &m, &q);
	vector<string> slovar;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		slovar.pb(s);
	}

	vector<pair<int, string> > otvety;
	vi otvety2;
	for(int i=0; i<m; i++){
		int t;
		string x, y;
		cin>>t>>x>>y;
		if(t == 1){
			if(chisla[x] == 0 && chisla[y] == 0){
				chisla[x] = 1;
				chisla[y] = 1;
			}
		}
		else{
			if(chisla[x] == 1 && chisla[y] == 0){
				// chisla[x] = -1;
				chisla[y] = -1;
			}
			if(chisla[x] == -1 && chisla[y] == -1){
				otvety.pb(mp(i, "NO"));

			}
		}

	}

	for(map<string, int>::iterator it = chisla.begin(); it!=chisla.end(); it++){
		cout<<it->second;
	}

	// cout<<sz(otvety);

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}