#include <stdio.h>



int main(void)
{
	int	num_oranges;
	int	b;
	int	d;
	int	size;
	int	res;
	
	size = 0;
	res = 0;
	scanf("%d %d %d", &num_oranges, &b, &d);
	int oranges[num_oranges];
	for (int i = 0; i < num_oranges; i++)
		scanf("%d", &oranges[i]);

	for (int i = 0; i < num_oranges; i++)
	{
		if (oranges[i] <= b)
			size += oranges[i];
		if (size > d)
		{
			res++;
			size = 0;
		}
	}


	printf("%d", res);
}