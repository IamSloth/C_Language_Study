/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page276, example 13-6

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** ���� **
9�ڸ� ������ �ڿ����� �Է¹޾�
����Լ��� �̿��Ͽ� �� �ڸ� ���ڵ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 123456780
��� ��) 36
*/

#include <stdio.h>

int output(int n)
{
	if (n <= 0)
		return 0;
	return n%10 + output(n/10);
}

int main()
{
	int input;
	while (1)
	{
		scanf("%d", &input);
		if (input <= 0 || input > 999999999)
		{
			printf("9�ڸ� ������ �ڿ��� N�� �Է��ϼ���.\n");
			continue;
		}
		break;
	}

	printf("%d\n", output(input));
	return 0;
}