/***************************************************
�ڱ��ֵ� C��� ���α׷���
Page251, example 12-6

This code is just for studying.
This code was written on April 17, 2022.
by IamSloth

****************************************************/


/** ���� **
�������� ���̸� �Է¹޾Ƽ� ���� �ѷ��� ���̸� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� 3.14�� �ϰ� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� ����Ѵ�

�Է� ��) 5.5
		 
��� ��) 34.54

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float r, ci;
	const double PI = 3.14;
	scanf("%f", &r);
	ci = r * 2 * PI;
	printf("%.2f\n", ci);
	return 0;
}