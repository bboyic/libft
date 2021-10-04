#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)ft_calloc(sizeof(char) * (len + 1));	
	while (*s && start > 0)
	{
		str++;
		start--;
	}
	while (*s && len > 0)
	{
		*str = (char)*s;
		len--;
	}
	return (res);
}

int	main(void)
{
	char	*str;

	str = ft_substr();
	free(str);
	return (0);
}