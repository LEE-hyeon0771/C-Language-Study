#include<stdio.h>

int sumof(int a, int b) {
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}
