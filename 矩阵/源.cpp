#include<stdio.h>

int main() {
	int a[4][4];
	printf("�������������Ԫ��,������������\n");
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

	printf("�þ�������Խ�Ԫ��֮��Ϊ:");
	printf("%d", sum1);
	printf("\n");
	printf("�þ����������Ԫ��֮��Ϊ");
	printf("%d", sum2);
	printf("\n");
	return 0;
}