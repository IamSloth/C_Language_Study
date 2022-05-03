/***************************************************

자기주도 C언어 프로그래밍
Page334, example 16-1

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
이름과 나이를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.

입력 예) 당신의 이름은 무엇입니까? 홍길동
		 당신의 나이는 몇 살입니까? 15

출력 예) 당신의 이름은 홍길동이고 나이는 15세이군요.

*/

#include <stdio.h>

struct data
{
	char name[20];
	int age;
};

int main()
{
	struct data self;
	printf("당신의 이름은 무엇입니까? ");
	scanf("%s", self.name);
	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &self.age);
	printf("당신의 이름은 %s이고 ", self.name);
	printf("나이는 %d세이군요. \n", self.age);

	return 0;
}


