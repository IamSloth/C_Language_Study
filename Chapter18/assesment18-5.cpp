/***************************************************

자기주도 C언어 프로그래밍
Page395, assesment 18-5

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
0이 입력될 때까지 정수를 입력받아 3의 배수이면서 5의 배수인 정수를
입력된 순서대로 모두 출력하고 다음 a줄에 그 개수를 출력하시오.
한 개도 없을 경우에는 0만 출력한다 입력되는 정수의 최대개수는 1000개이다

입력 예)
10 20 30 55 66 77 88 99 100 15 0

출력 예)
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


