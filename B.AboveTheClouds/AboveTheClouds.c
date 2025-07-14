#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		char s[100005];
		scanf("%d", &n);
		scanf("%s", s);

		int cnt[26] = {0};
		for (int i = 0; i < n; i++)
			cnt[s[i] - 'a']++;

		int ok = 0;
		for (int i = 0; i < 26; i++)
		{
			if (cnt[i] >= 3)
			{
				ok = 1;
				break;
			}
			else if (cnt[i] == 2)
			{
				if (s[0]-'a' != i || s[n-1]-'a' != i)
				{
					ok = 1;
					break;
				}
			}
		}
		if (ok)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
