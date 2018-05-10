#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long 

using namespace std;

string x, t;

vector<int> prefix_function (string s) {
	int n = (int) s.length();
	vector<int> pi (n);
	for (int i=1; i<n; ++i) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j]) ++j;
		pi[i] = j;
	}

	return pi;
}


int main(){

	freopen("strings.in", "r", stdin);
	freopen("strings.out", "w", stdout);
	vector<int> v;
	cin>>t>>x;
	int n = x.size();
	vector<int> pf = prefix_function(x+"#"+t);
	// for(int i=0; i<pf.size(); i++) cout<<pf[i]<<" ";
		// cout<<endl;
	for(int i=0; i<pf.size(); i++){
		if(pf[i] == n){
			v.push_back(i-n+1);
		}
	}

	if(v.empty()) cout<<"none";
	else{
		sort(v.begin(), v.end());

		for(int i=0; i<v.size(); i++) cout<<v[i] - n<<" ";
		
	}
	return 0;
}