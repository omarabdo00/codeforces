#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int	x;
	scanf("%d", &x);

	while (x > 0)
	{
		int	n;
		scanf("%d", &n);

		int	i = 1, j = n;
		int *arr = malloc(sizeof(int) * n);

		if (arr == NULL)
		{
			return (1);
		}

		if (n % 2 == 0)
		{
			arr[0] = 2;
			arr[n - 1] = 1;
			while (i < n - 1)
			{
				if (i % 2 == 0)
				{
					arr[i] = j;
					j--;
				}
				i++;
			}
			i = 1;
			j = 3;
			while (i < n - 1)
			{
				if (i % 2 != 0 )
				{
					arr[i] = j;
					j++;
				}
				i++;
			}
		}
		if (n % 2 != 0)
		{
			arr[0] = 1;
			arr[n - 1] = 2;
			while (i < n - 1)
			{
				if (i % 2 == 0)
				{
					arr[i] = j;
					j--;
				}
				i++;
			}
			i = 1;
			j = 3;
			while (i < n - 1)
			{
				if (i % 2 != 0 )
				{
					arr[i] = j;
					j++;
				}
				i++;
			}
		}
		i = 0;
		while(i < n)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
		free(arr);
		arr = NULL;
		x--;
	}
	return (0);
}
