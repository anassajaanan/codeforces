#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int	x;
	int	friends;
	int	fence_height;
	int	total_width;

	total_width = 0;
	scanf("%d %d", &friends, &fence_height);
	for (int i = 0; i < friends; i++)
	{
		scanf("%d", &x);
		if (x > fence_height)
			total_width += 2;
		else
			total_width += 1;
	}
	printf("%d\n", total_width);
	return (0);
}
