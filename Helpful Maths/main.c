#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	int i;
	int digits_len;
	char str[100];
	char digits[100];

	scanf("%s", str);

	digits_len = 0;
	for (i = 0; i < strlen(str); i += 2)
		digits[digits_len++] = str[i];
	
	for (int i = 0; i < digits_len - 1; i++)
	{
		for (int k = i + 1; k < digits_len; k++)
		{
			if (digits[i] > digits[k])
			{
				char temp = digits[i];
				digits[i] = digits[k];
				digits[k] = temp;
			}
		}
	}

	for (int i = 0, l = 0; i < strlen(str); i += 2)
	{
		str[i] = digits[l];
		l++;
	}
	printf("%s", str);

}