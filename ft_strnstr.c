/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:47:03 by burun             #+#    #+#             */
/*   Updated: 2022/12/13 16:37:58 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *aa, const char *bb, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (bb[0] == '\0')
		return ((char *)aa);
	while (aa[a] != '\0')
	{
		b = 0;
		while (aa[a + b] == bb[b] && (a + b) < len)
		{
			if (aa[a + b] == '\0' && bb[b] == '\0')
				return ((char *)&aa[a]);
			b++;
		}
		if (bb[b] == '\0')
			return ((char *)aa + a);
				a++;
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	char samanlik[] = "ab42Ko";
// 	char igne[] = "42";

// 	printf("%s",ft_strnstr(samanlik,igne,4));
// }