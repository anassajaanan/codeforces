#include <stdio.h>

int main(void)
{
	int res;
	int	games;

	res = 0;
	scanf("%d", &games);
	int	array[games][2];
	for (int i = 0; i < games; i++)
	{
		scanf("%d %d", &array[i][0], &array[i][1]);
	}
	// printf("\n\n");
	// for (int i = 0; i < games; i++)
	// {
	// 	printf("%d %d\n", array[i][0], array[i][1]);
	// }
	for (int i = 0; i < games - 1; i++)
	{
		for (int j = i + 1; j < games; j++)
		{
			if (array[i][0] == array[j][1])
				res++;
			if (array[i][1] == array[j][0])
				res++;
		}
	}
	printf("%d", res);
}