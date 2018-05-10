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


int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	if(n % 2 == 1){
		int start = 480;
		int ans2 = (n-1) * 5;
		int ans = start + (n-1) * 5;
		if(ans > 1200){
			cout<<"NO";
			return 0;
		}
		cout<<ans2/60<<" "<<ans2%60;
		return 0;
	}
	else{
		int ans = 485 + (n-1) * 5;
		int ans2 = (n-1) * 5;
		if(ans > 1200){
			cout<<"NO";
			return 0;
		}
		cout<<ans2/60<<" "<<ans2%60;
		return 0;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}