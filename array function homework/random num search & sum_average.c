#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_array(double numArr[4][5], int i, int j);
int main() {
	printf("<< 1. ���� ã�� >>\n");
	int a, b = 0;
	int arr[20] = { 0 };
	int count[10] = { 0 };
	int sum = 0;
	srand(time(NULL));
	for (a = 0;a < 20;a++) {
		arr[a] = rand() % 10 + 1;
		count[arr[a] - 1]++;
		printf("%3d ", arr[a]);
	}
	printf("\n");
	printf("ã������ ���� �Է�(1~10) >> ");
	scanf("%d", &a);


	printf("���� %d��(��) �迭�� %d�� �ֽ��ϴ�.\n", a, count[a - 1]);

	printf("\n");


	printf("����  ����\n");
	printf("----------\n");

	for (b = 1;b <= 10;b++) {
		printf(" %2d : %2d��\n", b, count[b - 1]);
		sum += count[b - 1];
	}
	printf("----------\n");
	printf(" �� : %2d��\n", sum);
	printf("\n");


	printf("<< 2. ����� �հ� �� ��� ���>>\n");
	double numArr[4][5] = {
	   {25, 30, 22, 28, 32},
	   {22, 25, 28, 26, 38},
	   {25, 34, 20, 22, 40},
	   {22, 28, 27, 28, 35},
	};


	print_array(numArr, 4, 5);
}
void print_array(double numArr[4][5], int i, int j) {


	double total = 0;
	printf("����\t1��\t2��\t3��\t4��\t5��\t�հ�\t���\n");

	for (i = 0; i < 4; i++) {
		printf("%d��:", i + 1);

		for (j = 0; j < 5; j++) {
			printf("\t %.lf", numArr[i][j]);

			total = 0;
			for (int j = 0; j < 5; j++) {
				total += numArr[i][j];
			}
		}

		printf("    %.1lf ", total);
		double ave;

		ave = total / 5;
		printf("\t%.1lf", ave);
		printf("\n");
	}
}
