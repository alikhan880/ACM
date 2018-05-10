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
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define MOD (int)1e9 + 7;

using namespace std;

string s;
bool go(string s1, string s2);
void kettik(string s){
	int hours;
	if(s[0] == '0'){
		hours = s[1] - '0';
	}
	else{
		hours = (s[0] - '0') * 10 + (s[1] - '0');
	}

	int mins;
	if(s[3] == '0'){
		mins = s[4] - '0';
	}
	else{
		mins = (s[3] - '0') * 10 + (s[4] - '0');
	}
	cout<<"hours :" << hours << "minutes : " <<mins;

	cout<<hours<<" and "<<mins<<endl;
	bool check = false;
	string ans1 = "", ans2 = "";
	for(int i = hours; i < 25; i++){
		if(i == hours){
			for(int j = mins; j < 61; j++){
				string h = "";
				string m = "";
				if(i / 10 == 0){
					h = "0" + (char)(i + '0');
				}
				else{
					h = (char)((i / 10) + '0') + "" + (char)((i % 10) + '0');
					cout<<"h : "<<h;
				}

				if(j / 10 == 0){
					m = "0" + (char)(j + '0');
				}
				else{
					m = (char)((j / 10) + '0') + "" + (char)((j % 10) + '0');
				}
				cout<<"i: " << i << " j: " << j<<endl;

				if(go(h, s)){
					ans1 = h;
					ans2 = s;
					check = true;
					break;	
				} 
			}
			if(check) break;
		}
		else{
			for(int j = 0; j < 61; j++){
				string h = "";
				string m = "";
				if(i / 10 == 0){
					h = "0" + (char)(i + '0');
				}
				else{
					h = (char)((i / 10) + '0') + "" + (char)((i % 10) + '0');
				}

				if(j / 10 == 0){
					m = "0" + (char)(j + '0');
				}
				else{
					m = (char)((j / 10) + '0') + "" + (char)((j % 10) + '0');
				}

				cout<<h<<" go "<<m<<endl;

				if(go(h, s)){
					ans1 = h;
					ans2 = s;
					check = true;
					break;	
				} 
				
			}

			if(check) break;
		}
	}

	if(check){
		cout<<ans1<<":"<<ans2;
		return;
	}
	else{
		cout<<"00:00";
		return;
	}



}

bool go(string s1, string s2){
	return s1[0] == s2[1] && s1[1] == s2[0];
}

int main(){
	// ios::sync_with_stdio(0), cin.tie(0);
	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;


	kettik(s);	                          


	return 0;
}