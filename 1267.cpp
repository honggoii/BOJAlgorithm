#include <cstdio>

int n;
int arr[21];
int young[21]; //����
int min[21]; //�ν�
int y, m; //����, �ν� �� ���

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		young[i] = (arr[i] / 30) + 1;
		y += young[i]*10;
		min[i] = (arr[i] / 60) + 1;
		m += min[i]*15;
	}

	if (y > m) {
		printf("M %d", m); 
	}
	else if (m > y) {
		printf("Y %d", y);
	}
	else {
		printf("Y M %d", y);
	}

	return 0;
}