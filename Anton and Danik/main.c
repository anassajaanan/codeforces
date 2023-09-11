#include <stdio.h>

int main(void)
{
	int	anton;
	int	danik;	
	int games;

	anton = danik = 0;
	scanf("%d", &games);
	char	str[games];
	scanf("%s", str);
	for (int i = 0; i < games; i++)
	{
		if (str[i] == 'A')
			anton++;
		else if (str[i] == 'D')
			danik++;
	}
	if (anton > danik)
		printf("%s", "Anton");
	else if (anton < danik)
		printf("%s", "Danik");
	else
		printf("%s", "Friendship");
	return (0);
}