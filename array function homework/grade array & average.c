#pragma warning(disable : 4996)
#include<stdio.h>

void print_array(double a[2][3], int i, int j);
void main() {
	double a[2][3] = {
		{80,70,80},
		{90,95,80},
	};
	int i=0, j=0;
	printf("철수의 점수를 입력하시오.\n");
	printf("국어 : %.lf\n", a[0][0]);
	printf("수학 : %.lf\n", a[0][1]);
	printf("영어 : %.lf\n", a[0][2]);
	printf("영희의 점수를 입력하시오.\n");
	printf("국어 : %.lf\n", a[1][0]);
	printf("수학 : %.lf\n", a[1][1]);
	printf("영어 : %.lf\n", a[1][2]);

	print_array(a, 2, 3);
}

void print_array(double a[2][3], int i, int j) {

	int sum = 0;

	for (i = 0;i < 2;i++) {
		for (j = 0;j < 3;j++) {
			sum = 0;
			for (int j = 0;j < 3;j++) {
				sum += a[i][j];
			}
		}
		int ave;
		ave = sum / 3;
		printf("%d", ave);

		printf("철수\n");
		printf("국어 : %.lf\t, 영어 : %.lf\t, 수학 : %.lf\t, 평균 : %.lf\t", a[i][j]);
	}
}


