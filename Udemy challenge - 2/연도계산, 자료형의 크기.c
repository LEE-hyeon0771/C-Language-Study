#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int minutesenter = 0;
	double years = 0.0;
	double days = 0.0;
	double minutesinyear;
	printf("<< �Է¹��� ���� �ð��� �Ϸ� ǥ���ϱ� >>\n");
	printf("Please enter the number of minutes: ");
	scanf_s("%d", &minutesenter);
	
	minutesinyear = (60 * 24 * 365); //1���� ��(60��*24�ð�*365��)
	years = minutesenter / minutesinyear;   // �Է��� ��/1���� �� -> 1���� 0.xxxxxx��
	days = minutesenter / 60.0 / 24.0; // (�Է��� ��/60��)->�ð�, (�ð�/24�ð�)->�� 
	printf("�Է¹��� %d�� = %lf��, �Է¹��� �� = %lf�� �Դϴ�.\n",minutesenter, years, days);

	printf("\n");

	printf("<< 1���� �ð��� ǥ���ϱ� >>\n");
	double y = 365.2422;
	int d, h, m, s;

	d = (int)y;
	y = y - d;
	h = (int)(y * 24);
	y = y * 24 - h;
	m = (int)(y * 60);
	y = y * 60 - m;
	s = (int)(y * 60);
	printf("1���� %d��, %d�ð�, %d��, %d���Դϴ�.\n", d, h, m, s);

	printf("\n");

	printf("<< �ڷ����� ũ�⸦ ǥ���ϴ� ���α׷� >>\n");

	printf("char occupy %zd\n", sizeof(char));
	printf("short occupy %zd\n", sizeof(short));
	printf("int occupy %zd\n", sizeof(int));
	printf("long occupy %zd\n", sizeof(long));
	printf("long long occupy %zd\n", sizeof(long long));
	printf("float occupy %zd\n", sizeof(float));
	printf("double occupy %zd\n", sizeof(double));
	printf("long double occupy %zd\n", sizeof(long double));
	

}

