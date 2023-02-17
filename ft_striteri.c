/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:27:54 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 13:16:17 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
void	ft_42(unsigned a, char *b)
{
	*b = ft_toupper(*b);
}
int	main()
{
	char str[] = "berkay";
	ft_striteri(str, ft_42);
	printf("%s", str);
}*/