#include <stdio.h>

int main(void)
{
	int	i;
	int	shovel_price;
	int	burles;

	scanf("%d %d", &shovel_price, &burles);
	for (i = 1; ;i++)
	{
		if ((shovel_price *i) % 10 == 0 || (shovel_price * i - burles) % 10 == 0)
		{
			break;
		}
	}
	printf("%d", i);
}

