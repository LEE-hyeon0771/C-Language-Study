#pragma warning(disable: 4996)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


main() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    double distance;


    printf("<<1. �� �� ������ �Ÿ�>>\n");

    printf("�� ���� ��ǥ�� �Է�>>");
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("Distance = %.4f\n", distance);


    int a, b, c, d, e;
    srand(time(NULL));
    printf("<<2. 5���� ���� ����>>\n");

    a = 1 + rand() % 45;
    b = 1 + rand() % 45;
    c = 1 + rand() % 45;
    d = 1 + rand() % 45;
    e = 1 + rand() % 45;

    printf("%d %d %d %d %d\n", a, b, c, d, e);

    getchar();
    unsigned int num = 567;

    char ch = '\0';
    printf("<<3. ���� ��ȯ �� ASCII �ڵ� ���>>\n");
    printf("�ϳ��� ���ڿ� �������� �������� �����Ͽ� �Է� >> ");
    scanf("%c %d", &ch, &num);
    printf("�Էµ� ���� ���� ascii(%c) = %d �̰�,\n", ch, ch);

    printf("�Էµ� ���ڰ��� %d, 8���� = %#o, 16���� = %#x �Դϴ�.", num, num, num);

}