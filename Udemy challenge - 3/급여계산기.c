#include<stdio.h>

int main() {
	double grosspay = 0.0;   //�� �޿�
	double taxes = 0.0;      //����
	double netpay = 0.0;     //�� �޿�
	int hours = 0;           //���� �ð�
	double overtimepay = 0.0;   //�ʰ� �ð�

	printf("<< �ִ� �޿� ���� >>\n");
	printf("�ִ� ���� �ð� : ");
	scanf_s("%d", &hours);

	if (hours <= 40) {
		grosspay = hours * 12;   //�ð��� �� �޿�
	}
	else {
		grosspay = hours * 40;
		overtimepay = (hours - 40) * (12 * 1.5);   //�ʰ����� = (40�ð� �����ϰ� ���� �ð�)*(�ð��� ����($12)*1.5��)
		grosspay = grosspay + overtimepay;     //�ѱ޿� = 40�ð����� �޿� + �ʰ�����
	}
	if (grosspay <= 300) {                 //�� �޿� $300���ϸ� ������ 15%
		taxes = grosspay * 0.15;
	}
	else if (grosspay > 300 && grosspay <= 450) {     //�� �޿� $300~$450�̸�
		taxes = 300 * 0.15;                          //������ 300���� ���� 15% + 300~450���� ���� 20%
		taxes = taxes + (grosspay - 300) * 0.2;
	}
	else {
		taxes = 300 * 0.15;                   //�� �޿� $450�̻�
		taxes = 150 * 0.2;                    //������ 300���� 15%, 300~450���� 20%, 450���� 25%
		taxes = taxes + (grosspay - 450) * 0.25;
	}

	netpay = grosspay - taxes; //���޿� = �ѱ޿� - ����

	printf("�� �޿� = %.1lf\n", grosspay);
	printf("���� = %.1lf\n", taxes);
	printf("���޿� = %.1lf\n", netpay);
}