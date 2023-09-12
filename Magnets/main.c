#include <stdio.h>
#include <string.h>

int main(void)
{
	int	num_groups;
	int	num_magnets;

	num_groups = 1;
	scanf("%d", &num_magnets);
	char	array[num_magnets][3];
	for (int i = 0; i < num_magnets; i++)
		scanf("%s", array[i]);
	for (int i = 0; i < num_magnets - 1; i++)
	{
		if (strcmp(array[i], array[i + 1]) != 0)
			num_groups++;
	}
	printf("%d", num_groups);
	return (0);
}