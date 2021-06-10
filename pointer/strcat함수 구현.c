#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>

void my_strcat_arr(char first[100], char second[50]) {

	int i, j;
	for (i = 0; first[i]; i++);
	for (j = 0; second[j]; i++, j++) {
		first[i] = second[j];
	}
	first[i] = '\0';
}

char* my_strcat_ptr(char* first, char* second){
	
	char* p = first;

	while (*p) {
		*p++;
	}
	while (*second) {
		*p++ = *second++;
	}
	*p = '\0';

	return first;
	
}
void main() {
	char first[100];
	char second[50];

	scanf("%s", first);
	scanf("%s", second);

	my_strcat_arr(first, second);
	printf("%s\n", first);
	
	printf("%s\n", my_strcat_ptr(first, second));
	
	printf("%s", first);

}