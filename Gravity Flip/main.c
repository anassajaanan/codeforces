#include <stdio.h>

int main(void)
{
	int	i;
	int temp;
	int	num_cols;

	scanf("%d", &num_cols);
	int array[num_cols];
	for (i = 0; i < num_cols; i++)
		scanf("%d", &array[i]);

	for (int i = 0; i < num_cols - 1; i++)
	{
		for (int j = i + 1; j < num_cols; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j]= temp;
			}
		}
	}
	for (i = 0; i < num_cols - 1; i++)
		printf("%d ", array[i]);
	printf("%d", array[i]);
}