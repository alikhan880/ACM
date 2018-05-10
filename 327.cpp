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

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	cin>>n;

	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		num--;
		int predlsum = num/100000 + num/10000%10 + num/1000%10;
		// cout<<predlsum<<endl;
		int predrsum = num/100%10 + num/10%10 + num%10;
		// cout<<predrsum<<endl;
		num+=2;
		int nextlsum = num/100000 + num/10000%10 + num/1000%10;
		// cout<<nextlsum<<endl;
		int nextrsum = num/100%10 + num/10%10 + num%10;
		// cout<<nextrsum<<endl;
		if(predlsum == predrsum || nextlsum == nextrsum) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}