/*
��¥ : 2021-01-05
�̸� : ȫ����
���� : ���� ���� �����
���� : ���� ���� �� �ְ����� ���ϰ�, �׸� �̿��Ͽ� ���� ������ �����ϴ� ���α׷�
*/

#include <stdio.h>

int main(void) {

	int s_count, score, maxNum = -1;
	int *arr;
	double sum = 0.0;

	printf("������ �� �� �Դϱ� : ");
	scanf("%d", &s_count);

	arr = (int*)malloc(sizeof(int) * s_count);

	for (int i = 0; i < s_count; i++) {
		printf("%d��° ���� ������ �Է����ּ��� : ", i + 1);
		scanf("%d", &arr[i]);

		if (maxNum < arr[i]) {
			maxNum = arr[i];
		}
	}
	for (int i = 0; i < s_count; i++) {
		sum += (arr[i] / (maxNum * 1.0)) * 100;
	}

	printf("�� ����� %lf�Դϴ�.\n", sum / s_count);
	free(arr);

	return 0;
}