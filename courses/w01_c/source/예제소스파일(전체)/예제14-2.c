#include <stdio.h>

int main(void)
{
	int num1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int num2[3][4] = { {1}, {5, 6}, {9, 10, 11} };
	int num3[][4] = { {1}, {2, 3}, {4, 5, 6} };
	int num4[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int num5[3][4] = {1, 2, 3, 4, 5, 6};
	int num6[][4] = {1, 2, 3, 4, 5, 6};
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num1[i][j]);   // 배열 요소 출력
		}
		printf("\n");                    // 한 행을 출력한 후에 줄 바꿈
	}

	return 0;
}