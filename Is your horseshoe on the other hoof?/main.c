#include <stdio.h>


int main(void)
{
	int	ans;
	int array[4];

	ans = 0;
	for (int i = 0; i < 4; i++)
		scanf("%d", &array[i]);
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (array[i] > 0 && array[i] == array[j])
			{
				ans++;
				array[j] = -1;
			}
		}
	}
	printf("%d", ans);
}