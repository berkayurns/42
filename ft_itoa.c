/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:46:52 by burun             #+#    #+#             */
/*   Updated: 2022/12/21 14:03:36 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*writetos(char *str, int i, long nbr, int n)
{
	str[i--] = '\0';
	while (nbr > 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n == 0 && str[1] == '\0')
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	i;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		i = 1;
		nbr = -nbr;
	}
	i += ft_intlen(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	return (writetos(str, i, nbr, n));
}
int main()
{
	printf("%s",ft_itoa(-123));
}