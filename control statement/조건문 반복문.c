#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
main()
{
	double point;
	int i = 0;
	printf("<< 1. 학점 출력하기 >>\n");

	while (i < 4)
	{

		printf("평균 점수 입력(-1:종료) >> ");
		scanf("%lf", &point);

		if (point >= 90.0 && point <= 100.0)
		{
			printf("1 - 1) if - else 사용 : 학점은 A입니다.\n");
		}
		else if (point >= 80.0)
		{
			printf("1 - 1) if - else 사용 : 학점은 B입니다.\n");
		}
		else if (point >= 70.0)
		{
			printf("1 - 1) if - else 사용 : 학점은 C입니다.\n");
		}
		else if (point >= 0)
		{
			printf("1 - 1) if - else 사용 : 학점은 F입니다.\n");
		}
		else if (point == -1)
		{
			break;
		}

		switch ((int)point / 10)
		{
		case 10:
			printf("1 - 2) switch   사용 : 학점은 A입니다.\n");
			break;
		case 9:
			printf("1 - 2) switch   사용 : 학점은 A입니다.\n");
			break;
		case 8:
			printf("1 - 2) switch   사용 : 학점은 B입니다.\n");
			break;
		case 7:
			printf("1 - 2) switch   사용 : 학점은 C입니다.\n");
			break;
		default:
			printf("1 - 2) switch   사용 : 학점은 F입니다.\n");
		}
		i = i + 1;
		printf("\n");
	}

	printf("<<2. 한줄에 5개의 별표 찍기>>\n");
	int num = 0;
	do {
		printf("10보다 큰 양수 입력>> ");
		scanf("%d", &num);

	} while (num <= 10);
	printf("\n");



	i = 0;
	printf("2-1) while 사용 --- \n");
	while (i <= num / 5) {
		if (i == num / 5) {
			int j = 0;
			while (j < num % 5) {
				printf("*");
				j++;
			}
		}
		else {
			int j = 0;
			while (j < 5) {
				printf("*");
				j++;
			}
		}
		printf("\n");
		i++;
	}
	printf("\n");



	i = 0;
	printf("2-2) do~while 사용 ---\n");
	do {
		if (i == num / 5) {
			int j = 0;
			do {
				printf("*");
				j++;
			} while (j < num % 5);
		}
		else {
			int j = 0;
			do {
				printf("*");
				j++;
			} while (j < 5);
		}
		printf("\n");
		i++;
	} while (i <= num / 5);
	printf("\n");



	printf("2-3) for 사용 ---\n");
	for (int i = 0; i <= num / 5; i++) {
		if (i == num / 5) {
			for (int j = 0; j < num % 5; j++) {
				printf("*");
			}
		}
		else {
			for (int j = 0; j < 5; j++) {
				printf("*");
			}
		}
		printf("\n");
	}


	int x, a, s;
	printf("<<3. 숫자 단위 갯수>>\n");
	printf("10000 미만 숫자 입력 >> ");
	scanf("%d", &x);

	printf("\n--- 단위 ---\n");
	int n = 0;   int b = 10000;   int y = x;
	while (n < 4)
	{
		int m = 3 - n;
		b = b / 10;
		a = (x - x % b) / b;
		for (int i = 0; i < n; i++)
		{
			printf(" ");
		}
		printf("%d 단위 : %d\n", b, a);
		n++;
		x = x - a * b;
	}
	printf("\n입력된 숫자를 거꾸로 출력 : ");
	while (y > 0) {
		printf("%d", y % 10);
		y /= 10;
	}
	printf("\n");
}






