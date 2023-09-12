#include <stdio.h>


int main(void)
{
	int i;
	int	j;
	int	sereja_points;
	int	dima_points;
	int	num_cards;

	scanf("%d", &num_cards);
	int	cards[num_cards];
	for (int i = 0; i < num_cards; i++)
		scanf("%d", &cards[i]);
	i = 0;
	j = num_cards - 1;
	sereja_points = dima_points = 0;
	while (i < j)
	{
		if (cards[i] > cards[j])
			sereja_points += cards[i++];
		else
			sereja_points += cards[j--];
		if (i <= j && cards[i] > cards[j])
			dima_points += cards[i++];
		else
			dima_points += cards[j--];
	}
	if (num_cards % 2 != 0)
		sereja_points += cards[i];
	printf("%d %d", sereja_points, dima_points);
	return (0);
}