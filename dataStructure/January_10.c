#include<stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	return max;
}
int min3(int a, int b, int c) {
	int min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	return min;
}
int main() {
	int a, b, c, d;
	printf("a,b,c,d 값을 차례대로 입력하세요.");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	printf("max4(%d, %d, %d, %d) = %d\n", a, b, c, d, max4(a, b, c, d));
	printf("max4(%d, %d, %d) = %d\n", a, b, c, min3(a, b, c));

	int e, f;
	printf("e : ");
	scanf_s("%d", &e);
	printf("f: ");
	scanf_s("%d", &f);

	printf("%d", sumof(e, f));
}