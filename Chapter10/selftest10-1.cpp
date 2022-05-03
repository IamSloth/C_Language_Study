/***************************************************

자기주도 C언어 프로그래밍
Page196, Selftest 10-1

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
영문 대문자를 입력받다가 대문자 이외의 문자가 입력되면 그 때까지
1번 이상 입력된 각 문자의 개수를 사전 순으로 출력하는 프로그램을 작성하시오.

입력 예) A B C F F F B Z !
		 
출력 예) A : 1
		 B : 2
		 C : 1
		 F : 3
		 Z : 1
*/


#include <stdio.h>

int main()
{
	printf("\n");

	char inputCap = 0;
	int count[26] = { 0 };
	while (1)
	{
		scanf(" %c", &inputCap);

		if (inputCap < 'A' || inputCap > 'Z')
		{
			break;
		}

		count[inputCap - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			printf("%c : %d\n", i+'A', count[i]);
		}
	}
	
	return 0;
}