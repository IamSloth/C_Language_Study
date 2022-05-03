/***************************************************

자기주도 C언어 프로그래밍
Page101, Self Test 5-6

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
남자는 ‘M', 여자는 'F' 로 나타내기로 하고 18세 이상을 성인이라고 하자.
성별과 나이를 입력받아 "MAN"(성인남자) "WOMAN"(성인여자) "BOY"(미성년남자) "GIRL"(미성년여자)
을 구분하여 출력하는 프로그램을 작성하시오.

입력 예) F 15
출력 예) GIRL
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int age = 0;
	char sex = 0;

	
	scanf(" %c %d", &sex, &age);

	printf("\n");

	if (sex == 'M')
	{
		if (age >= 18)
		{
			printf("MAN\n");
		}

		else
		{
			printf("BOY\n");
		}
		
	}

	else if (sex == 'F')
	{
		if (age >= 18)
		{
			printf("WOMAN\n");
		}

		else
		{
			printf("GIRL\n");
		}

	}

	return 0;
}