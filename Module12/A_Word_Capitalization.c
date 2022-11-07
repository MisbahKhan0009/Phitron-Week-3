#include <stdio.h>

int main()
{
	char buf[1000];
	int t;
	scanf("%d", &t);

	fgets(buf, sizeof(buf), stdin);
	if (buf[0] >= 'a' && buf[0] <= 'z')
	{
		buf[0] -= 32;
	}

	puts(buf);

	return 0;
}