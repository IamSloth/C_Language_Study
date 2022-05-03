/***************************************************

자기주도 C언어 프로그래밍
Page354, assesment 16-5

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 n을 입력받은 후 n명의 이름(20자 이하)과 세 과목의 점수를 입력받아
총점이 높은 순으로 정렬하여 출력하는 프로그램을 작성하시오.
(1<= n <= 10)

입력 예)
3
Chung 50 65 89
Nolbu 100 38 99
Hungbu 85 95 77


출력 예)
Hungbu 85 95 77 257
Nolbu 100 38 99 237
Chung 50 65 89 204

*/

#include <stdio.h>
#include <string.h>


struct StudentInfo
{
	char name[20];
	int score[3];
	int sum = 0;
};

void inputInfo(struct StudentInfo arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		scanf("%s %d %d %d", arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
		arr[i].sum = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
	}

}

void sortStudnet(struct StudentInfo arr[], int N)
{
	struct StudentInfo temp;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i].sum < arr[j].sum)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void outputInfo(struct StudentInfo arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].sum);
	}
}


int main()
{
	int inputNum;
	scanf("%d", &inputNum);

	struct StudentInfo std[10];

	inputInfo(std, inputNum);
	sortStudnet(std, inputNum);
	printf("\n");
	outputInfo(std, inputNum);

	return 0;
}
