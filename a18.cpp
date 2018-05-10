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

map<int, bool> used;
int n, a[100100];

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	// int maxi = n;
	vi v;
	bool placed = false;
	for(int i=0; i<n; i++){
		if(a[i] == n){
			cout<<a[i]<<" ";
			used[a[i]] = true;
			if(!v.empty()){
				sort(v.rbegin(), v.rend());
				
				for(int j=0; j<sz(v); j++){
					if(used[v[j]+1] && !used[v[j]]){
						cout<<v[j]<<" ";
						used[v[j]] = true;
					}
				}
				// v.clear();
			}
			cout<<endl;
		}
		else if(!used[a[i] + 1]){
			v.pb(a[i]);
			// cout<<"ad"<<a[i]<<endl;
			printf("\n");
		}
		else{
			v.pb(a[i]);
			sort(v.rbegin(), v.rend());
			for(int j=0; j<sz(v); j++){
				if(used[v[j]+1] && !used[v[j]]){
					cout<<v[j]<<" ";
					used[v[j]] = true;
				}
			}
			printf("\n");
		}
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}