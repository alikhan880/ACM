#include <iostream>
#include <algorithm>

#define pii pair<int, int>
#define mp make_pair
#define s second
#define ll long long

using namespace std;
const int inf = (int)1e8;

int n;
ll d[10010];

int main() {
	d[2] = 3;
	d[4] = 11;
	
	for(int i = 5; i <= 33; i++) {
		if(i % 2 == 1) d[i] = 0;
		else {
			
			d[i] = d[i-2]*3 + 2;
		}
	}

	scanf("%d", &n);
	cout << d[n];
}