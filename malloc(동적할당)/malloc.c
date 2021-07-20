#include<stdio.h>
#include<stdlib.h>

int main() {
	int size;
	char* text = '\0';

	printf("Enter a limit of text : ");
	scanf_s("%d", &size);

	text = (char*) malloc(size * sizeof(char));

	if (text != NULL) {
		printf("Enter a text : ");
		scanf_s(" ");
		gets(text);
		

		printf("%s\n",text);
	}
	free(text);
	text = NULL;
	return 0;
}