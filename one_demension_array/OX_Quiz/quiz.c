/*
��¥ : 2021-01-05
�̸� : ȫ����
���� : OX����
���� : OX������ ����� �Է¹ް�, O�� ������ŭ ������ ���Ѵ�. O�� ���ӵǸ� ���ϴ� ������ �þ�� X�� ������ ������ �ʱ�ȭ�ȴ�.
*/

#include <stdio.h>

int main(void) {

	int n, count, sum;
	char **ox;

	printf("������ �� �� �ΰ��� : ");
	scanf("%d", &n);

	ox = (char**)malloc(sizeof(char*) * n);

	getchar();

	for (int i = 0; i < n; i++) {
		ox[i] = (char*) malloc(sizeof(char) * 80 + 1);
		printf("%d��° OX ����� �Է����ּ��� : ", i);
		fgets(ox[i], sizeof(char) * 80 + 1, stdin);
	}

	for (int i = 0; i < n; i++) {
		sum = 0; count = 1;
		for (int j = 0; j < strlen(ox[i]); j++) {
			if (ox[i][j] == 'O') {
				sum += count;
				count++;
			}
			else {
				count = 1;
			}
		}
		printf("%d��° ���� : %d\n", i, sum);
		free(ox[i]);
	}

	free(ox);

	return 0;
}