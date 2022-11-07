#include <stdio.h>
#include <string.h>

int main()
{
	int t, count = 0, i;
	scanf("%d", &t);

	char ch[10000];

	for (int j = 0; j <= t; j++)
	{
		fgets(ch, sizeof(ch), stdin);
		int l = strlen(ch) - 1;

		if (l > 10)
		{
			printf("%c%d%c\n", ch[0], l - 2, ch[l - 1]);
		}
		else
		{
			printf("%s", ch);
		}
	}

	return 0;
}