/*
��¥ : 2021-01-02
�̸� : ȫ����
���� : �ּ�,�ִ�
���� : n���� ������ �Է� �ް� �ּڰ��� �ִ��� ����ϴ� ���α׷��̴�.
*/

#include <stdio.h>

int main(void) {

	int n;
	int min, max;
	int *arr;

	printf("���� ������ �Է����ּ��� : ");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		printf("%d��° ���� �Է� : ", i + 1);
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("�ּڰ� : %d || �ִ� : %d\n", min, max);
	free(arr);

	return 0;
}