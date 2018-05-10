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

vector<pair<pair<int, int>, int> > men, women;
int n;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++){
		int x, y;
		cin>>x>>y;
		if(y == 1) men.pb(mp(mp(x, y), i));
		else women.pb(mp(mp(x, y), i));
	}

	sort(men.begin(), men.end());

	// for(int i=0; i<men.size(); i++){
	// 	cout<<men[i].first.first<<" "<<men[i].first.second<<" "<<men[i].second<<endl;
	// }

	for(int i=0; i<men.size(); i++){
		if(men[men.size()-1].first.first == men[i].first.first){
			cout<<men[i].second;
			return 0;
		}
	}

	if(men.empty()){
		cout<<-1;
		return 0;
	}

	cout<<men[men.size()-1].second;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}