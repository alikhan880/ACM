#include <iostream>
#include <algorithm>

#define pii pair<int, int>
#define mp make_pair
#define s second

using namespace std;
const int inf = (int)1e8;

int n;
pii a[10010];
int d[10010];

int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		a[i] = mp(x, y);
	}

	sort(a, a+n);
	d[0] = inf;
	d[1] = a[1].s;

	for(int i = 2; i < n; i++) {
		d[i] = min(d[i-2] + a[i].s, d[i-1] + a[i].s);
	}

	cout << d[n-1];
}