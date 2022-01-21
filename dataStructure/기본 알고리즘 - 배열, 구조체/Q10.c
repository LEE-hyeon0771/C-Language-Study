#include<stdio.h>

int main() {
	int a, b;
	printf("a의 값 : ");
	scanf_s("%d", &a);
	do {
		printf("b의 값 : ");
		scanf_s("%d", &b);
		if (b <= a) {
			printf("a보다 큰 값을 입력하세요!\n");
		}
	} while (b <= a);

	printf("b-a는 %d입니다.\n", b - a);

	nrpira(4);

}