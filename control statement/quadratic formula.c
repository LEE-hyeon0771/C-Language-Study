#include<stdio.h>
#include<math.h>
void main() {
	double bound = 1.0e-8;
	double a, b, c, D, root1, root2, root;
	printf("Enter a,b,c:");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	D = b * b - 4 * a * c;

	if (abs(D) <= bound) {
		D = sqrt(D);
		root = -b / 2 * a;
		printf("root=%.4lf\n", root);
	}
	else if (D > 0){
		D = sqrt(D);
	root1 = (-b + D) / 2 * a;
	root2 = (-b - D) / 2 * a;
	printf("root1=%.4lf and root2=%.4lf.\n", root1, root2);
}
	else {
		printf("No root exists\n");
	}





}