#include <stdio.h>

int main(void)
{
	int	x;
	int	count;
	int	num_problems;
	int	solved_problems;

	solved_problems = 0;
	scanf("%d", &num_problems);
	for (int i = 0; i < num_problems; i++)
	{
		count = 0;
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &x);
			if (x == 1)
				count++;
		}
		if (count >= 2)
			solved_problems++;
	}
	printf("%d", solved_problems);
	return (0);
}