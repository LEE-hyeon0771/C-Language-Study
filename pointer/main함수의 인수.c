#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
	int lhs, rhs;
	char op;

	if (argc < 4) {
		printf("Usage : ex10-6 value1 op value2\n");
		return -1;
	}
	lhs = atoi(argv[1]);
	op = *argv[2];
	rhs = atoi(argv[3]);

	switch(op) {
		case'+':
			printf(":%d + %d = %d\n", lhs, rhs, lhs + rhs);
			break;
		case '-':
			printf(":%d - %d = %d\n", lhs, rhs, lhs - rhs);
			break;
		case '*':
			printf(":%d * %d = %d\n", lhs, rhs, lhs * rhs);
			break;
		case '/':
			printf(":%d / %d = %d\n", lhs, rhs, lhs / rhs);
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
	}
	return 0;
}
