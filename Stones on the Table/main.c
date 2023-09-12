#include <stdio.h>
#include <string.h>

int main(void)
{
	int		res;
	int 	num_stones;
	char	stones[50];

	res = 0;
	scanf("%d", &num_stones);
	scanf("%s", stones);
	for (int i = 0; i < num_stones - 1; i++)
	{
		if (stones[i] == stones[i + 1])
			res++;
	}
	printf("%d", res);
}