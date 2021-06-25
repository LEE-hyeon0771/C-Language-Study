#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int minutesenter = 0;
	double years = 0.0;
	double days = 0.0;
	double minutesinyear;
	printf("<< 입력받은 분을 시간과 일로 표현하기 >>\n");
	printf("Please enter the number of minutes: ");
	scanf_s("%d", &minutesenter);
	
	minutesinyear = (60 * 24 * 365); //1년의 분(60분*24시간*365일)
	years = minutesenter / minutesinyear;   // 입력한 분/1년의 분 -> 1년은 0.xxxxxx분
	days = minutesenter / 60.0 / 24.0; // (입력한 분/60분)->시간, (시간/24시간)->일 
	printf("입력받은 %d분 = %lf년, 입력받은 분 = %lf일 입니다.\n",minutesenter, years, days);

	printf("\n");

	printf("<< 1년의 시간을 표현하기 >>\n");
	double y = 365.2422;
	int d, h, m, s;

	d = (int)y;
	y = y - d;
	h = (int)(y * 24);
	y = y * 24 - h;
	m = (int)(y * 60);
	y = y * 60 - m;
	s = (int)(y * 60);
	printf("1년은 %d일, %d시간, %d분, %d초입니다.\n", d, h, m, s);

	printf("\n");

	printf("<< 자료형의 크기를 표현하는 프로그램 >>\n");

	printf("char occupy %zd\n", sizeof(char));
	printf("short occupy %zd\n", sizeof(short));
	printf("int occupy %zd\n", sizeof(int));
	printf("long occupy %zd\n", sizeof(long));
	printf("long long occupy %zd\n", sizeof(long long));
	printf("float occupy %zd\n", sizeof(float));
	printf("double occupy %zd\n", sizeof(double));
	printf("long double occupy %zd\n", sizeof(long double));
	

}

