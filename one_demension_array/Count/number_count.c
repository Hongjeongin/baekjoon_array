/*
��¥ : 2021-01-04
�̸� : ȫ����
���� : 0~9 ī��Ʈ
���� : ���ڸ� �ڿ����� �Է¹޾� ���Ѵ�. ���� ������ 0~9�� �� �� ���Դ��� ���� ����Ѵ�.
*/

#include <stdio.h>

int main(void) {

	int n1, n2, n3;
	int mul;
	int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	printf("ù ��° �� �Է� : ");
	scanf("%d", &n1);
	printf("�� ��° �� �Է� : ");
	scanf("%d", &n2);
	printf("�� ��° �� �Է� : ");
	scanf("%d", &n3);

	mul = n1 * n2 * n3;
	printf("�� ���� ���� �� : %d\n", mul);

	while (mul != 0) {
		count[mul % 10]++;
		mul /= 10;
	}

	for (int i = 0; i < sizeof(count) / sizeof(int); i++) {
		printf("%d�� %d�� ���Խ��ϴ�.\n", i, count[i]);
	}

	return 0;
}