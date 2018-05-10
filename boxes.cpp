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

vi v1(3), v2(3);
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	for(int i=0; i<3; i++){
		scanf("%d", &v1[i]);
	}

	for(int i=0; i<3; i++){
		scanf("%d", &v2[i]);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	bool equal = true;

	for(int i=0; i<3; i++){
		if(v1[i] != v2[i]){
			equal = false;
		}
	}

	if(equal){
		printf("Boxes are equal\n");
		return 0;
	}

	if(v1[0] >= v2[0] && v1[1] >= v2[1] && v1[2] >= v2[2]){
		printf("The first box is larger than the second one\n");
		return 0;
	}

	else if(v1[0] <= v2[0] && v1[1] <= v2[1] && v1[2] <= v2[2]){
		printf("The first box is smaller than the second one\n");
		return 0;
	}

	else printf("Boxes are incomparable\n");


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}