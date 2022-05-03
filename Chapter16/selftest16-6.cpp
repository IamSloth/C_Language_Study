/***************************************************

자기주도 C언어 프로그래밍
Page345, example 16-5

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
5명의 이름과 키 몸무게를 입력받아 이름순으로 정렬하여 출력하고
몸무게가 무거운 순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 예)
Lee 150 35.6
Kim 155 28.9
Sin 148 32.7
Jung 160 41.2
Park 165 38.7

출력 예)

name
Jung 160 41.2
Kim 155 28.9
Lee 150 35.6
Park 165 38.7
Sin 148 32.7

weight
Jung 160 41.2
Park 165 38.7
Lee 150 35.6
Sin 148 32.7
Kim 155 28.9
*/

#include <stdio.h>
#include <string.h>


struct info
{
	char name[20];
	float weight;
	int height;
};

void sortPrintf(struct info arr[], int n)
{
	struct info temp;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i].name[0] > arr[j].name[0])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	printf("name\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s %d %.1f\n", arr[i].name, arr[i].height, arr[i].weight);
	}

	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i].weight < arr[j].weight)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	printf("weight\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s %d %.1f\n", arr[i].name, arr[i].height, arr[i].weight);
	}


}



int main()
{
	struct info person[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d %f", person[i].name, &person[i].height, &person[i].weight);
	}

	sortPrintf(person, 5);



	return 0;
}
