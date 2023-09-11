#include <stdio.h>

int main(void)
{
	int i;
	int limak_weight;
	int	bob_weight;

	scanf("%d %d", &limak_weight, &bob_weight);
	for (i = 0; limak_weight <= bob_weight; i++)
	{
		limak_weight *= 3;
		bob_weight *= 2;
	}
	printf("%d\n", i);
	return (0);
}