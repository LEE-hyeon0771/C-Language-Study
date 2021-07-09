#include<stdio.h>

int stringLength(const char* s) {


	const char* p = s;

	while (*p) {
		p++;
	}
	return p - s;

}
void square(int *x) {
	*x = (*x) * (*x);
}
int main() {

	printf("%d\n", stringLength("stringlenth test"));
	printf("%d\n", stringLength(""));
	printf("%d\n", stringLength("jasons"));

	int num = 5;
	square(&num);
	
	printf("square pass by reference(given number) = %d", num);
}