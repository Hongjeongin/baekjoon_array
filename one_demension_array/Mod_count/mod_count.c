/*
��¥ : 2021-01-04
�̸� : ȫ����
���� : 42�� ���� ������
���� : 10���� ���� �Է¹޴´�. �� ���� 42�� �������� �� �������� ���� �ٸ� �͵��� ������ ����Ѵ�.
*/
#include <stdio.h>

int main(void) {

	int n;
	int count = 10;
	int arr[10];

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d��° �� �Է� : ", i + 1);
		scanf("%d", &n);
		arr[i] = n % 42;
	}

	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		if (arr[j] == -1) {
			continue;
		}
		for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
			if (arr[i] == -1 || j == i) {
				continue;
			}
			if (arr[j] == arr[i]) {
				arr[i] = -1;
				count--;
			}
		}
	}

	printf("10���� �� �� 42�� ���� �������� ���� �ٸ� ���� ������ %d�� �Դϴ�.\n", count);

	return 0;
}