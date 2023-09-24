#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int		i, j, len;
	char	str[1000];

	i = 0;
	j = 1;
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	if (len == 3)
	{
		printf("%d", 0);
		return (0);
	}
	while (j < len - 1)
	{
		str[i] = str[j];
		i++;
		j += 3;
	}
	for (int k = i; k < len; k++)
		str[k] = 0;
	

	int byte;
	for (int k = 0; k < i; k++)
	{
		int mask = 1 << (str[k] - 'a');
		if ((byte & mask) == 0)
			byte |= mask;
	}
	int res = 0;
	for (int k = 0; k < 26; k++)
	{
		int mask = 1 << k;
		if ((byte & mask) != 0)
			res++;
	}
	printf("%d", res);
}