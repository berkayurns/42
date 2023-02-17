/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:43:12 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 13:14:02 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*yer;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	yer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (yer == NULL)
		return (NULL);
	while (s1[i])
	{
		yer[i] = s1[i];
		i++;
	}
	while (s2[j])
		yer[i++] = s2[j++];
	yer[i] = '\0';
	return (yer);
}
#include <stdio.h>

int main()
{
	char s1[] = "Merhaba";
	char s2[] = "42Kocaeli";
	printf("%s",(char *)ft_strjoin(s1,s2));
}