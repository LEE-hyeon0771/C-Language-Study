#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 150;
	int* pnum = '\0';

	pnum = &num;

	printf("num address : %p\n", &num);
	printf("pnum address : %p\n", &pnum);
	printf("value of the pnum : %p\n", pnum);
	printf("value of what pnum is pointing to : %d\n", *pnum);
}