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

char str[1010];
string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	
	scanf("%s", str);
	s = str;
	int n = sz(s);
	stack<string> st;
	int i=0;
	for(i; i<n; i++){
		if(s[i] == '<'){
			string temp = "";
			int j;
			for(j=i; j<n; j++){
				temp+=s[j];
				if(s[j] == '>') break;
			}
			i = j;
			// cout<<s[i];

			if(temp == "<DOWN>"){
				st.push(temp);
			}
			else if(temp == "<UP>"){
				st.push(temp);
			}
			else if(temp == "</UP>" && st.top() == "<UP>"){
				st.pop();
			}
			else if(temp == "</DOWN>" && st.top() == "<DOWN>"){
				st.pop();
			}

		}
		else{
			if(st.empty()){
				cout<<(char)(s[i]);
			}
			else{
				if(st.top() == "<UP>"){
					// cout<<i<<endl;
					if(s[i] >= 'a') cout<<(char)(s[i]-32);
					else cout<<(char)(s[i]);
				}
				else if(st.top() == "<DOWN>"){
					// cout<<i<<endl;
					if(s[i] <= 'Z') cout<<(char)(s[i]+32);
					else cout<<(char)(s[i]);
				}
			}
		}
	}
	return 0;
}