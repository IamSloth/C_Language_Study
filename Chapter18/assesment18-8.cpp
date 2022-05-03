/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page394, assesment 18-8

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
ù° �ٿ� ���� n �� �Է¹ް�
���� �ٺ��� n�� �л��� 3���� ������ �Է¹޾�
����� ���Ͽ� ������ ���� ������ ����Ͻÿ�.
(����� �ݿø��Ͽ� �Ҽ� ù° �ڸ����� ����Ѵ�.)
2<= n <= 100

�Է� ��)
5
85 48 68
73 55 89
90 73 86
63 90 100
95 76 23

��� ��)
84.3
83.0
72.3
67.0
64.7

*/

#include <stdio.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	int num = 0;
	fscanf(in, "%d", &num);

	int** score = new int*[num]; //�������迭 �����Ҵ�
	for (int i = 0; i < num; i++)
	{
		score[i] = new int[3];
	}

	int* sum = new int[num];
	float* avg = new float[num];

	for (int i = 0; i < num; i++)
	{
		sum[i] = 0;
		avg[i] = 0;
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(in, "%d", &score[i][j]);
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] += score[i][j];
		}
	}

	for (int i = 0; i < num; i++)
	{
		avg[i] = sum[i] / 3.0;
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (avg[i] < avg[j])
			{
				float temp = avg[i];
				avg[i] = avg[j];
				avg[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		fprintf(out, "%.1f\n", avg[i]);
		printf("%.1f\n", avg[i]);
	}



	delete[]avg;
	delete[]sum;

	for (int i = 0; i < num; i++)
	{
		delete[]score[i];
	}
	delete[]score;

	fclose(in);
	fclose(out);

	return 0;
}


