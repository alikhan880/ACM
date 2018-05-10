#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<char, int> mp;
vector<string> stroki;
int s_len = 0;
bool comp(pair<char, double> a, pair<char, double> b){
	if(a.second > b.second) return true;
	return false;
}

void read(){
	freopen("text.txt", "r", stdin);
	string s;
	while(getline(cin, s)){
		stroki.push_back(s);
		s_len += s.size();
		for(int i=0; i < s.size(); i++){
			mp[s[i]]++;
		}
	}
	fclose(stdin);
}

vector<pair<char, int> > v1;

vector<pair<char, double> > solve(){
	vector<pair<char, double> > v; 
	for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
		v1.push_back(make_pair(it->first, it->second));
		v.push_back(make_pair(it->first, (double)it->second/(double)mp.size()));
	}
	return v;
}

int main(){

	cout<<"Enter the percentage"<<endl;
	int x;
	cin>>x;
	read();	
	vector<pair<char, double> > answer = solve();
	sort(v1.begin(),v1.end(), comp);
	int num = (int)((double)s_len * (double)x / 100.0 + 1);
	for(int i=0; i<v1.size(); i++) if(v1[i].first == ' ') v1.erase(v1.begin() + i);
	for(int i=0; i<v1.size() && num > 0; i++){
		if(v1[i].first != ' ')
		while(v1[i].second > 0 && num > 0){
			for(int j=0; j<stroki.size() && num > 0; j++){
				for(int k=0; k<stroki[j].size() && num > 0; k++){
					if(v1[i].first == stroki[j][k]){
						v1[i].second--;
						num--;
						stroki[j].erase(stroki[j].begin() + k);
					}
				}
			}
		}
	}

	for(int i=0; i<stroki.size(); i++){
		cout<<stroki[i]<<" ";
	}
	
	return 0;
}