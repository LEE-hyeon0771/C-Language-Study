#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
main()
{
	double point;
	int i = 0;
	printf("<< 1. ���� ����ϱ� >>\n");

	while (i < 4)
	{

		printf("��� ���� �Է�(-1:����) >> ");
		scanf("%lf", &point);

		if (point >= 90.0 && point <= 100.0)
		{
			printf("1 - 1) if - else ��� : ������ A�Դϴ�.\n");
		}
		else if (point >= 80.0)
		{
			printf("1 - 1) if - else ��� : ������ B�Դϴ�.\n");
		}
		else if (point >= 70.0)
		{
			printf("1 - 1) if - else ��� : ������ C�Դϴ�.\n");
		}
		else if (point >= 0)
		{
			printf("1 - 1) if - else ��� : ������ F�Դϴ�.\n");
		}
		else if (point == -1)
		{
			break;
		}

		switch ((int)point / 10)
		{
		case 10:
			printf("1 - 2) switch   ��� : ������ A�Դϴ�.\n");
			break;
		case 9:
			printf("1 - 2) switch   ��� : ������ A�Դϴ�.\n");
			break;
		case 8:
			printf("1 - 2) switch   ��� : ������ B�Դϴ�.\n");
			break;
		case 7:
			printf("1 - 2) switch   ��� : ������ C�Դϴ�.\n");
			break;
		default:
			printf("1 - 2) switch   ��� : ������ F�Դϴ�.\n");
		}
		i = i + 1;
		printf("\n");
	}

	printf("<<2. ���ٿ� 5���� ��ǥ ���>>\n");
	int num = 0;
	do {
		printf("10���� ū ��� �Է�>> ");
		scanf("%d", &num);

	} while (num <= 10);
	printf("\n");



	i = 0;
	printf("2-1) while ��� --- \n");
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
	printf("2-2) do~while ��� ---\n");
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



	printf("2-3) for ��� ---\n");
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
	printf("<<3. ���� ���� ����>>\n");
	printf("10000 �̸� ���� �Է� >> ");
	scanf("%d", &x);

	printf("\n--- ���� ---\n");
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
		printf("%d ���� : %d\n", b, a);
		n++;
		x = x - a * b;
	}
	printf("\n�Էµ� ���ڸ� �Ųٷ� ��� : ");
	while (y > 0) {
		printf("%d", y % 10);
		y /= 10;
	}
	printf("\n");
}






