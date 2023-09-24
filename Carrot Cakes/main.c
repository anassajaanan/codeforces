#include <stdio.h>

int main(void)
{
	int n, t, k, d;
	int	time1, time2;
	int second_oven;

	time1 = time2 = second_oven = 0;
	scanf("%d %d %d %d", &n, &t, &k, &d);

	for (int i = 0; i < n; i += k)
		time1 += t;

	int i = 0;
	while (i < n)
	{
		if (time2 == d)
			second_oven = 1;
		if (time2 > 0 && time2 % t == 0)
			i += k;
		if (second_oven)
		{
			if ((time2 - d) > 0 && (time2 - d) % t == 0)
				i += k;
		}
		if (i < n)
			time2++;
	}

	if (time2 < time1)
		printf("YES");
	else
	 	printf("NO");
}