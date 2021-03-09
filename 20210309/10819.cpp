#include <cstdio>
#include <cmath>
int n;
int ans;
int arr[10];
bool visit[10];
int tmp[10];
void permutation(int cnt) {
	if (cnt == n) {
		int sum = 0;
		for (int i = 1; i < n; i++) {
			sum += abs(tmp[i - 1] - tmp[i]);
		}
		if (sum > ans)
			ans = sum;
		return;
	}
	
	for (int i = 0; i < n; i++) {
		if (visit[i])continue;
		visit[i] = true;
		tmp[cnt] = arr[i];
		permutation(cnt + 1);
		visit[i] = false;
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	permutation(0);
	printf("%d", ans);
	return 0;
}
