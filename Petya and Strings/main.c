#include <stdio.h>
#include <string.h>


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

int main(void)
{
	int		i;
	char	s1[100];
	char	s2[100];

	i = 0;
	scanf("%s", s1);
	scanf("%s", s2);
	// memset(s1, 0, 100);
	// memset(s2, 0, 100);
	str_to_lower(s1);
	str_to_lower(s2);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] > s2[i])
		printf("%d", 1);
	else if (s1[i] < s2[i])
		printf("%d", -1);
	else
		printf("%d", 0);
	return (0);
}