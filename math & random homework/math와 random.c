#pragma warning(disable: 4996)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


main() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    double distance;


    printf("<<1. 두 점 사이의 거리>>\n");

    printf("두 점의 좌표를 입력>>");
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("Distance = %.4f\n", distance);


    int a, b, c, d, e;
    srand(time(NULL));
    printf("<<2. 5개의 정수 난수>>\n");

    a = 1 + rand() % 45;
    b = 1 + rand() % 45;
    c = 1 + rand() % 45;
    d = 1 + rand() % 45;
    e = 1 + rand() % 45;

    printf("%d %d %d %d %d\n", a, b, c, d, e);

    getchar();
    unsigned int num = 567;

    char ch = '\0';
    printf("<<3. 진법 변환 및 ASCII 코드 출력>>\n");
    printf("하나의 문자와 정수값을 공백으로 구분하여 입력 >> ");
    scanf("%c %d", &ch, &num);
    printf("입력된 문자 값은 ascii(%c) = %d 이고,\n", ch, ch);

    printf("입력된 숫자값은 %d, 8진수 = %#o, 16진수 = %#x 입니다.", num, num, num);

}