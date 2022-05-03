/***************************************************

자기주도 C언어 프로그래밍
Page108, Assesment 5-4

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
1번은 개, 2번은 고양이, 3번은 병아리로 정하고
번호를 입력하면 번호에 해당하는 동물을 영어로 출력하는 프로그램을 작성하시오.
해당 번호가 없으면 "I don't know."라고 출력하다.

입력 예) Number? 2
출력 예) cat
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int number = 0;

	printf("Number? ");
	scanf("%d", &number);

	printf("\n");

	switch (number)
	{
		case 1:
		{
			printf("dog\n");
			break;
		}

		case 2:
		{
			printf("cat\n");
			break;
		}

		case 3:
		{
			printf("chick\n");
			break;
		}

		default:
		{
			printf("I don't know.\n");
			break;
		}
	}
		
	
			
	return 0;
}