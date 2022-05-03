/***************************************************

자기주도 C언어 프로그래밍
Page43, Self Test 2-5

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	double inputYard = 2.1;
	double inputInch = 10.5;
	
	double perYard = 91.44;
	double perInch = 2.54;

	printf(" %.1fyd = %.1fcm\n", inputYard, inputYard * perYard);
	printf("%.1fin = %.1fcm", inputInch, inputInch * perInch);

	return 0;
}