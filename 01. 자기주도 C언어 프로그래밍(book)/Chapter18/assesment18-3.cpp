/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page394, assesment 18-3

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
�� ������ �� ���� ������(+, -, *, /, %)�� �Է¹޾�
������ ����Ͻÿ�

�Է� ��)
82 51 +

��� ��)
82 + 51 = 133
*/

#include <stdio.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	int num[2];
	char op = 0;
	float result = 0;

	fscanf(in, "%d %d %c", &num[0], &num[1], &op);

	switch (op)
	{
		case '+':
		{
			result = num[0] + num[1];
			break;
		}
		case '-':
		{
			result = num[0] - num[1];
			break;
		}
		case '*':
		{
			result = num[0] * num[1];
			break;
		}
		case '/':
		{
			result = num[0] / (float)num[1];
			break;
		}
		case '%':
		{
			result = num[0] % num[1];
			break;
		}
						
		default:
			break;
	}

	fprintf(out, "%d %c %d = %.0f\n",num[0],op,num[1],result);
	
	fclose(in);
	fclose(out);

	return 0;
}


