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


char c[100100];
string s;
map<char, int> m;

int cB, cb, cu, cl, ca, cs, cr;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%s", c);

	s = c;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'B') cB++;
		else if(s[i] == 'b') cb++;
		else if(s[i] == 'l') cl++;
		else if(s[i] == 'u') cu++;
		else if(s[i] == 'a') ca++;
		else if(s[i] == 's') cs++;
		else if(s[i] == 'r') cr++;
	}

	ca = ca / 2;
	cu = cu / 2;
	vector<pair<int, char> > v;
	v.pb(mp(cB, 'B'));
	v.pb(mp(cb, 'b'));
	v.pb(mp(cl, 'l'));
	v.pb(mp(cu, 'u'));
	v.pb(mp(ca, 'a'));
	v.pb(mp(cs, 's'));
	v.pb(mp(cr, 'r'));

	int cnt = 0;

	sort(v.begin(), v.end());

	// for(int i=0; i<v.size(); i++){
	// 	cout<<v[i].first<<" "<< v[i].second <<endl;
	// }

	cnt+=v[0].first;

	printf("%d\n", cnt);



	// for(map<char, int>::iterator it = m.begin(); it != m.end(); it++){
		// printf("%s\n", *it->second);
	// }



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}