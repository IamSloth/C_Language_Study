/***************************************************
�ڱ��ֵ� C��� ���α׷���
Page249, example 12-5

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/

/** ���� **
�������� ���̸� �Է¹޾Ƽ� ���� ���̸� ���ϵ�
�Ҽ� ���ϸ� ������ ��� �ݿø��� ��� �ø��� ��츦
���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� 3.14�� �Ѵ�.

�Է� ��) ���� ������ : 6
		 
��� ��) ���� ����
		 ���� : 113
		 �ݿø� : 113
		 �ø� : 114
*/

#include <stdio.h>
#include <math.h>

double round(double val)
{
	return floor(val + 0.5);
}

int main()
{
	double radius, area, pi = 3.14;
	printf("���� ������ : ");
	scanf("%lf", &radius);

	area = pow(radius, 2) * pi;

	printf("���� ���� \n");
	printf("���� : %.0f\n", floor(area));
	printf("�ݿø� : %.0f\n", round(area));
	printf("�ø� : %.0f\n", ceil(area));

	return 0;
}