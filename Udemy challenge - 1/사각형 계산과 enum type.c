#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Purpose : This program is going to calculate the area of a rectangle
int main() {

	double perimeter = 0.0;
	double area = 0.0;
	double height;
	double width;
	printf("<< 사각형의 perimeter와 area 구하기 >>\n");
	printf("rectangle's height : ");
	scanf_s("%lf", &height);

	printf("rectangle's width: ");
	scanf_s("%lf", &width);

	perimeter = 2.0 * (height + width);  // calculation 
	area = width * height;

	printf("perimeter is %.2lf\n", perimeter);
	printf("area is %.2lf\n", area);

	printf("\n");
	
	printf("<< Enum type으로 열거형 표현해보기 >>\n");
	//Purpose : This program is learning a enum type.
	enum Company {Google, Facebook, Xerox, Yahoo=10, Ebay, Microsoft};
	enum Company xerox = Xerox;
	enum Company google = Google;
	enum Company ebay = Ebay;

	//enum 타입에서는 숫자로 표현되므로 %d로 출력
	printf("The value of xerox is: %d\n", xerox);  
	printf("The value of google is: %d\n", google);
	printf("The value of ebay is: %d\n", ebay); //Yahoo에 10을 넣어주었으므로 ebay는 11로 출력될 것임

	return 0;
}