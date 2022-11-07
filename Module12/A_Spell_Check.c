#include <stdio.h>
#include <string.h>

int main()
{
	char name[15];
	int t, flag = 0;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);

		if (n == 5)
		{
			scanf("%s", name);
			for (int i = 0; name[i] != '\0'; i++)
			{
				if (name[i] == 'T' || name[i] == 'i' || name[i] == 'm' || name[i] == 'u' || name[i] == 'r')
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
			}

			if (flag == 1)
			{
				printf("YES\n");
			}
			else if (flag == 0)
			{
				printf("NO\n");
			}
		}
		else
		{
			scanf("%s", name);
			printf("NO\n");
		}
	}
	return 0;
}