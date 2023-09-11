#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	i;
	int	j;
	int	col;
	int	row;
	int	matrix[5][5];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			scanf("%d", &matrix[i][j]);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (matrix[i][j] == 1)
			{
				row = i;
				col = j;
			}
		}
	}
	printf("%d", abs(row - 2) + abs(col - 2));
	return (0);
}