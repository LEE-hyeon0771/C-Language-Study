#pragma warning(disable : 4996)
#include<stdio.h>

struct Digital_Healthcare {
	int id;
	char name[10];
	float gpa;
};

void main() {
	struct Digital_Healthcare s[3];
	int i = 0;

	for (i = 0; i < 3; i++) {
		scanf("%d", &s[i].id);
		scanf("%s", s[i].name);
		scanf("%f", &s[i].gpa);

		if (s[i].gpa > 4.4 || s[i].gpa < 0.0) {
			printf("Incorrect GPA\n");

			scanf("%d", &s[i].id);
			scanf("%s", s[i].name);
			scanf("%f", &s[i].gpa);
			continue;
		}
	}

	printf("\n");
		
	printf("Scholarship List:\n");
	
	for (i = 0; i < 3; i++) {
		if (s[i].gpa >= 4.0 && s[i].gpa < 4.4) {
			printf("%d %s\n", s[i].id, s[i].name);
		}
	}
}
        