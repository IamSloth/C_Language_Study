/***************************************************

자기주도 C언어 프로그래밍
Page394, assesment 18-8

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
첫째 줄에 정수 n 을 입력받고
다음 줄부터 n명 학생의 3과목 점수를 입력받아
평균을 구하여 점수가 높은 순으로 출력하시오.
(평균은 반올림하여 소수 첫째 자리까지 출력한다.)
2<= n <= 100

입력 예)
5
85 48 68
73 55 89
90 73 86
63 90 100
95 76 23

출력 예)
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

	int** score = new int*[num]; //이차원배열 동적할당
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


