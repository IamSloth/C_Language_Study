/***************************************************
�ڱ��ֵ� C��� ���α׷���
Page247, example 12-4

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/


/** ���� **
���簢���� ���̸� �Է¹޾Ƽ� �� ���� ���̸� ���ϰ� �ذ� ������ �Է¹޾�
�ŵ������� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 
		 
��� ��) 

���簢���� ���� : 36
���簢���� �� ���� ���� : 6.000000
�ذ� ���� : 4 2
4.000000�� 2.000000���� 16.000000�Դϴ�

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float inputArea;
	float base;
	float exp;

	printf("���簢���� ���� : ");
	scanf("%f", &inputArea);
	printf("���簢���� �� ���� ���� : %f\n", sqrt(inputArea));
	printf("�ذ� ���� : ");
	scanf("%f %f", &base, &exp);
	printf("%f�� %f���� %f�Դϴ�.\n", base, exp, pow(base, exp));

	return 0;
}