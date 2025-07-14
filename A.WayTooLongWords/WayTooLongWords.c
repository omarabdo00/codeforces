#include <stdio.h>

int		ft_strlen(const char *s);

int	main(void)
{
	int		i;

	scanf("%d", &i);
	while (i > 0)
	{
		char	a[105];
		int			len;

		scanf("%s", a);
		len = ft_strlen(a);
		if (len > 10)
		{
			printf("%c%d%c\n", a[0], len - 2, a[len - 1]);
		}
		else
		{
			printf("%s\n", a);
		}
		i--;
	}
}

int	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
