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

string a, b;

int main(){

	freopen("squad.in", "r", stdin);
	freopen("squad.out", "w", stdout);
	cin>>a>>b;

	char res[20];

	for(int i=0; i<sz(a); i++){
		if(a[i] > b[i]){
			res[i] = a[i];
		}
		else res[i] = b[i];
	}

	for(int i=0; i<sz(a); i++){
		cout<<res[i];
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}