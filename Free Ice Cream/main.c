#include <stdio.h>

int main(void)
{
	int len_queue;
	long long  ice_cream_packs;
	int	distressed_kids;

	distressed_kids = 0;
	scanf("%d %lld", &len_queue, &ice_cream_packs);
	// printf("len queue : %d\n", len_queue);
	char		symbols[len_queue];
	long long	packs[len_queue];
	for (int i = 0; i < len_queue; i++)
		scanf(" %c %lld", &symbols[i], &packs[i]);
	for (int i = 0; i < len_queue; i++)
	{
		if (symbols[i] == '+')
			ice_cream_packs += packs[i];
		else
		{
			if (ice_cream_packs >= packs[i])
				ice_cream_packs -= packs[i];
			else
				distressed_kids++;
		}
	}
	printf("%lld %d", ice_cream_packs, distressed_kids);
}