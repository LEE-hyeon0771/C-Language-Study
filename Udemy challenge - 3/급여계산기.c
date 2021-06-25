#include<stdio.h>

int main() {
	double grosspay = 0.0;   //총 급여
	double taxes = 0.0;      //세금
	double netpay = 0.0;     //순 급여
	int hours = 0;           //일한 시간
	double overtimepay = 0.0;   //초과 시간

	printf("<< 주당 급여 계산기 >>\n");
	printf("주당 일한 시간 : ");
	scanf_s("%d", &hours);

	if (hours <= 40) {
		grosspay = hours * 12;   //시간당 총 급여
	}
	else {
		grosspay = hours * 40;
		overtimepay = (hours - 40) * (12 * 1.5);   //초과수당 = (40시간 제외하고 남은 시간)*(시간당 수당($12)*1.5배)
		grosspay = grosspay + overtimepay;     //총급여 = 40시간까지 급여 + 초과수당
	}
	if (grosspay <= 300) {                 //총 급여 $300이하면 세금이 15%
		taxes = grosspay * 0.15;
	}
	else if (grosspay > 300 && grosspay <= 450) {     //총 급여 $300~$450이면
		taxes = 300 * 0.15;                          //세금이 300까지 세금 15% + 300~450까지 세금 20%
		taxes = taxes + (grosspay - 300) * 0.2;
	}
	else {
		taxes = 300 * 0.15;                   //총 급여 $450이상
		taxes = 150 * 0.2;                    //세금이 300까지 15%, 300~450까지 20%, 450위로 25%
		taxes = taxes + (grosspay - 450) * 0.25;
	}

	netpay = grosspay - taxes; //순급여 = 총급여 - 세금

	printf("총 급여 = %.1lf\n", grosspay);
	printf("세금 = %.1lf\n", taxes);
	printf("순급여 = %.1lf\n", netpay);
}