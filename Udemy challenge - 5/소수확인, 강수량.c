#include<stdio.h>
#include<stdlib.h>
#define MONTHS 12
#define YEARS 5
int isPrime(int num) {
	int i;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
		return 1;
	}
}

void main(void) {
	int i;
	int num = 0;
	printf("<< 1~100사이에서 입력한 수가 소수인지 확인하는 프로그램 >>\n");
	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("1~100사이의 소수는 ");
	for (i = 2; i <= 100; i++) {
		if (isPrime(i)) {
			printf("%d ", i);
		}
	}
	printf("입니다.");

	printf("\n");

	if (num == isPrime(i)) {
		printf("%d는 소수입니다.\n", num);
	}
	else {
		printf("%d는 소수가 아닙니다.\n", num);
	}

	printf("\n");

	printf("<< 5년간 강수량 출력 프로그램 >>\n\n");
	float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};

	int k, l;
	float yeartotal, monthtotal;

	printf("YEAR\t\tRAINFALL\n\n");
	for (k = 0, yeartotal = 0; k < YEARS; k++) {
		for (l = 0, monthtotal = 0; l < MONTHS; l++) {
			monthtotal = monthtotal + rain[k][l];
		}

		printf("%d\t\t%.1f\n\n", 2010 + k, monthtotal);
		yeartotal = yeartotal + monthtotal;
	}
	printf("연평균 : %.1f\n\n", yeartotal / YEARS);
	printf("월평균\n");
	printf(" Jan\t Feb\t Mar\t Apr\t May\t Jun\t Jul\t Aug\t Sep\t Oct\t Nov\t Dec\n");

	for (l = 0, monthtotal = 0; l < MONTHS; l++) {
		for (k = 0, yeartotal = 0; k < YEARS; k++) {
			monthtotal = monthtotal + rain[k][l];
		}
		printf(" %.1f\t", monthtotal / MONTHS);
	}
}


