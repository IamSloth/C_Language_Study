/***************************************************

자기주도 C언어 프로그래밍
Page202, Selftest 10-4

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
3행 5열의 배열을 아래 출력 예와 같이 초기화 한 후 형식에 맞추어 출력하는
프로그램을 작성하시오. (수 사이 공백은 3칸으로 하고 각 수는 2칸으로 오른쪽에 맞춰 출력한다.)

입력 예) 
출력 예) 5   8 10  6 4
		 11 20  1 13 2
		 7   9 14 22 3
*/


#include <stdio.h>

int main()
{
	printf("\n");

	
	int outputNum[3][5] = { {5, 8, 10, 6, 4},
						    {11, 20, 1, 13, 2},
							{7, 9, 14, 22, 3} 
						   };

	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", outputNum[i][j]);
		}
		printf("\n");
	}



	return 0;
}