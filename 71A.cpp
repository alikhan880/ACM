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

int n;
string a[110];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];

	for(int i=0; i<n; i++){
		if(a[i].size()>10){
			cout<<a[i][0]<<a[i].size()-2<<a[i][a[i].size()-1]<<endl;
		}
		else{
			cout<<a[i]<<endl;
		}
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}