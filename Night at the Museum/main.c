#include <stdio.h>
#include <stdlib.h>


int	count_rotations(int old_char, int current_char)
{
	int res;
	
	res = abs(current_char - old_char) % 26;
	if (res > 13)
		return (26 - res);
	else
		return (res);
}

int main(void)
{
	char	old_char;
	int		rotations;
	char	str[100];

	old_char = 'a';
	rotations = 0;
	scanf("%s", str);
	for (int i = 0; str[i]; i++)
	{
		rotations += count_rotations(old_char, str[i]);
		old_char = str[i];
	}
	printf("%d", rotations);
	return (0);
}