/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page381, selftest 18-2

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
10���� �Ǽ��� �Է¹޾� ù ��° �Է� ���� ������ �Է� ���� ����� �ݿø��Ͽ�
�Ҽ� ù°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ǥ�� ��������� �ۼ��ؾ� ä���� �˴ϴ�*

�Է� ��)
15.3 123.5 0.69 85.12 3.0 51.9 100.1 1.58 5.5 10.5

��� ��)
12.9
*/

#include <stdio.h>

int main()
{
	FILE* input;
	FILE* output;

	input = fopen(".//temp//in.txt","r");
	output = fopen(".//temp//out.txt", "w");

	float fNum[10];
	float outNum;

	for (int i = 0; i < 10; i++)
	{
		fscanf(input, "%f", &fNum[i]);
	}

	outNum = (fNum[0] + fNum[9]) / 2;

	fprintf(output, "%.1f\n", outNum);
	printf("%.1f", outNum);

	fclose(input);
	fclose(output);
	
	return 0;
}


