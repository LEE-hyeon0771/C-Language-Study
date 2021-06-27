#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int u, int v) {    //최대공약수
	int tmp;
	while (v != 0) {
		tmp = u % v;
		u = v;
		v = tmp;
	}
	return u;
}
float absoluteValue(float x) {      //절댓값함수
	if (x < 0) {
		x = -x;
	}
	return x;
}
float squareRoot(float y) {             //제곱근함수
	float result;
	result = sqrt(y);
	if (y < 0) {
		printf("음수 출력은 -1로 반환됩니다.\n");
		result = -1.0;
	}
	return result;
}
int main() {
	int result = 0;
	float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int    i1 = -716;
	float absoluteValueResult = 0.0;

	printf("<< 최대공약수 >>\n");
	result = gcd(150, 35);
	printf("The gcd of 150 and 35 is %d\n", result);
	result = gcd(1026, 405);
	printf("The gcd of 1026 and 405 is %d\n", result);
	result = gcd(83, 240);
	printf("The gcd of 83 and 240 is %d\n\n", result);

	printf("<< 절댓값 >>\n");
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

	absoluteValueResult = absoluteValue((float)i1);   //float강제형 변환일 때의 값
	printf("il강제형 result = %.2f\n", absoluteValueResult);

 	absoluteValueResult = absoluteValue(i1);          //int형을 그대로 둘 때의 값
	printf("il result = %.2f\n", absoluteValueResult);

	printf("I-6I/4 = %.2f\n\n", absoluteValue(-6.0) / 4);   //반환변수없이 함수에 인수를 바로 넣는 경우

	printf("<< 제곱근 >>\n");
	printf("-3제곱근 : %.2f\n", squareRoot(-3.0));
	printf("16제곱근 : %.2f\n", squareRoot(16.0));
	printf("25제곱근 : %.2f\n", squareRoot(25.0));
	printf("9제곱근 : %.2f\n", squareRoot(9.0));
	printf("225제곱근 : %.2f\n", squareRoot(225.0));
}