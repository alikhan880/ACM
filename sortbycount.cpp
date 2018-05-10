#include <stdio.h>
using namespace std;

int n, cnt[1000], a[1000100];
int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		cnt[a[i] + 200]++;
	}

	for(int i=-100; i <= 100; i++){
		int x = i;
		if(cnt[x + 200] > 0){
			for(int j=0; j<cnt[x + 200]; j++){
				printf("%d ", x);
			}
		}
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}