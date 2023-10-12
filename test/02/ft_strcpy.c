char *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}
#include <stdio.h>
int main()
{
	char s1[10];
	char s2[5] = "salu";
	printf("%s", ft_strcpy(s1, s2));
}
