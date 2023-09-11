#include <stdio.h>


void	str_to_lower(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void	str_to_upper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int main(void)
{
	int		lower_chars;
	int		upper_chars;
	char	str[100];

	lower_chars = 0;
	upper_chars = 0;
	scanf("%s", str);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper_chars++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			lower_chars++;
	}
	if (upper_chars > lower_chars)
		str_to_upper(str);
	else
		str_to_lower(str);
	printf("%s", str);
	return (0);
}