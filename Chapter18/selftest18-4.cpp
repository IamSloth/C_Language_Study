/***************************************************

자기주도 C언어 프로그래밍
Page385, selftest 18-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
공백을 포함한 100자 이하의 문자열을 두 번 입력받아
길이가 작은 문자열과 긴 문자열의 순으로 출력하는 프로그램을 작성하시오.
표준 입출력으로 작성해야 채점이 됩니다
*

입력 예)
Love, like you've never been hurt.
Live, like today is the lost day to live.

출력 예)

Love, like you've never been hurt.
Live, like today is the lost day to live.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };

	FILE* in;
	in = fopen(".\\temp\\in.txt", "r");

	FILE* out;
	out = fopen(".\\temp\\out.txt", "w");
	
	fgets(ch1, 100, in);
	fgets(ch2, 100, in);

	if (strlen(ch1) > strlen(ch2))
	{
		fprintf(out, "%s\n", ch2);
		fprintf(out, "%s\n", ch1);
	}

	else
	{
		fprintf(out, "%s\n", ch1);
		fprintf(out, "%s\n", ch2);
	}

	fclose(in);
	fclose(out);

	return 0;
}


