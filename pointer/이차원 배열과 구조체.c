#pragma warning(disable : 4996)
#include<stdio.h>

void ary_prn(int *ary[3][4]) {
	
	int i, j;
	for (i = 0,j = 0; j < 4; j++)
		printf("   %2d", ary[i][j]);
	printf("\n");
	for (i = 1, j = 0; j < 4; j++)
		printf("   %2d", ary[i][j]);
	printf("\n");
	for (i = 2, j = 0; j < 4; j++)
		printf("   %2d", ary[i][j]);
	printf("\n");
	
}

void input_string(char (*arr)[80]) {
	
	for (int i = 0; i < 3; i++) {

		gets(arr[i]);
	}
	printf("\n");
}

void print_string(char (*arr)[80]) {
	
	for (int i = 0; i < 3; i++) {
		
		puts(arr[i]);
	}
	printf("\n");
}

struct profile {
	char name[20];
	double gpa;
	int score;
};

void input_data(struct profile* p) {
	
	for (int i = 0; i < 3; i++) {
		scanf("%s %lf %d", (*p).name, &(*p).gpa, &(*p).score);
		p++;
	}
}

void top(struct profile* p) {
	
	for (int i = 0; i < 3; i++) {
		if (p->gpa >= 4.0 && p->score >= 900) {
			printf("%s, %.1lf, %d", p->name, p->gpa, p->score);
		}
		p++;
	}
}


void main() {
	int ary[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	printf("<< 1) 2���� �迭�� �� ��� >>\n");
	ary_prn(ary);
	printf("\n");

	char arr[3][80];
	printf("<< 2) 3���� ������ �Է��ϼ��� >>\n");
	input_string(arr);
	printf("<< �Էµ� ������ >>\n");
	print_string(arr);
	printf("\n");

	printf("<< 3) 3���� �̸�, ����, ���������� �Է��ϼ��� >>\n");
	struct profile a[3];
	input_data(&a);
	printf("\n");
	printf("<< ���� �׷� �л� ��� >>\n");
	top(&a);
	printf("\n");
}