/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page245, example 12-3

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** ���� **
�� ������ �Է¹޾� ���� ���ϰ� �� �Ǽ��� �Է¹޾� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 58 62
		 1.25 52.23
��� ��) �� ������ �� : 4
		 �� �Ǽ��� �� : 50.980000

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;
	double c, d;

	scanf("%d %d", &a, &b);
	scanf("%lf %lf", &c, &d);

	printf("�� ������ �� : %d\n", abs(a - b));
	printf("�� �Ǽ��� �� : %lf\n", fabs(c - d));
}