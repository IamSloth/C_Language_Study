/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page395, assesment 18-5

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
0�� �Էµ� ������ ������ �Է¹޾� 3�� ����̸鼭 5�� ����� ������
�Էµ� ������� ��� ����ϰ� ���� a�ٿ� �� ������ ����Ͻÿ�.
�� ���� ���� ��쿡�� 0�� ����Ѵ� �ԷµǴ� ������ �ִ밳���� 1000���̴�

�Է� ��)
10 20 30 55 66 77 88 99 100 15 0

��� ��)
30 15
2

*/

#include <stdio.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	int num[1000];
	int saveNum[1000];
	int cnt = 0;

	for(int i = 0; i < 1000; i++)
	{
		fscanf(in, "%d", &num[i]);
		if (num[i] == 0)
			break;

		else if (num[i] % 15 == 0)
		{
			saveNum[cnt] = num[i];
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		fprintf(out, "%d ", saveNum[i]);
	}
	fprintf(out, "\n%d", cnt);
			
	fclose(in);
	fclose(out);

	return 0;
}


