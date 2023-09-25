#include <stdio.h>




int main(void)
{
	int	i, j;
	int	password_len;
	int	distinct_chars;

	scanf("%d %d", &password_len, &distinct_chars);
	char	password[password_len + 1];
	for (i = 0; i < distinct_chars; i++)
		password[i] = 'a' + i;
	for (j = i; j < password_len; j++)
	{
		password[j] = password[j % distinct_chars];
	}

	password[j] = '\0';
	printf("%s", password);
}