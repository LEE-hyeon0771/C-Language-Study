#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>


/*	char s[80], * p;


	printf("Enter a string: ");
	scanf("%s", s);

	p = s;
	while (*p) {
		p++;
	}
	printf("the length of string %s = %d\n", s, strlen(s));

	char* p;
	p = "computer";
	
	
	

	printf("%s", p);
}*/


void main() {
	int num, * p, ** q;

	p = &num;
	*p = 5;
	printf("p=&num: *p=5; 후 --> *p=%d num = %d\n", *p, num);

	q = &p;  // **q = 5;와 동일
	printf("q=&p; 후 --> **q = %d\n\n", **q);

	**q = 10;
	printf("<< after **q = 10;>>");
	printf("**q = %d\n", **q);
	printf("*p = %d\n", *p);
	printf("num = %d\n", num);
}
	

