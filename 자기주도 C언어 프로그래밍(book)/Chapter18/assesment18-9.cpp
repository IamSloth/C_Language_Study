/***************************************************

자기주도 C언어 프로그래밍
Page396, assesment 18-9

This code is just for studying.
This code was written on April 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
공백을 포함한 한 문장을 입력받아서 전체 길이와 가장 긴 단어를 출력하시오.
단 최대 100자 이내이고 길이가 가장 긴 단어가 여러 개인 경우 공백으로 분리하여
한 줄에 순서대로 모두 출력한다.

입력 예)
The largest organ in the body is the liver.

출력 예)
43
largest

*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt", "r");
	FILE* out = fopen(".\\temp\\out.txt", "w");

	char ch[101];
	fgets(ch, 101, in);

	int len = strlen(ch);

	char divCh[50][50] = { 0 };

	int divStep1 = 0;
	int divStep2 = 0;
	int chStep = 0;
	while (1)
	{
		if (chStep > len)
		{
			break;
		}

		if (ch[chStep] == ' ')
		{
			chStep++;
			divStep1++;
			divStep2 = 0;
		}

		divCh[divStep1][divStep2] = ch[chStep];
		chStep++;
		divStep2++;
	}

	char* maxCh = divCh[0];

	for(int i = 1; i < chStep; i++)
	{
		if(strlen(maxCh) < strlen(divCh[i]))
		{
			maxCh = divCh[i];
		}
	}

	fprintf(out, "%d\n%s\n", len, maxCh);

	fclose(in);
	fclose(out);

	return 0;
}


