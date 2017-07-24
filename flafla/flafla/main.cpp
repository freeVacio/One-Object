#include <stdio.h>
#include <windows.h>

int main()
//{
//	int map();
//	system("pause");
//	return 0;
//}
//
//int map(void)
{
	int x, y, arr[10][10] =
	{
		{ 0,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
	};
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (arr[x][y] == 0)
			{
				printf("¡õ");
			}
			else
			{
				printf("¡ö");
			}
		}
		printf("\n");
	}
	//system("pause");
	getchar();

	return 0;
}

int main01()
{
	int a = 0;
	while (1)
	{
		printf("This is NULL");
		printf("\n");
		a += 1;
		if (a == 10)
		{
			break;
		}
	}
	system("pause");
	return 0;
}
