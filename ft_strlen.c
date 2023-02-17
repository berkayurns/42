/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:44:49 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 13:11:40 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *str)

{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(void)
{	
	printf("%zu", ft_strlen("c12"));
	return (0);
}