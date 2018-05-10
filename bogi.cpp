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
 
int n, m;
vector<string> v, pv;
// map<string, int> ans;
int ans[100];
 
int main(){
 
    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        string x; 
        cin>>x;
        v.pb(x);
        // ans[x] = 0;
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        string x;
        cin>>x;
        pv.pb(x);
    }
    // cout<<endl;
    for(int i=0; i<n; i++){
        string x = v[i];
        for(int j=0; j<m; j++){
            string y = pv[j];
            if(sz(x) == sz(y)){
                int cnt = 0;
                for(int k=0; k < sz(x); k++){
                    if(x[k] != y[k]) cnt++;
                }
                if(cnt == 1) ans[i]++;
            }
        }
    }
 
    for(int i=0; i < sz(v); i++) cout<<ans[i]<<" ";
 
 
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}