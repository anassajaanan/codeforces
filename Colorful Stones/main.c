#include <stdio.h>


int main(void)
{
	int		i;
	int		j;
	char	str[50];
	char	instructions[50];

	scanf("%s", str);
	scanf("%s", instructions);
	i = j = 0;
	while (instructions[j])
	{
		if (str[i] == instructions[j])
			i++;
		j++;
	}
	printf("%d", i + 1);
	return (0);
}