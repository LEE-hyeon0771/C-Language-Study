#include<stdio.h>

int main() {
	int a, b;
	printf("a�� �� : ");
	scanf_s("%d", &a);
	do {
		printf("b�� �� : ");
		scanf_s("%d", &b);
		if (b <= a) {
			printf("a���� ū ���� �Է��ϼ���!\n");
		}
	} while (b <= a);

	printf("b-a�� %d�Դϴ�.\n", b - a);

	nrpira(4);

}