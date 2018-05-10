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

char str[110];
string s;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
    scanf("%s", str);
    s = str;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            printf("%s", "YES");
            return 0;
        }
    }
    
    printf("%s", "NO");

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}