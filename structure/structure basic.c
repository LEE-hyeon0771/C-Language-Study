#pragma warning(disable : 4996)
#include<stdio.h>

typedef struct {
	int add;
	int sub;
	int mul;
}calcType;

typedef struct {
	char name[10];
	int age;
}profile;

typedef struct {
	profile info;
	int id;
	float gpa;
}student;


calcType calc_all(int, int);


void main(void){
	 int a, b;
	 calcType s1;
	 
	 
	 printf("2���� ���� �Է�>> ");
     scanf("%d %d", &a, &b);
	 
	 s1 = calc_all(a, b);
	 printf("addition: %d,\t", s1.add);
	 printf("subraction: %d,", s1.sub);
	 printf("\t  multiplication: %d\n", s1.mul);
	 printf("\n");

	profile s;
	student k;
	printf("<<��ø ����ü>>\n");
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s.name);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &s.age);
	printf("-----------------------\n");

	k.id = 5;
	k.gpa = 4.4;
	printf("�̸� : %s\n", s.name);
	printf("���� : %d\n", s.age);
	printf("�й� : %d\n", k.id);
	printf("���� : %.1f\n", k.gpa);
	printf("------------------------");


}

calcType calc_all(int a, int b) {
	calcType s1;

	s1.add = a + b;
	s1.sub = a - b;
	s1.mul = a * b;

	return s1;
}