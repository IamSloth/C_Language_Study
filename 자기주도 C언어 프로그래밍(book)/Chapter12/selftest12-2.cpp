/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page244, selftest 12-2

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** ���� **
2016���� ��¥�� �� �Ϸ� �Է¹޾Ƽ�
�Էµ� ��¥�� �����ϸ� "OK!", �׷��� ������ "BAD!" ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 2 30
��� ��) BAD!

*/

#include <stdio.h>

void input(int month, int date[])
{
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		for (int i = 1; i <= 31; i++)
			date[i] = true;
		break;
	}

	case 4: case 6: case 9: case 11:
	{
		int i = 1;
		for (i = 1; i <= 30; i++)
			date[i] = true;
		date[i+1] = false;
		break;
	}

	case 2:
	{	
		int i = 1;
		for ( i = 1; i <= 29; i++)
			date[i] = true;
		date[i+1] = false;
		date[i+2] = false;
	}
	default :
		break;
	}
	
}

void output(int a, int date[])
{
	
	if (date[a] == true)
		printf("OK!\n");
	else
		printf("BAD!\n");
}

int main()
{
	int inputMonth;
	int inputDate;
	int arr[33];

	scanf("%d %d", &inputMonth, &inputDate);

	input(inputMonth, arr);
	output(inputDate, arr);
}