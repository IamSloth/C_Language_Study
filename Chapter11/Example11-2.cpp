/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page216, Example 11-1

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** ���� **
������ �Է� �޾� 10 ū ���� 10 ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է� ��) 50

��� ��) 10ū�� : 60
		 10������ : 40

================================
line �Լ��� ȣ���Ͽ����ϴ�.
line �Լ��� �ٽ� ȣ���մϴ�.
================================

*/


#include <stdio.h>

int main()
{
	int addTen(int num);
	int minusTen(int num);

	int inputNum = 0;
	scanf("%d", &inputNum);

	printf("10ū�� : %d\n", addTen(inputNum));
	printf("10������ : %d\n", minusTen(inputNum));
	return 0;
}

int addTen(int num)
{
	return num + 10;
}
int minusTen(int num)
{
	return num - 10;
}