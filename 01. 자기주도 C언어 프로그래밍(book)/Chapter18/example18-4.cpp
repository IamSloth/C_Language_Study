/***************************************************

자기주도 C언어 프로그래밍
Page385, selftest 18-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
파일로부터 공백을 포함하여 100자 이하인 문자열을 입력받아 공백을 기준으로 단어별로 분리하여
저장한 후 한줄에 한 개씩 차례대로 출력하는 프로그램을 작성하시오.

입력 예)
There was a little girl.

출력 예)

Name	Score	 Rank
There
was
a
little
girl.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char st[101], dst[50][101];
	int len;
	int cnt1 = 0;
	int cnt2 = 0;

	FILE* in = fopen(".\\temp\\in.txt", "w");
	FILE* out = fopen(".\\temp\\out.txt", "r");

	fgets(st, 101, in);
	len = strlen(st);
	while (st[len - 1] == '\n' || st[len - 1] == '\0')
	{
		st[len - 1] = '\0';
	}

	for (int i = 0; i <= len; i++)
	{
		if (st[i] == ' ' || st[i] == '\0')
		{
			dst[cnt1][cnt2] = '\0';
			cnt1++;
			cnt2 = 0;
		}

		else
		{
			dst[cnt1][cnt2] = st[i];
			cnt2++;
		}
	}

	for (int i = 0; i < cnt1; i++)
	{
		fputs(dst[i], out);
		fputc('\n', out);
	}

	fclose(in);
	fclose(out);


	return 0;
}


