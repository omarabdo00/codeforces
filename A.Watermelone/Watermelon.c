#include <stdio.h>
int	main()
{
	int	x = 0;

	scanf("%d",&x);
	if ((x > 3) && (x % 2 == 0))
	{
		puts("YES");
	}
	else
		puts("NO");
	return(0);
}
