/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:14:35 by burun             #+#    #+#             */
/*   Updated: 2022/12/21 13:30:34 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int str)

{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
int main()
{
	char s = ' ';
	printf("%d", ft_isalnum(s));
}*/