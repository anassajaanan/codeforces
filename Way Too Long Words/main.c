#include <stdio.h>
#include <string.h>


int main(void)
{
	int num_words;
	int word_len;

	scanf("%d", &num_words);
	char	words[num_words + 1][101];

	for (int i = 0; i < num_words; i++)
		scanf("%s", words[i]);

	for (int i = 0; i < num_words; i++)
	{
		word_len = strlen(words[i]);
		if (word_len <= 10)
			printf("%s\n", words[i]);
		else
		{
			printf("%c%d%c\n", words[i][0], word_len - 2, words[i][word_len - 1]);
		}
	}
}