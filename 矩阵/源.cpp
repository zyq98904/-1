#include<stdio.h>

int main() {
	int a[4][4];
	printf("请输入矩阵所含元素,按行依次填入\n");
	for(int i=0;i<4;i++)
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<4; i++)
		for (int j = 0; j < 4; j++)
		{
			if (i == j) 
			{
				sum1 += a[i][j];
			}
		}
	for (int i = 0; i<4; i++)
		for (int j = 0; j < 4; j++)
		{
			if (i <= j)
			{
				sum2 += a[i][j];
			}
		}

	printf("该矩阵的主对角元素之和为:");
	printf("%d", sum1);
	printf("\n");
	printf("该矩阵的上三角元素之和为");
	printf("%d", sum2);
	printf("\n");
	return 0;
}