/***************************************************

자기주도 C언어 프로그래밍
Page394, assesment 18-6

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
100 이하의 정수를 입력받아 예와 같이 출력하시오. 

입력 예)
3

출력 예)
    *
  * * *
* * * * *
  * * *
    *

*/

#include <stdio.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	int num = 0;
	fscanf(in, "%d", &num);

	for (int i = 1; i<=(2*num)-1; i++)
	{
		if (i <= num)
		{
			for (int j = 1; j <= 2 * (num - i); j++)
			{
				printf(" ");
				fprintf(out, " ");
			}

			for (int j = 1; j <= (2 * i) - 1; j++)
			{
				printf("* ");
				fprintf(out, "* ");
			}
		}

		else
		{
			for (int j = 1; j <= 2*(i - num); j++)
			{
				printf(" ");
				fprintf(out, " ");
			}

			for (int j = 1; j <= (4*num-1)-(2*i); j++)
			{
				printf("* ");
				fprintf(out, "* ");
			}
		}
		printf("\n");
		fprintf(out, "\n");
		
	}
	fclose(in);
	fclose(out);

	return 0;
}


