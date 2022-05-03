/***************************************************

자기주도 C언어 프로그래밍
Page348, Example 16-6

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
5명의 이름과 키 몸무게를 입력받아 키가 작은 순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 예)
이성빈 150 35.6
이도헌 155 28.9
신유리 148 32.7
정우경 160 41.2
이초인 165 38.7

출력 예)
신유리 148 32.7
이성빈 150 35.6
이도헌 155 28.9
정우경 160 41.2
이초인 165 38.7

*/

#include <stdio.h>
#include <string.h>

char name[5][20];
int he[5];
double we[5];

void input()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%s %d %lf", &name[i], &he[i], &we[i]);
	}
}

void sort()
{
	int i, j;
	char tmp_name[20];
	int tmp_he;
	double tmp_we;

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (he[i] > he[j])
			{
				strcpy(tmp_name, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], tmp_name);

				tmp_he = he[i];
				he[i] = he[j];
				he[j] = tmp_he;

				tmp_we = we[i];
				we[i] = we[j];
				we[j] = tmp_we;
			}
		}
	}
}

void output()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s %d %.1f\n", name[i], he[i], we[i]);
	}
}

int main()
{
	input();
	sort();
	puts("");
	output();
	return 0;
}