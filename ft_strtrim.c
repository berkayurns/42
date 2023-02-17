/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:11:25 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 13:07:27 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*yer;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && checker(s1[i], set))
		i++;
	while (j > i && checker(s1[j - 1], set))
		j--;
	yer = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!yer)
		return (NULL);
	while (i < j)
		yer[k++] = s1[i++];
	yer[k] = '\0';
	return (yer);
}
#include <stdio.h>

int main()
{
	char s1[] = "XxXxXxxxMerhaba42KocaelixccssXX";
	char set[] = "X";

	printf("%s\n",ft_strtrim(s1,set));
}