#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int u, int v) {    //�ִ�����
	int tmp;
	while (v != 0) {
		tmp = u % v;
		u = v;
		v = tmp;
	}
	return u;
}
float absoluteValue(float x) {      //�����Լ�
	if (x < 0) {
		x = -x;
	}
	return x;
}
float squareRoot(float y) {             //�������Լ�
	float result;
	result = sqrt(y);
	if (y < 0) {
		printf("���� ����� -1�� ��ȯ�˴ϴ�.\n");
		result = -1.0;
	}
	return result;
}
int main() {
	int result = 0;
	float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int    i1 = -716;
	float absoluteValueResult = 0.0;

	printf("<< �ִ����� >>\n");
	result = gcd(150, 35);
	printf("The gcd of 150 and 35 is %d\n", result);
	result = gcd(1026, 405);
	printf("The gcd of 1026 and 405 is %d\n", result);
	result = gcd(83, 240);
	printf("The gcd of 83 and 240 is %d\n\n", result);

	printf("<< ���� >>\n");
	absoluteValueResult = absoluteValue(f1);
	printf("f1 result = %.2f\n", absoluteValueResult);
	printf("f1 = %.2f\n", f1);

	absoluteValueResult = absoluteValue(f2);
	printf("f2 result = %.2f\n", absoluteValueResult);
	printf("f2 = %.2f\n", f2);

	absoluteValueResult = absoluteValue(f3);
	printf("f3 result = %.2f\n", absoluteValueResult);
	printf("f3 = %.2f\n", f3);

	absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
	printf("(f2+f3) result = %.2f\n", absoluteValueResult);

	absoluteValueResult = absoluteValue((float)i1);   //float������ ��ȯ�� ���� ��
	printf("il������ result = %.2f\n", absoluteValueResult);

 	absoluteValueResult = absoluteValue(i1);          //int���� �״�� �� ���� ��
	printf("il result = %.2f\n", absoluteValueResult);

	printf("I-6I/4 = %.2f\n\n", absoluteValue(-6.0) / 4);   //��ȯ�������� �Լ��� �μ��� �ٷ� �ִ� ���

	printf("<< ������ >>\n");
	printf("-3������ : %.2f\n", squareRoot(-3.0));
	printf("16������ : %.2f\n", squareRoot(16.0));
	printf("25������ : %.2f\n", squareRoot(25.0));
	printf("9������ : %.2f\n", squareRoot(9.0));
	printf("225������ : %.2f\n", squareRoot(225.0));
}