/*
��¥ : 2020-01-02
�̸� : ȫ����
���� : �ִ밪�� ����ֳ�?
���� : 9���� ���� �ٸ� �ڿ����� �Է¹޴´�. �� �� �ִ��� ã��, �� ��° �ڿ������� ����Ѵ�.
*/

#include <stdio.h>

int main(void) {

	int num;
	int maxNum = 0;
	int count = 0;

	printf("---9���� ���� �ٸ� �ڿ����� �Է����ּ���---\n");
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);

		if (num > maxNum) {
			maxNum = num;
			count = i + 1;
		}
	}

	printf("�ִ��� %d�̰� %d��°�� �ֽ��ϴ�.\n", maxNum, count);

	return 0;
}