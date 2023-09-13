#include <stdio.h>


int main(void)
{
	int y;
	int	w;
	int	max;

	scanf("%d %d", &y, &w);
	max = y;
	if (y < w)
		max = w;
	int numerator = 6 - max + 1;
	int	denominator = 6;
	for (int i = 2; i <= numerator; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator /= i;
			denominator /= i;
		}
	}
	printf("%d/%d", numerator, denominator);
}