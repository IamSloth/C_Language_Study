/***************************************************

자기주도 C언어 프로그래밍
Page394, assesment 18-7

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
3000 이하의 정수로 된 시작 연도와 끝 연도를 입력받아서 윤년이 몇 번인지를 구하여 출력하시오.

입력 예)
2000 2008

출력 예)
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
		if (i % 4 == 0) // 1) 4로 나누어지면서
		{
			if (i % 100 != 0) // 1-1) 100으로 안나누어지면
			{
				cnt++; // 윤년
			}

			else if (i % 100 == 0 && i % 400 == 0) // 1-2) 100으로 나누어지면서 400으로도 나누어지면
			{
				cnt++; // 윤년
			}
		}
	}

	fprintf(out, "%d", cnt);

	fclose(in);
	fclose(out);

	return 0;
}


