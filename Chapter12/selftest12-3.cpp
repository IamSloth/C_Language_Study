/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page246, selftest 12-3

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** ���� **
�� ���� ������ �Է¹޾� ���밪�� �� ū ���� ����ϰ�
�� ���� �Ǽ��� �Է¹޾� ���밪�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) -50 40
		 -12.34 5.67
��� ��) -50
		 5.67

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

	if (abs(b) > abs(a))
		a = b;

	if (fabs(c) > fabs(d))
		c = d;

	printf("%d\n", abs(a));
	printf("%lf\n", fabs(c));
}