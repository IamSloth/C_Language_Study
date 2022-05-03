/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page243, exmaple 12-2

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** ���� **
3������ ������ �Է� �޾Ƽ�
����� 60�̸��̰ų� 1�����̶� 40�� �̸��� ������ "���հ�" �ƴϸ� "�հ�"
�̶�� �޽����� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 3������ ������ �Է��ϼ���. 95 77 80

��� ��) �����մϴ�. �հ��Դϴ�. 

*/

#include <stdio.h>

void input(int arr[], int num)
{
	printf("3������ ������ �Է��ϼ���. ");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
}

bool pass(int arr[], int num)
{
	int sum = 0;
	int avg;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] < 40)
			return false;
		sum += arr[i];
	}
	avg = sum / num;
	
	if (avg < 60)
		return false;

	return true;
}

void output(bool isPass)
{
	if (isPass == true)
		printf("�����մϴ�. �հ��Դϴ�.\n");
	else
		printf("�˼��մϴ�. ���հ��Դϴ�.\n");
}

int main()
{
	int arr[3];

	input(arr, 3);
	output(pass(arr, 3));
}