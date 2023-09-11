#include <stdio.h>
#include <string.h>

int main(void)
{
	char	name[100];
	int		hash_map[26];
	int		distinct_chars;

	distinct_chars = 0;
	scanf("%s", name);
	memset(hash_map, 0, sizeof(hash_map));
	for (int i = 0; name[i]; i++)
	{
		if (hash_map[name[i] - 'a'] == 0)
			hash_map[name[i] - 'a'] = 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (hash_map[i] == 1)
			distinct_chars++;
	}
	if (distinct_chars % 2 == 0)
		printf("CHAT WITH HER!");
	else
		printf("IGNORE HIM!");
	return (0);
}