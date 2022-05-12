#include "push_swap.h"

int	ft_isdigit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(char *s)
{
	unsigned long long	res;
	int					sign;
	char				*p;

	p = (char *)s;
	sign = 1;
	res = 0;
	while (*p == '\n' || *p == '\t' || *p == '\v' || *p == '\f'
		|| *p == '\r' || *p == ' ')
		p++;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		res = res * 10 + *p - '0';
		p++;
	}
	return ((int)res * sign);
}
