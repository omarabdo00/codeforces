#include <stdio.h>

int	main()
{
	int	temp[5][5];
	int	i = 0, j = 0;
	int	x = 0, y = 0;

	while(i <= 4)
	{
		while(j <= 4)
		{
			scanf("%d", &temp[i][j]);
			if (temp[i][j] == 1)
			{
				x = i - 2;
				y = j - 2;
				if (x < 0)
					x *= -1;
				if (y < 0)
					y *= -1;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("%d", (x + y));
	return (0);

}
