#pragma warning(disable : 4996)
#include<stdio.h>
int main() {
	char s[50];
	char a;
	int b = 0;
	printf("Input: ");
	scanf("%[^\n]s", s, 50);

	while (s[b] != '\0') 
		b++;

		for (int i = 0;i < b / 2;i++) {
			a = s[i];
			s[i] = s[b - i - 1];
			s[b - i - 1] = a;
		}
		printf("Result :%s", s);
	
	}
