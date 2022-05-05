/***************************************************

자기주도 C언어 프로그래밍
Page191, Assesment 9-6

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
6개의 문자배열을 만들고 {'J', 'U', 'N', 'G', 'O', 'L'} 이라고 초기화 한 후
문자 한 개를 입력받아 배열에서의 위치를 출력하는 프로그램을 작성하시오
첫 번째 위치는 0번이며 배열에 없는 문자가 입력되면 “none” 이라는 메시지를 출력한다.

입력 예) L
출력 예) 5

입력 예) B
출력 예) none
*/


#include <stdio.h>

int main()
{
	printf("\n");

	char ch[6] = {'J','U','N','G','O','L'};
	char inputCh = 0;

	scanf(" %c", &inputCh);

	for (int i = 0; i < 7; i++)
	{
		if (ch[i] == inputCh)
		{
			printf("%d\n", i);
			break;
		}

		if (i == 6)
		{
			printf("none\n");
		}
		
	}

	
}