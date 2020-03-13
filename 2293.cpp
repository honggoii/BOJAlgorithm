#include <cstdio>

int coin[101]; // ���� ��ġ
int dp[10001]; // ����� �� 

int main() {
	freopen("sample.txt", "r", stdin);
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}

	dp[0] = 1; // 0���� ����� �ִ� ����� ���� 0���� 1�� ���, 1����

	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}

	printf("%d", dp[k]);

	return 0;
}