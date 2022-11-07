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
		while (n--)
		{
			scanf("%s", name);
		}

		int l=strlen(name)-1;

		if (l==5)
		{
			
			
			char temp[] = "Timur";
			for (int i = 0; name[i] != '\0'; i++)
			{
				if (name[i] == 'T')
				{
					name[i]=name[0];
				}
				continue;
				if (name[i] == 'i')
				{
					name[i]=name[1];
				}
				continue;
				if (name[i] == 'm')
				{
					name[i]=name[2];
				}
				continue;
				if (name[i] == 'u')
				{
					name[i]=name[3];
				}
				continue;
				if (name[i] == 'r')
				{
					name[i]=name[4];
				}
				break;
			}
			if (strcmp(name, temp)==0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
			
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}