/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page376, example 18-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
"input.txt" ���Ϸκ��� �̸��� ����, ���������� �Է¹޾�
�̸��� �հ� ����� ȭ��� "output.txt" ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
����� 90 95

��� ��)
����� 185 92.5
*/

#include <stdio.h>

int main()
{
	int sum, kor, eng;
	double avg;
	char name[100];

	FILE* in, * out;
	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	fscanf(in, "%s %d %d", name, &kor, &eng);

	sum = kor + eng;
	avg = (kor + eng) / 2.0;

	printf("%s %d %.1f \n", name, sum, avg);
	fprintf(out, "%s %d %.1f \n", name, sum, avg);

	fclose(in);
	fclose(out);


	return 0;
}


