/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page394, assesment 18-7

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
3000 ������ ������ �� ���� ������ �� ������ �Է¹޾Ƽ� ������ �� �������� ���Ͽ� ����Ͻÿ�.

�Է� ��)
2000 2008

��� ��)
3

*/

#include <stdio.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	int num1 = 0;
	int num2 = 0;
	int cnt = 0;

	fscanf(in, "%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		if (i % 4 == 0) // 1) 4�� ���������鼭
		{
			if (i % 100 != 0) // 1-1) 100���� �ȳ���������
			{
				cnt++; // ����
			}

			else if (i % 100 == 0 && i % 400 == 0) // 1-2) 100���� ���������鼭 400���ε� ����������
			{
				cnt++; // ����
			}
		}
	}

	fprintf(out, "%d", cnt);

	fclose(in);
	fclose(out);

	return 0;
}


