#include <cstdio>
#include <algorithm>
using namespace std;
int n, m;
int arr[20000];
int ans;
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	int i = 0;
	int j = n - 1;
	while (1) {
		if (i >= j)
			break;//탈출 조건

		if (arr[i] + arr[j] == m) {
			ans++;
			i++;
			j--;
		}
		else if (arr[i] + arr[j] > m) {
			j--;
		}
		else {
			i++;
		}
	}
	printf("%d", ans);
	return 0;
}
